#ifndef NOTEWINDOW_H
#define NOTEWINDOW_H

#include <QMainWindow>

namespace Ui {
class noteWindow;
}

class noteWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit noteWindow(QWidget *parent = nullptr);
    ~noteWindow();

private slots:
    void on_tasksButton_clicked();

    void on_comButton_clicked();

    void on_noteButton_clicked();

    void on_tomatoButton_clicked();

signals:
    void tasks();
    void com();
    void note();
    void tomato();

private:
    Ui::noteWindow *ui;
};

#endif // NOTEWINDOW_H
