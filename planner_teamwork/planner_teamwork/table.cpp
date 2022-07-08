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
    if(event->button()==Qt::RightButton){
        int curRow = currentIndex().row();
        if(curRow<0){
            qDebug()<<"wrong";
            return;
        }
        sentSign(curRow);
    }
}

void table::sentSign(int i){
    emit releaseSign(i);
}
