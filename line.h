#ifndef LINE_H
#define LINE_H

#include <QGraphicsItem>
#include <QPainter>

class Line : public QGraphicsItem
{
public:
    Line();
    Line(double,double,double,double);
   ~Line();

protected:
    QRectF boundingRect() const;    /* Определяем виртуальный метод,
                                     * который возвращает область, в которой
                                     * находится треугольник
                                     * */
    /* Определяем метод для отрисовки треугольника
     * */
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


private:
    double x1;
    double y1;
    double x2;
    double y2;
};

#endif // LINE_H
