#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cstdlib>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_p1_clicked();

    void on_p6_clicked();

    void on_p2_clicked();

    void on_p5_clicked();

    void on_p0_clicked();

    void on_p3_clicked();

    void on_p9_clicked();

    void on_p8_clicked();

    void on_p7_clicked();

    void on_p4_clicked();

    void on_c_clicked();

    void on_pdod_clicked();

    void on_pwynik_2_clicked();

    void on_pode_clicked();

    void on_pdziel_clicked();

    void on_pmnoz_clicked();

private:
    Ui::MainWindow *ui;
    double pierwsza;
    double druga;
    double wynik=0;
    QString znak;
    int warunek=0;


};

#endif // MAINWINDOW_H
