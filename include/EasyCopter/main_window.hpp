#ifndef __MAIN_WINDOW_H
#define __MAIN_WINDOW_H

#include <QtGui>
#include <QtGui/QMainWindow>
#include <QKeyEvent>
#include <QCloseEvent>
#include <QObject>
#include <iostream>
#include <vector>
#include <tuple>
#include "flightcontroller.hpp"
#include "ui_main_window.h"
#include "image_converter.hpp"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(int argc, char **argv, QWidget *parent = 0);
    ~MainWindow();

protected:
    void keyPressEvent(QKeyEvent *p_pqkeKeyEvent);
    void closeEvent(QCloseEvent *p_pqceCloseEvent);

private slots:
    void on_button_connect_clicked(bool check);
    void on_checkbox_use_environment_stateChanged(int state);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindowDesign ui;
    void readSettings();
    void writeSettings();
    void showNoMasterMessage();

};


#else

class MainWindow;

#endif //__MAIN_WINDOW_H
