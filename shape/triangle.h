#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape
{
private:
    double m_left{0};
    double m_right{0};
    double m_bottom{0};

public:
    explicit Triangle( double _left, double _right, double _bottom );
    Triangle( const Triangle& ) = default;
    Triangle( Triangle&& ) = default;

    Triangle& operator=( const Triangle& ) = default;
    Triangle& operator=( Triangle&& ) = default ;

    double perimeter() const noexcept override;
    double area() const noexcept override;

    ~Triangle() override {}
};

#endif // TRIANGLE_H
