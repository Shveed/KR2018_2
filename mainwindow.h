#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "countsystem.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button_action_clicked();

    void on_button_1_clicked();

    void on_button_2_clicked();

    void on_button_3_clicked();

    void on_button_4_clicked();

    void on_button_5_clicked();

    void on_button_6_clicked();

    void on_button_7_clicked();

    void on_button_8_clicked();

    void on_button_9_clicked();

    void on_button_0_clicked();

    void on_button_A_clicked();

    void on_button_B_clicked();

    void on_button_C_clicked();

    void on_button_D_clicked();

    void on_button_E_clicked();

    void on_button_F_clicked();

    void on_button_delete_clicked();

    void on_button_clear_clicked();

    void on_system1_valueChanged(int arg1);

    void on_system2_valueChanged(int arg1);

    void on_button_exit_clicked();

private:
    CountSystem *cs = new CountSystem("", 2, 2);
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
