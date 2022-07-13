<<<<<<< HEAD
#ifndef TEXTWIDGET_H
#define TEXTWIDGET_H

#include <QWidget>
#include<QString>
#include<QPushButton>

namespace Ui {
class textWidget;
}

class textWidget : public QWidget
{
    Q_OBJECT

public:
    explicit textWidget(QWidget *parent = nullptr);
    ~textWidget();

    void setText(QString);
    void setButtonNum(int);
    //void sendSign(int);
    //void send();

private:
    Ui::textWidget *ui;
signals:
    void deletSign();

private slots:
    //void on_pushButton_clicked();
    void on_pushButton_clicked();
};

#endif // TEXTWIDGET_H
=======
#ifndef TEXTWIDGET_H
#define TEXTWIDGET_H

#include <QWidget>
#include<QString>
#include<QPushButton>

namespace Ui {
class textWidget;
}

class textWidget : public QWidget
{
    Q_OBJECT

public:
    explicit textWidget(QWidget *parent = nullptr);
    ~textWidget();

    void setText(QString);
    void setButtonNum(int);
    //void sendSign(int);
    //void send();

private:
    Ui::textWidget *ui;
signals:
    void deletSign();

private slots:
    //void on_pushButton_clicked();
    void on_pushButton_clicked();
};

#endif // TEXTWIDGET_H
>>>>>>> 2eb71704895be52a98e79182392a43d1dcbc0888
