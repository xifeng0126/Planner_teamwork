#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"list.h"
#include<QWidget>
#include<QApplication>
#include<QMessageBox>
#include<QSqlError>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QDateTimeEdit>
#include<QTableView>
#include<QTableWidget>
#include<QHeaderView>
#include<QDebug>
#include<QDialog>
#include<QLabel>
#include<QTextEdit>
#include<QSqlRecord>
#include<QModelIndex>
#include<QMouseEvent>
#include<QTextDocument>
#include<QTime>
#include<QFont>
//#include <QtCharts/QChartView>
//#include <QtCharts/QLineSeries>
//#include <QtCharts>

#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts>

QT_CHARTS_USE_NAMESPACE

//int MainWindow::UID=0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setMinimumSize(1500,1000);

    //设置QCharts折线图
    QLineSeries *series = new QLineSeries();

    series->append(0, 6);
    series->append(2, 4);
    series->append(3, 8);
    series->append(7, 4);
    series->append(10, 5);
    *series << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3) << QPointF(20, 2);

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("每日完成任务数：");

    ui->graphicsView_2->setChart(chart);
    ui->graphicsView_2->setRenderHint(QPainter::Antialiasing);
    //到此为止，qchart折线图初始化完毕


    createpieSewies();
    on_actiona_triggered();
    connect(ui->tableView,&table::releaseSign,this,&MainWindow::wetherComplete);  //设置右键点击显示对话框
    connect(ui->tableView_2,&table::releaseSign,this,&MainWindow::completed);    //同上

    connect(ui->listView,&list::releaseSign,this,&MainWindow::wetherComplete);  //设置右键点击显示对话框
    connect(ui->listView_2,&list::releaseSign,this,&MainWindow::completed);

    connect(&noteW,&noteWindow::showMore,&m_moreUI,&moreUI::show);
    connect(&noteW,&noteWindow::tomato,[=](){
        m_window.show();
    });

    connect(&m_start,&startui::login_start,[=](){//测试初始登录界面
        m_login.show();
    });
    connect(&m_login,&login::openSignUp,[=](){
        m_sign.show();
    });
    connect(&m_start,&startui::sign_start,[=](){
        m_sign.show();
    });
    connect(&m_sign,&signup::openLogIn,[=](){
        m_login.show();
    });
    connect(&m_login,&login::checkStart,[=](){
        user_name =  m_logincheck();
        //connectDB(user_name);
        connectDB();
    });
    connect(&m_sign,&signup::checkStart,[=](){
        user_name = m_signcheck();
        //connectDB(user_name);
        connectDB();
    });

    //connectDB(user_name);//打开数据库

    connect(this,&MainWindow::appStart,[=](){
        m_sign.close();
        m_login.close();

        //this_UID=UID;
        //show();

        //noteW=new noteWindow;

        noteW.show();
        noteW.setmodel();

        //connectDB();
        connect(&noteW,&noteWindow::tasks,[=](){
            this->show();
        });

    });

    //if(!system_db.open()){

    connectUSER();

    //}
    system_db.open();
    m_start.show();


}

MainWindow::~MainWindow()
{
    delete ui;
    db.close();
}

void MainWindow::wetherComplete(int i,bool b){  //未完成界面对话框，确定时将第i行的complete值改成yes

    if(b){
        int a=QMessageBox::question(this,"完成","是否完成此项？",QMessageBox::Yes,QMessageBox::No);
        if(a==QMessageBox::Yes){
            QSqlRecord record = model->record(i);
            record.setValue("complete","yes");
            model->setRecord(i,record);

            model->database().transaction();
            model->submitAll();
            //qDebug()<<i;
            //connectDB();
            model->database().commit();
            setModel();
        }
    }
    if(!b){
        tWidget=new textWidget;
        QModelIndex index=model->index(i,4);
        QString str=model->data(index).toString();
        tWidget->setText(str);
        tWidget->show();

        tWidget->setAttribute(Qt::WA_DeleteOnClose);

        //tWidget->ui->pushButton->num=i;
        //tWidget->setButtonNum(i);
//        if(Delete_is_clicked){
//            tWidget->close();
//        }

        //tWidget->send(i);
    }

}


