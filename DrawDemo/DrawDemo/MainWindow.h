#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "DrawWidget.h"
#include <QMainWindow>
#include <QLabel>
#include <QComboBox>
#include <QSpinBox>
#include <QToolButton>
#include <QToolBar>
#include <QHBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void PenColorSelect(); // penColorBtn 按钮响应 用于选择颜色
    void SetPenStyle(); // 设置画笔style到 中心绘制区
private:
    void createToolBar(); // 创建工具条
    DrawWidget *drawWidget; // 绘制区
    QToolBar *toolBar;
    QLabel *penStyleLabel; // 画笔风格
    QComboBox *penStyleComboBox;
    QLabel *penWidthLabel; // 画笔线宽
    QSpinBox *penWidthSpinBox;
    QToolButton *penColorBtn; // 画笔颜色选择
    QToolButton *clearBtn;

    QHBoxLayout* hLay;
};

#endif
