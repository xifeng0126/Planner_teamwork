#ifndef TABLE_H
#define TABLE_H

#include <QWidget>
#include<QTableView>

class table : public QTableView
{
    Q_OBJECT
public:
    explicit table(QWidget *parent = nullptr);
protected:
    void mouseReleaseEvent(QMouseEvent *event) override;

    void sentSign(int);
signals:
    void releaseSign(int);
};

#endif // TABLE_H
