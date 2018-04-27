#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringBuilder>


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

void MainWindow::on_p1_clicked()
{
    if(warunek ==1){ui->pole->setText("");warunek=0;};
    QString k = ui->pole->text();
    ui->pole->setText(k+"1");
}

void MainWindow::on_p6_clicked()
{
    if(warunek ==1){ui->pole->setText("");warunek=0;};
    QString k = ui->pole->text();
    ui->pole->setText(k+"6");
}

void MainWindow::on_p2_clicked()
{
    if(warunek ==1){ui->pole->setText("");warunek=0;};
    QString k = ui->pole->text();
    ui->pole->setText(k+"2");
}

void MainWindow::on_p5_clicked()
{
    if(warunek ==1){ui->pole->setText("");warunek=0;};
    QString k = ui->pole->text();
    ui->pole->setText(k+"5");
}

void MainWindow::on_p0_clicked()
{
    if(warunek ==1){ui->pole->setText("");warunek=0;};
    QString k = ui->pole->text();
    ui->pole->setText(k+"0");
}

void MainWindow::on_p3_clicked()
{
    if(warunek ==1){ui->pole->setText("");warunek=0;};
    QString k = ui->pole->text();
    ui->pole->setText(k+"3");
}

void MainWindow::on_p9_clicked()
{
    if(warunek ==1){ui->pole->setText("");warunek=0;};
    QString k = ui->pole->text();
    ui->pole->setText(k+"9");
}

void MainWindow::on_p8_clicked()
{
    if(warunek ==1){ui->pole->setText("");warunek=0;};
    QString k = ui->pole->text();
    ui->pole->setText(k+"8");
}

void MainWindow::on_p7_clicked()
{
    if(warunek ==1){ui->pole->setText("");warunek=0;};
    QString k = ui->pole->text();
    ui->pole->setText(k+"7");
}

void MainWindow::on_p4_clicked()
{
    if(warunek ==1){ui->pole->setText("");warunek=0;};
    QString k = ui->pole->text();
    ui->pole->setText(k+"4");
}

void MainWindow::on_c_clicked()
{
    ui->pole->setText("");
    pierwsza =0;
    druga =0;
    znak="";

}

void MainWindow::on_pdod_clicked()
{
     pierwsza = ui->pole->text().toDouble();
    znak = "+";
    ui->pole->setText("");
}

void MainWindow::on_pwynik_2_clicked()
{
     druga = ui->pole->text().toDouble();
     if(znak=="+"){ wynik = pierwsza + druga;}
     if(znak=="-"){ wynik = pierwsza - druga;}
     if(znak=="*"){ wynik = pierwsza * druga;}
     if(znak=="/"){ wynik = pierwsza / druga;}

     QString w = QString::number(wynik);
     ui->pole->setText(w);
     warunek=1;


}

void MainWindow::on_pode_clicked()
{
    pierwsza = ui->pole->text().toDouble();
    znak = "-";
   ui->pole->setText("");
}

void MainWindow::on_pdziel_clicked()
{
    pierwsza = ui->pole->text().toDouble();
    znak = "/";
   ui->pole->setText("");
}

void MainWindow::on_pmnoz_clicked()
{
    pierwsza = ui->pole->text().toDouble();
   znak = "*";
   ui->pole->setText("");
}
