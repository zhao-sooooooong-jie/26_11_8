#include<iostream>
#include<vector>
#include"Circle.h"
#include"Rectangle.h"
#include"Logger.h"

int main()
{
    LOG_INFO("strat");
    std::vector<Shape*> shapes;
    shapes.push_back(new Circle(1.0));
    shapes.push_back(nullptr);
    shapes.push_back(new Rectangle(2.0, 3.0));

    double total = 0.0;
    for(Shape* s : shapes){
        LOG_DEBUG("处理对象 name=" << s->name());
        total += s->area();
    }
    LOG_INFO("Total=" << total);
    return 0;
}