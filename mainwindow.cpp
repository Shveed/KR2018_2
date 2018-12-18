#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "countsystem.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_action_clicked()
{
    cs->setLine(ui->field1->text());


    if(cs->Is_Line_Allowed(cs->getSys1(), cs->getLine())){
        if(cs->getSys1() == cs->getSys2()){
            QMessageBox::warning(this, "Неправильный ввод!", "Введите разные системы счисления");
        }
        else{
            ui->field2->setText(cs->GoOn(cs->getLine(), cs->getSys1(), cs->getSys2()));
        }
    }
    else{
        QMessageBox::warning(this, "Неправильный ввод!", "Выход за предел системы счисления");
    }

}

void MainWindow::on_button_1_clicked()
{
    ui->field1->setText(ui->field1->text() + "1");
}

void MainWindow::on_button_2_clicked()
{
    ui->field1->setText(ui->field1->text() + "2");
}

void MainWindow::on_button_3_clicked()
{
    ui->field1->setText(ui->field1->text() + "3");
}

void MainWindow::on_button_4_clicked()
{
    ui->field1->setText(ui->field1->text() + "4");
}

void MainWindow::on_button_5_clicked()
{
    ui->field1->setText(ui->field1->text() + "5");
}

void MainWindow::on_button_6_clicked()
{
    ui->field1->setText(ui->field1->text() + "6");
}

void MainWindow::on_button_7_clicked()
{
    ui->field1->setText(ui->field1->text() + "7");
}

void MainWindow::on_button_8_clicked()
{
    ui->field1->setText(ui->field1->text() + "8");
}

void MainWindow::on_button_9_clicked()
{
    ui->field1->setText(ui->field1->text() + "9");
}

void MainWindow::on_button_0_clicked()
{
    ui->field1->setText(ui->field1->text() + "0");
}

void MainWindow::on_button_A_clicked()
{
    ui->field1->setText(ui->field1->text() + "A");
}

void MainWindow::on_button_B_clicked()
{
    ui->field1->setText(ui->field1->text() + "B");
}

void MainWindow::on_button_C_clicked()
{
    ui->field1->setText(ui->field1->text() + "C");
}

void MainWindow::on_button_D_clicked()
{
    ui->field1->setText(ui->field1->text() + "D");
}

void MainWindow::on_button_E_clicked()
{
    ui->field1->setText(ui->field1->text() + "E");
}

void MainWindow::on_button_F_clicked()
{
    ui->field1->setText(ui->field1->text() + "F");
}

void MainWindow::on_button_delete_clicked()
{
    ui->field1->backspace();
}

void MainWindow::on_button_clear_clicked()
{
    ui->field2->setText("");
}

void MainWindow::on_system1_valueChanged(int arg1)
{
    cs->setSys1(arg1);
    //qDebug() << cs->getSys1();
}

void MainWindow::on_system2_valueChanged(int arg1)
{
    cs->setSys2(arg1);
    //qDebug() << cs->getSys2();
}

void MainWindow::on_button_exit_clicked()
{
    QApplication::quit();
}
