#include "MainWindow.h"
#include <QSpacerItem>
#include <QColorDialog>
MainWindow::~MainWindow()
{
}
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    drawWidget = new DrawWidget;


    setCentralWidget(drawWidget); // 设置drawWidget 为中央部件
    createToolBar(); // 创建工具条


    setMinimumSize(600,400); // 设置主窗口 最小尺寸 与 drawWidget 同步
    SetPenStyle(); // 设置画笔style
//    // 设置 画笔初始线宽
    drawWidget->SetPenWidth(penWidthSpinBox->value());
//    // 设置 画笔初始颜色
    drawWidget->SetPenColor(Qt::black);
}

//void DrawWidget::SetPenWidth(int penWidth)
//{
//    this->penWidth = penWidth;
//}


void MainWindow::PenColorSelect(){
    QColor color = QColorDialog::getColor(Qt::black,this);
        if(color.isValid())
        {
            drawWidget->SetPenColor(color);
            QPixmap pix(20,20);
            pix.fill(color);
            penColorBtn->setIcon(QIcon(pix));
        }
}
void MainWindow::SetPenStyle(){
    drawWidget->SetPenStyle(
        static_cast<Qt::PenStyle>(penStyleComboBox->
                                  itemData(penStyleComboBox->currentIndex(),
                                           Qt::UserRole).toInt()));
}


void MainWindow::createToolBar()
{
    toolBar = addToolBar(tr("Tool"));
    hLay = new QHBoxLayout(toolBar);


    // 画笔风格
    penStyleLabel = new QLabel(tr("画笔风格:"));
    QSpacerItem* spacer = new QSpacerItem(120,10,QSizePolicy::Maximum,QSizePolicy::Fixed);

    penStyleComboBox = new QComboBox;
    penStyleComboBox->addItem(tr("SolidLine"),static_cast<int>(Qt::SolidLine));
    penStyleComboBox->addItem(tr("DashLine"),static_cast<int>(Qt::DashLine));
    penStyleComboBox->addItem(tr("DotLine"),static_cast<int>(Qt::DotLine));
    penStyleComboBox->addItem(tr("DashDotLine"),static_cast<int>(Qt::DashDotLine));
    penStyleComboBox->addItem(tr("DashDotDotLine"),static_cast<int>(Qt::DashDotDotLine));
    penStyleComboBox->addItem(tr("CustomDashLine"),static_cast<int>(Qt::CustomDashLine));
    connect(penStyleComboBox,SIGNAL(activated(int)),this,SLOT(SetPenStyle()));

    // 画笔线宽
    penWidthLabel = new QLabel(tr("线宽:"));
    penWidthSpinBox = new QSpinBox;
    connect(penWidthSpinBox,SIGNAL(valueChanged(int)),drawWidget,SLOT(SetPenWidth(int)));

    // 颜色 选择
    penColorBtn = new QToolButton; // 选择按钮
    QPixmap pixmap(20,20);
    pixmap.fill(Qt::black);
    penColorBtn->setIcon(pixmap);
    connect(penColorBtn,SIGNAL(clicked()),this,SLOT(PenColorSelect()));

    // 清除按钮
    clearBtn = new QToolButton;
    clearBtn->setText(tr("清空"));

//    hLay->addWidget(penStyleLabel);
//    hLay->addSpacerItem(spacer);
//    hLay->addWidget(penStyleComboBox);
//    hLay->addWidget(penWidthLabel);
//    hLay->addWidget(penWidthSpinBox);
//    hLay->addWidget(penColorBtn);
//    hLay->addWidget(clearBtn);

    connect(clearBtn,SIGNAL(clicked()),drawWidget,SLOT(ClearAll()));

    toolBar->addWidget(penStyleLabel);
    toolBar->addWidget(penStyleComboBox);
    toolBar->addWidget(penWidthLabel);
    toolBar->addWidget(penWidthSpinBox);
    toolBar->addWidget(penColorBtn);
    toolBar->addWidget(clearBtn);

    toolBar->setStyleSheet("QToolBar { spacing: 20px; }");
}


