#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
private:
    double m_height{0};
    double m_weight{0};

public:
    explicit Rectangle( double _height, double _weight );
    Rectangle( const Rectangle& ) = default;
    Rectangle( Rectangle&& ) = default;

    Rectangle& operator=( const Rectangle& ) = default;
    Rectangle& operator=( Rectangle&& ) = default ;

    double perimeter() const noexcept override;
    double area() const noexcept override;

    ~Rectangle() override {}
};

#endif // RECTANGLE_H
