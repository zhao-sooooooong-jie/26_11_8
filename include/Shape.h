#pragma once
#include <string>
#include <utility>

class Shape {
public:
    explicit Shape(std::string name)
    :
    m_name(std::move(name))
    {}

    virtual ~Shape() = default;

    virtual double area() const = 0;

    virtual std::string name() const{
        return m_name;
    }



protected:
    std::string m_name;
};

