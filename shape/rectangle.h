#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : virtual Shape
{
private:
    double m_height{0};
    double m_weight{0};
    std::string m_name;

public:
    Rectangle( double height, double weight );
    Rectangle( const Rectangle& ) = default;
    Rectangle( Rectangle&& ) = default;

    Rectangle& operator=( const Rectangle& ) = default;
    Rectangle& operator=( Rectangle&& ) = default;

    std::string name() const noexcept override;
    double perimeter() const noexcept override;
    double area() const noexcept override;

    ~Rectangle() override {}
};

#endif // RECTANGLE_H