//完成界面对话框，确定时将第i行的complete值改成no
void MainWindow::completed(int i,bool b){
    if(b){
        int a=QMessageBox::question(this,"未完成","此项还未完成？",QMessageBox::Yes,QMessageBox::No);
        if(a==QMessageBox::Yes){
            QSqlRecord record = model2->record(i);
            record.setValue("complete","no");
            model2->setRecord(i,record);
            model2->database().transaction();
            model2->submitAll();
            model2->database().commit();
            setModel();
        }
    }
    if(!b){
        tWidget=new textWidget;
        QModelIndex index=model2->index(i,4);
        QString str=model2->data(index).toString();
        tWidget->setText(str);
        tWidget->show();


    }

}

void MainWindow::on_actiona_triggered()   //学习任务界面
{
    ui->stackedWidget->setCurrentWidget(ui->task);
    ui->toolBox->setCurrentWidget(ui->page_3);
}

void MainWindow::on_actionb_triggered()   //统计界面（未完成）
{
    ui->stackedWidget->setCurrentWidget(ui->calc);
}

void MainWindow::on_actioncalendar_triggered()
{
    m_calendar.show();
}
//打开数据库
void MainWindow::connectDB(){
    //db=QSqlDatabase::addDatabase("QSQLITE");
    //db.setDatabaseName(QString("%1.db").arg(str));

//    dbPublic=QSqlDatabase::addDatabase("QSQLITE");
//    dbPublic.setDatabaseName("public.db");

//    if(!db.open()){
//        QMessageBox::warning(this,"错误",db.lastError().text());
//        qDebug()<<3;
//        return;
//    }

//    if(!dbPublic.open()){
//        QMessageBox::warning(this,"错误",dbPublic.lastError().text());
//        qDebug()<<4;
//        return;
//    }

    if(!system_db.tables().contains("inportance")){
        setInportance();
    }
//    if(!db.tables().contains("tasks")){
//        flag=false;
//    }

    intitData();//设置优先级下拉菜单

    QSqlQuery sql(system_db);
    sql.exec("create table tasks(任务,优先级,开始时间,结束时间,详情,complete,UID)");
    sql.exec("create table notes(标题,内容,whetherPbulic,UID)");
    sql.exec("create table community(标题,内容,创作者,UID)");

    setModel();
}


//将数据库显示到tableView中
void MainWindow::setModel(){
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
//    QSqlQuery sql(system_db);
//    sql.exec(QString("select *from tasks where complete='no' and UID='%1'").arg(UID));

    model=new QSqlTableModel(this);
    model2=new QSqlTableModel(this);

    //model->setTable(sql.exec());

    model->setTable("tasks");
    model2->setTable("tasks");

//    model->removeColumn(4);
//    model2->removeColumn(4);


    //model->setFilter("complete='no'");
    model->setFilter(QString("complete='no' and UID='%1'").arg(QString::number(UID)));
    model->select();

    ui->tableView->setModel(model);


    //model2->setFilter("complete='yes'");
    model2->setFilter(QString("complete='yes' and UID='%1'").arg(QString::number(UID)));
    model2->select();
    ui->tableView_2->setModel(model2);

    WaitComplete=model->rowCount();
    Completed=model2->rowCount();

    qDebug()<<WaitComplete<<Completed;

    //model->removeColumn(6);
    //model2->removeColumn(6);

    if(!flag){
        //setProgress(0,0);
        ui->progressBar->setValue(0);
    }

    setProgress(WaitComplete,Completed);
    setListModel();
}

void MainWindow::setInportance(){    //设置优先级表单
    QSqlQuery sql(system_db);
    sql.exec("create table inportance(inportance)");
    sql.exec("insert into inportance values (\"A\")");
    sql.exec("insert into inportance values (\"B\")");
    sql.exec("insert into inportance values (\"C\")");
    sql.exec("insert into inportance values (\"D\")");
    sql.exec("insert into inportance values (\"E\")");
    sql.exec("insert into inportance values (\"F\")");
}

//设置下拉框
void MainWindow::intitData(){
    QSqlQueryModel *queryModel=new QSqlQueryModel(this);
    queryModel->setQuery("select inportance from inportance");
    ui->comboBox->setModel(queryModel);
}

