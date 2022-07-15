#ifndef LIST_H
#define LIST_H

#include <QWidget>
#include<QListView>

class list : public QListView
{
    Q_OBJECT
public:
    explicit list(QWidget *parent = nullptr);
protected:
    void mouseReleaseEvent(QMouseEvent *event) override;   //社区界面右键显示创建者
    void sentSign(int,bool);
signals:
    void releaseSign(int,bool);
};

#endif // LIST_H
