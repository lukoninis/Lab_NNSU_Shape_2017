#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
private:
    const std::string m_name;

public:
    explicit Shape( std::string&& _name ): m_name( std::move( _name ) ) {}
    virtual ~Shape() = default; // виртуальный деструктор

    std::string name() const noexcept { return m_name; }
    virtual double perimeter() const = 0;
    virtual double area() const = 0;
};

#endif // SHAPE_H