//添加任务界面确定按钮
void MainWindow::on_ok_clicked()
{
    if(!ui->lineEdit->text().isEmpty()&&!ui->textEdit->toPlainText().isEmpty()){
        QSqlQuery sql(system_db);
        sql.exec("create table tasks(任务,优先级,开始时间,结束时间,详情,complete,UID)");
        sql.exec(QString("insert into tasks values('%1','%2','%3','%4','%5',\"no\",'%6')")
                 .arg(ui->lineEdit->text()).arg(ui->comboBox->currentText()).arg(ui->dateTimeEdit->dateTime().toString()).arg(ui->dateTimeEdit_2->dateTime().toString()).arg(ui->textEdit->toPlainText()).arg(UID));

//        sql.prepare("insert into tasks values(:a,:b,:c,:d,:e,\"no\",:f)");
//        sql.bindValue("a",ui->lineEdit->text());
//        sql.bindValue("b",ui->comboBox->currentText());
//        sql.bindValue("c",ui->dateTimeEdit->dateTime().toString());
//        sql.bindValue("d",ui->dateTimeEdit_2->dateTime().toString());
//        sql.bindValue("e",ui->textEdit->toPlainText());
//        sql.bindValue("f",this_UID);
//        sql.exec();

//        model=new QSqlTableModel(this);
//        model->setTable("tasks");

//        //model->removeColumn(3);

//        model->setFilter("complete='no'");
//        model->select();
//        ui->tableView->setModel(model);

        setModel();

        ui->toolBox->setCurrentWidget(ui->page_3);

        on_cansle_clicked();

    }
}

//添加任务界面取消按钮
void MainWindow::on_cansle_clicked()
{
    ui->lineEdit->clear();
    ui->textEdit->clear();
    /*添加时间等清除操作*/
}


void MainWindow::setProgress(double a, double b){
//    ui->progressBar->setRange(0,100);
//    ui->progressBar->setMinimum(0);
//    ui->progressBar->setMaximum(0);

    if(a==0&&b==0){
        ui->progressBar->setValue(0);
    }
    else{
        double percent=b/(a+b);
        ui->progressBar->setValue(percent*100);
    }

}

void MainWindow::connectUSER(){
    system_db=QSqlDatabase::addDatabase("QSQLITE");
    system_db.setDatabaseName("system.db");

//    dbPublic=QSqlDatabase::addDatabase("QSQLITE");
//    dbPublic.setDatabaseName("public.db");

//    if(!dbPublic.open()){
//        QMessageBox::warning(this,"错误",dbPublic.lastError().text());
//        qDebug()<<1;
//        return;
//    }

    if(!system_db.open()){
        QMessageBox::warning(this,"错误",system_db.lastError().text());
        qDebug()<<2;
        return;
    }

    QSqlQuery sql(system_db);

    if(sql.exec("create table users(username text not null,password text not null,UID INT)")){
    sql.exec("insert into users values ('admin','12345',0)");
    qDebug()<<"insert !";
    }
}

QString MainWindow::m_logincheck()
{

if(QueryUserData_1()){

    appStart();
    QSqlQuery sql_query(system_db);
    sql_query.exec(QString("select *from users where username='%1'").arg(m_login.user));
    sql_query.next();

    UID=sql_query.value(2).toInt();
    noteW.UID=UID;
    //qDebug()<<this_UID;
    return m_login.user;
}
else{
     QMessageBox::warning(&m_login,"错误","账号或密码错误");
     return NULL;
   }
}
QString  MainWindow::m_signcheck(){
if(QueryUserData_2()){
    QSqlQuery sql(system_db);
    sql.prepare("insert into users (username,password,UID) values (:username,:password,:UID)");
    sql.bindValue(":username",m_sign.user);
    sql.bindValue(":password",m_sign.pass);
    //UID++;
    QTime randtime;
    randtime = QTime::currentTime();
    qsrand(randtime.msec()+randtime.second()*10000);

    //sql.exec("select UID from users");

    UID=qrand() % 10000;
    noteW.UID=UID;

    sql.bindValue(":UID",UID);
    sql.exec();
    qDebug()<<sql.lastError();

//    QSqlQuery sql_query(system_db);
//    sql_query.exec(QString("select *from tasks where username='%1'").arg(m_sign.user));
//    this_UID=sql_query.value(6).toInt();
//    qDebug()<<this_UID;
    return m_sign.user;
}
else{
     QMessageBox::warning(&m_login,"错误","用户名已存在！");
     return NULL;
   }
}
bool MainWindow::QueryUserData_2(){//注册检查
    QSqlQuery sql_query(system_db);
    if(!sql_query.exec("select username from users"))
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            QString username = sql_query.value(0).toString();
            if(m_sign.check(username)){
                continue;
            qDebug()<<QString("username:%1).arg(username)");
            }
            else
                return false;
        }
        appStart();
        return true;
    }
}
bool MainWindow::QueryUserData_1()//登录检测
{
    QSqlQuery sql_query(system_db);
    if(!sql_query.exec("select username,password from users"))
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            QString username = sql_query.value(0).toString();
            QString password = sql_query.value(1).toString();
            if(m_login.check(username,password))
                return true;
            qDebug()<<QString("username:%1    password:%2").arg(username).arg(password);
        }

    }
    return false;
}

