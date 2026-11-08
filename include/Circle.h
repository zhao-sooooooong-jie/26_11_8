#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
    explicit Circle(double r)
    :
    Shape("Circle"),
    m_r(r){}

    double area() const override;



protected:
    double m_r;

};