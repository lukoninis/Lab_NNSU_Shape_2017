#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
private:
    double m_radius;

public:
    explicit Circle( double radius );
    Circle( const Circle& ) = default;
    Circle( Circle&& ) = default;

    Circle& operator=( const Circle& ) = default;
    Circle& operator=( Circle&& ) = default;

    double perimeter() const noexcept override;
    double area() const noexcept override;

    ~Circle() override {}
};

#endif // CIRCLE_H
