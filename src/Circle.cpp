#include"Circle.h"

namespace{
    const double pi = 3.14;
}

double Circle::area()const
{
    return m_r * m_r * pi;
}