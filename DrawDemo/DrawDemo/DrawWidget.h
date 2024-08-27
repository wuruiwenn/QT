#ifndef DRAWWIDGET_H
#define DRAWWIDGET_H

#include <QWidget>
#include <QPixmap>
#include <QColor>
#include <QPoint>
#include <QPointer>
#include <QPainter>

namespace Ui {
    class DrawWidget;
}

class DrawWidget : public QWidget //绘图区
{
    Q_OBJECT

public:
    explicit DrawWidget(QWidget *parent = nullptr);
    ~DrawWidget();

private:
    Ui::DrawWidget *ui;

public:
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

public slots:
    void SetPenStyle(Qt::PenStyle style); // 画笔风格
    void SetPenWidth(int penWidth); // 画笔线宽
    void SetPenColor(QColor color); // 画笔颜色
    void ClearAll(); // 清空所有
private:
    QPixmap *pix; // 绘制的图像
    QPoint startPos;
    QPoint endPos;
    Qt::PenStyle style;
    int penWidth;
    QColor color;
};

#endif
