﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//#include <QUdpSocket>

#include <QSerialPort>
#include <QSerialPortInfo>

//#define unsigned char  uchar
//#define unsigned int   uint
//#define num_to_str(tmp) QString::number(uchar(tmp))

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

//    QByteArray QString2Hex(QString str);
private:
    Ui::MainWindow *ui;

    QSerialPort serial;
    QByteArray ser_buff;

    void initSeialPort();
    void on_comboBox_currentIndexChanged(QString &arg1);
    void serialportconfig(QString arg);

    void display();

private slots:
   void button();
   void button_2();

   void serialRead();


};


#endif // MAINWINDOW_H
