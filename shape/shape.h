#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
protected:
    std::string m_name;
public:
    explicit Shape( std::string&& name ):m_name( std::move( name ) ){}
    virtual ~Shape() = default; // виртуальный деструктор

    std::string name() const noexcept { return m_name; }
    virtual double perimeter() const = 0;
    virtual double area() const = 0;
};

#endif // SHAPE_H
