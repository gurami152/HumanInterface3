#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <QGraphicsScene>
#include <line.h>

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
    void on_pushButton_clicked();

    void on_doubleSpinBox_2_valueChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QGraphicsScene  *scene;     // Объявляем графическую сцену
    Line        *line;  // и треугольник

};


#endif // MAINWINDOW_H
