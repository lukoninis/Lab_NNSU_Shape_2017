#include <stdexcept>

#include "rectangle.h"

Rectangle::Rectangle( double _height, double _weight ):
    Shape( std::move( std::string{"rectangle"} ) ),
    m_height( _height ),
    m_weight( _weight )
{
    if( m_height <= 0 || m_weight <= 0 )
        throw std::invalid_argument( "Rectangle: height and weight must be greater than zero" );
}

double Rectangle::perimeter() const noexcept
{
    return 2 * ( m_height + m_weight );
}

double Rectangle::area() const noexcept
{
    return m_height * m_weight;
}
