#include "table.h"
#include<QTableView>
#include<QTableWidget>
#include<QDebug>
#include<QMouseEvent>

table::table(QWidget *parent) : QTableView(parent)
{

}


//鼠标右键点击事件
void table::mouseReleaseEvent(QMouseEvent *event){
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

void table::sentSign(int i,bool b){
    emit releaseSign(i,b);
}