//饼状图的初始化函数
void MainWindow::createpieSewies()
{
    //饼状图
    QPieSeries * my_pieSeries = new QPieSeries();
    //中间圆与大圆的比例
    my_pieSeries->setHoleSize(0.35);
    //扇形及数据
    QPieSlice *pieSlice_running = new QPieSlice();
    pieSlice_running->setValue(25);//扇形占整个圆的百分比
    pieSlice_running->setLabel("待完成 2/8");
    pieSlice_running->setLabelVisible();
    pieSlice_running->setColor(QColor("#4cb9cf"));
    pieSlice_running->setLabelColor(QColor("#4cb9cf"));
    pieSlice_running->setBorderColor(QColor("#4cb9cf"));
    pieSlice_running->setBorderColor(QColor());
    my_pieSeries->append(pieSlice_running);

    QPieSlice *pieSlice_noconnect = new QPieSlice();
    pieSlice_noconnect->setValue(25);
    pieSlice_noconnect->setLabel("已过期 2/8");
    pieSlice_noconnect->setColor(QColor("#53b666"));
    pieSlice_noconnect->setLabelColor(QColor("#53b666"));
    pieSlice_noconnect->setBorderColor(QColor("#53b666"));
    pieSlice_noconnect->setLabelVisible();//设置标签可见,缺省不可见
    my_pieSeries->append(pieSlice_noconnect);

    QPieSlice *pieSlice_idle = new QPieSlice();
    pieSlice_idle->setValue(50);
    pieSlice_idle->setLabel("已完成 4/8");
    pieSlice_idle->setLabelVisible();
    pieSlice_idle->setColor(QColor("#2f89cf"));
    pieSlice_idle->setLabelColor(QColor("#2f89cf"));
    pieSlice_idle->setBorderColor(QColor("#2f89cf"));
    my_pieSeries->append(pieSlice_idle);
    // 图表视图
    QChart *chart = new QChart();
    chart->setTitle("任务完成度一览");
    chart->addSeries(my_pieSeries);
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->legend()->setAlignment(Qt::AlignBottom);
    chart->legend()->setBackgroundVisible(false);
    chart->legend()->setFont(QFont("黑体", 8)) ; // 图例字体
    chart->setTitleBrush(QColor("#808396"));
    chart->legend()->setLabelColor(QColor("#808396"));
    QChartView *chartView = new QChartView();
    chartView = new QChartView(ui->graphicsView);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setRenderHint(QPainter::NonCosmeticDefaultPen);
    chartView->setChart(chart);
    chartView->setMinimumSize(700,300);
    //这下面原来代码是该改列方式，不注视掉的话会将饼状图初始化在主界面上，不知道为啥
    //ui->gridLayout->addWidget(chartView);
}


//void MainWindow::on_actiontest_triggered()
//{
//    ui->stackedWidget->setCurrentWidget(ui->page_2);
//}

void MainWindow::setListModel(){
    smodel=new QStringListModel(this);
    smodel2=new QStringListModel(this);
    QStringList list1;
    QStringList list2;

    QFont font;
    font.setPixelSize(25);
    font.setBold(true);
    font.setWeight(50);

    int row=ui->tableView->model()->rowCount();
    for (int r=0;r<row;r++) {
        QString str=ui->tableView->model()->index(r,0).data().toString();
        //smodel->setStringList(QStringList()<<str);
        list1.append(str);
    }
    smodel->setStringList(list1);
    ui->listView->setFont(font);
    ui->listView->setModel(smodel);

//    for(int i=0;i<row;i++){
//        //ui->listView->Columns[i].width=100;
//        //ui->listView->model()->index(i,0).
//        ui->listView->vertica
//    }

    int row2=ui->tableView_2->model()->rowCount();
    for (int r=0;r<row2;r++) {
        QString str2=ui->tableView_2->model()->index(r,0).data().toString();
        //smodel->setStringList(QStringList()<<str);
        list2.append(str2);
    }
    smodel2->setStringList(list2);
    ui->listView_2->setFont(font);
    ui->listView_2->setModel(smodel2);

}
