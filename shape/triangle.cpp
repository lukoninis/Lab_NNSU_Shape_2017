#include <cmath>
#include <stdexcept>

#include "triangle.h"

Triangle::Triangle( double _left, double _right, double _bottom ):
    Shape( std::move( std::string{"triangle"} ) ),
    m_left( _left ),
    m_right( _right ),
    m_bottom( _bottom )
{
    if( m_left <= 0 || m_right <=0 || m_bottom <= 0 )
        throw std::invalid_argument( "Triangle: all of side must be greater than zero" );

    if( m_left   > m_right + m_bottom ||
        m_right  > m_left  + m_bottom ||
        m_bottom > m_right + m_left )
        throw std::invalid_argument(
                "Triangle: the sum of the lengths of any two sides must be greater than or equal to the length of the remaining side"
                );
}

double Triangle::perimeter() const noexcept
{
    return m_left + m_right + m_bottom;
}

double Triangle::area() const noexcept
{
    double per{ perimeter() / 2. };
    return std::sqrt( per * ( per - m_left ) * ( per - m_right ) * ( per - m_bottom ) );
}
