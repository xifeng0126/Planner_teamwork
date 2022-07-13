#include "list.h"
#include<QDebug>
#include<QMouseEvent>

list::list(QWidget *parent) : QListView(parent)
{

}
void list::mouseReleaseEvent(QMouseEvent *event){
    int curRow = currentIndex().row();
    if(curRow<0){
        qDebug()<<"wrong";
        return;
    }
    if(event->button()==Qt::LeftButton){
        sentSign(curRow,true);
    }
     if(event->button()==Qt::RightButton){
        sentSign(curRow,false);
     }
}

void list::sentSign(int i,bool b){
    emit releaseSign(i,b);
}
