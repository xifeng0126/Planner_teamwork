#include "window.h"

Window::Window(QWidget *parent)
    : QWidget(parent) ,time(0), StartOrNot(false), timeout(25 * 60), sate(true) {
    this -> setWindowTitle("番茄时钟 0.1");
    this -> setFixedSize(200, 200);
    this -> setWindowFlag(Qt::WindowStaysOnTopHint);
    this -> setStyleSheet("background-color: rgb(255,255,255);");

    Start.setParent(this);
    Start.move(70, 130);
    Start.resize(60 ,30);
    Start.setText("开始");
    Start.setStyleSheet("QPushButton {"
                        "   background-color: rgb(82,181,254);"
                        "   font-family:\"Microsoft YaHei\";"
                        "   font: bold;"
                        "   color: rgb(255,255,255);"
                        "   border-style: solid;"
                        "   border-radius: 5px;"
                        "}"
                        "QPushButton:hover {"
                        "   background-color:rgb(101,200,255);"
                        "}");

    AddMin.setParent(this);
    AddMin.setText("+");
    AddMin.move(50, 40);
    AddMin.resize(20, 20);
    AddMin.setStyleSheet("QPushButton {"
                         "  background-color: rgb(255,255,255);"
                         "  font-family: \"Microsoft YaHei\";"
                         "  font: bold;"
                         "  color: rgb(82,181,254);"
                         "  border-style: solid;"
                         "  border-radius: 2px;"
                         "  border-width: 1px;"
                         "}"
                         "QPushButton:pressed {"
                         "  background-color: rgb(101,200,255);"
                         "  border-color: rgb(255,255,255);"
                         "  color: rgb(255,255,255);"
                         "}");

    SubMin.setParent(this);
    SubMin.setText("-");
    SubMin.move(130, 40);
    SubMin.resize(20, 20);
    SubMin.setStyleSheet("QPushButton {"
                         "  background-color: rgb(255,255,255);"
                         "  font-family: \"Microsoft YaHei\";"
                         "  font: bold;"
                         "  color: rgb(82,181,254);"
                         "  border-style: solid;"
                         "  border-radius: 2px;"
                         "  border-width: 1px;"
                         "}"
                         "QPushButton:pressed {"
                         "  background-color: rgb(101,200,255);"
                         "  border-color: rgb(255,255,255);"
                         "  color: rgb(255,255,255);"
                         "}");

    timedisplayer.setParent(this);
    timedisplayer.move(57, 75);
    timedisplayer.resize(85, 35);
    timedisplayer.setStyleSheet("QLabel {"
                                "   color:rgb(82,181,254);"
                                "   font-family:\"Microsoft YaHei\";"
                                "   font: bold 20px;"
                                "   font-size: 30px"
                                "}");
    timedisplayer.setText("0:0");
    timedisplayer.setAlignment(Qt::AlignHCenter);

    timeoutdisplayer.setParent(this);
    timeoutdisplayer.move(90, 40);
    timeoutdisplayer.resize(20, 20);
    timeoutdisplayer.setStyleSheet("QLabel {"
                                   "   color:rgb(82,181,254);"
                                   "   font-family:\"Microsoft YaHei\";"
                                   "   font: bold 20px;"
                                   "   font-size: 15px"
                                   "}");
    timeoutdisplayer.setText(QString::number(timeout/60, 10));
    timeoutdisplayer.setAlignment(Qt::AlignHCenter);

    tip1.setParent(this);
    tip1.move(70, 10);
    tip1.resize(60, 20);
    tip1.setStyleSheet("QLabel {"
                       "   color:rgb(82,181,254);"
                       "   font-family:\"Microsoft YaHei\";"
                       "   font-size: 15px"
                       "}");
    tip1.setText("工作时间");
    tip1.setAlignment(Qt::AlignHCenter);

    connect(&timer, &QTimer::timeout, this, &Window::onClockTime);
    connect(&Start, &QPushButton::released, this, &Window::startClock);

    connect(&AddMin, &QPushButton::released, this, &Window::Addtime);
    connect(&SubMin, &QPushButton::released, this, &Window::Subtime);
}

Window::~Window() {
    timer.stop();
}

inline void Window::onClockTime() {
    if((time < timeout)&&sate == true) {
        timedisplayer.setText(QString::number(time/60, 10)+":"+QString::number(time%60, 10));
        time++;
    }else {
        if(sate == true) {//排除法
            time = sate = 0;
            timeout2 = timeout;
            timeout = 10 * 60;
            tip1.setText("休息中");
        }
    }

    if((time < timeout)&&sate == false) {
        timedisplayer.setText(QString::number(time/60, 10)+":"+QString::number(time%60, 10));
        time++;
    }else {
        if(sate == false) {
            time = 0;
            sate = 1;
            timeout = timeout2;
            tip1.setText("工作中");
        }
    }
}

inline void Window::startClock() {
    timeoutdisplayer.hide();
    tip1.move(68, 30);
    tip1.resize(65, 30);
    tip1.setStyleSheet("QLabel {"
                       "   color:rgb(82,181,254);"
                       "   font-family:\"Microsoft YaHei\";"
                       "   font: bold 10px;"
                       "   font-size: 20px"
                       "}");
    tip1.setText("工作中");

    AddMin.hide();
    SubMin.hide();
    if(StartOrNot != true) {
        timer.start(1000);
        Start.setText("停止");
        StartOrNot = !StartOrNot;
    }else {
        timer.stop();
        Start.setText("开始");
        StartOrNot = !StartOrNot;
    }
}
inline void Window::Addtime() {
    timeout += 60;
    timeoutdisplayer.setText(QString::number(timeout/60, 10));
}
inline void Window::Subtime() {
    if(timeout>60){
        timeout -=60;
    }else{
        timeout = 60;
    }
    timeoutdisplayer.setText(QString::number(timeout/60, 10));
}
