#include "table.h"
#include<QTableView>
#include<QTableWidget>
#include<QDebug>
#include<QMouseEvent>

table::table(QWidget *parent) : QTableView(parent)
{

}
void table::mouseReleaseEvent(QMouseEvent *event){
    if(event->button()==Qt::RightButton){
        int curRow = currentIndex().row();
        //qDebug()<<curRow;
        //connect(this,&table::mouseReleaseEvent,this,releaseSign(curRow));
        sentSign(curRow);
    }


}

void table::sentSign(int i){
    emit releaseSign(i);
}
