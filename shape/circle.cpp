#include <stdexcept>
#include <cmath>

#include "circle.h"

Circle::Circle( double radius ):
    Shape( std::move( std::string{ "circle" } ) ),
    m_radius( radius )
{
    if( radius <=0 )
        throw std::invalid_argument( "Circle: radius must be greater than zero" );
}

double Circle::perimeter() const noexcept
{
    return 2. * M_PI * m_radius;
}

double Circle::area() const noexcept
{
    return M_PI * m_radius * m_radius;
}
