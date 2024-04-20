#ifndef UTILS_HPP
#define UTILS_HPP

#include <QLabel>
#include <QScrollArea>
#include <QScrollBar>
#include <QMouseEvent>
#include <QDir>
#include <iostream>
#include <vector>

class ImageViewer : public QScrollArea{
  Q_OBJECT
public:
    ImageViewer(QWidget *parent = nullptr) : QScrollArea(parent), isDragging(false){
        setWidgetResizable(true);
    }

  bool LoadImage(const QString &path){
      if(false == pixmap.load(path))return false;
      label.setPixmap(pixmap);
      label.setScaledContents(true);
      setWidget(&label);
      return true;
  }

protected:
    void mousePressEvent(QMouseEvent *event) override{
        if (event->button() == Qt::LeftButton){
            lastPos = event->pos();
            isDragging = true;
        }
    }

    void mouseMoveEvent(QMouseEvent *event) override{
        if (isDragging){
            int dx = event->x() - lastPos.x();
            int dy = event->y() - lastPos.y();
            lastPos = event->pos();

            QScrollBar *hBar = horizontalScrollBar();
            QScrollBar *vBar = verticalScrollBar();

            hBar->setValue(hBar->value() - dx);
            vBar->setValue(vBar->value() - dy);
        }
    }

    void mouseReleaseEvent(QMouseEvent *event) override{
        if (event->button() == Qt::LeftButton){
            isDragging = false;
        }
    }

private:
    QLabel label;
    QPixmap pixmap;
    bool isDragging;
    QPoint lastPos;
};

class SimpleImageItem: public QListWidgetItem{
public:
  SimpleImageItem(const QString &image_path):is_null_(false){
    auto icon = QIcon(image_path);
    is_null_ = icon.isNull();
    setIcon(icon);
  }
  bool IsNull(){
    return is_null_;
  }
  private:
    bool is_null_;
};

class ThumbnailImage : public QListWidget{
    Q_OBJECT
public:
    ThumbnailImage(QListWidget *parent=nullptr):QListWidget(parent),ctrl_press_(false),num_(0){
        setViewMode(QListView::IconMode);
        setResizeMode(QListWidget::Adjust);
        //设置鼠标追踪（重要）,否则无法触发槽函数
	    setMouseTracking(true);
        setStyleSheet("QListWidget::item:hover{background-color: #4671f1;}");
        
    }

    size_t GetTotalNum(){
        return num_;
    }
    void SetImageSize(const QSize &size){
        setIconSize(size);
    }
    void SetSpacing(int space){
        setSpacing(space);
    }

    int LoadImages(const QString &dir,const  QSize &item_size = QSize(150,100), int space=10){
        SetImageSize(item_size);
        SetSpacing(space);
        QDir dir_t(dir);
        int num = 0;
        for(auto &file_name:dir_t.entryList(QDir::Files)){
            auto simple_image_view = new SimpleImageItem(dir_t.absoluteFilePath(file_name));
            if(simple_image_view->IsNull())delete simple_image_view;
            else {
                addItem(simple_image_view);
                num++;
            }
        }
        num_+=num;
        return num;
    }

protected:
    //key press
    void keyPressEvent(QKeyEvent *event) override {
        if (event->key() == Qt::Key_Delete) {   //delete
            SelectedDelete();
            auto current_item = currentItem();
            if (nullptr != current_item) {
                current_item->setBackground(QBrush(QColor("#4671f1")));
                selected_item_.emplace_back(current_item);
            }
        }
        if(event->key() == Qt::Key_Control){//ctrl
            ctrl_press_ = true;
        }
        QListWidget::keyPressEvent(event);//调用父类中该事件，确保父类功能没有被覆盖
    }
    //key release
    void keyReleaseEvent(QKeyEvent *event) override {
        if (event->key() == Qt::Key_Control) {
            ctrl_press_ = false;
        }
        QListWidget::keyReleaseEvent(event);
    }
    void mousePressEvent(QMouseEvent *event) override {
        if (event->button() == Qt::LeftButton) {  //mouse left
            auto clickedItem = itemAt(event->pos());
            if (nullptr != clickedItem) {
                if (true == ctrl_press_) {// ctrl + mouse_left
                    clickedItem->setBackground(QBrush(QColor("#4671f1")));
                    selected_item_.emplace_back(clickedItem);
                } else { //mouse_left
                    SelectedCancel();
                    clickedItem->setBackground(QBrush(QColor("#4671f1")));
                    selected_item_.emplace_back(clickedItem);
                }
            }
        }
        QListWidget::mousePressEvent(event);
    }
private:
    void SelectedCancel(){
        for(auto &item:selected_item_){
            if(nullptr!=item){
                item->setBackground(QBrush());
            }
        }
        selected_item_.clear();
    }
    void SelectedDelete(){
        for(auto &item:selected_item_){
            if(nullptr!=item){
                delete item;
            }
        }
        selected_item_.clear();
    }

private:
        size_t num_;
        bool ctrl_press_ ;
        std::vector<QListWidgetItem *> selected_item_;
};

#endif