#ifndef MOREUI_H
#define MOREUI_H

#include <QWidget>

namespace Ui {
class moreUI;
}

class moreUI : public QWidget
{
    Q_OBJECT

public:
    explicit moreUI(QWidget *parent = nullptr);
    ~moreUI();

private:
    Ui::moreUI *ui;
};

#endif // MOREUI_H
