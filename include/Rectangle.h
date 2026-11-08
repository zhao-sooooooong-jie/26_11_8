#pragma once
#include "Shape.h"

class Rectangle : public Shape{
public:
    explicit Rectangle(double w, double h)
    :
    Shape("Rectangle"),
    m_w(w),
    m_h(h){}

    double area() const override;

protected:
    double m_w;
    double m_h;

};