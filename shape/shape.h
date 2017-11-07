#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
public:
    virtual ~Shape() = default; // виртуальный деструктор

    virtual std::string name() const = 0;
    virtual double perimeter() const = 0;
    virtual double area() const = 0;
};

#endif // SHAPE_H
