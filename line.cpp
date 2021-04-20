#include "line.h"


Line::Line() :
    QGraphicsItem()
{

}

Line::Line(double x, double y, double x2, double y2) :
    QGraphicsItem()
{
    this->x1 = x;
    this->y1 = y;
    this->y2 = y2;
    this->x2 = x2;
}

Line::~Line()
{

}

QRectF Line::boundingRect() const
{
    return QRectF(-30,-30,30,30);   // Ограничиваем область, в которой лежит линия
}

void Line::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        painter->setBrush(Qt::red);     // Устанавливаем кисть, которой будем отрисовывать объект
        painter->drawLine(this->x1,this->y1,this->x2,this->y2);  // Рисуем треугольник по полигональной модели
        Q_UNUSED(option);
        Q_UNUSED(widget);
}
