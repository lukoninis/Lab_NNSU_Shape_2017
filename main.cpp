#include <iostream>
#include <memory>
#include <vector>

#include "shape/rectangle.h"
#include "shape/circle.h"
#include "shape/triangle.h"

int main( int argc, char const *argv[] )
{
  using shape_ptr = std::shared_ptr<Shape>;

  std::vector<shape_ptr> shapes;

  try
  {
      shapes.push_back( std::make_shared<Rectangle>( 5.0, 6.0 ) );
      shapes.push_back( std::make_shared<Circle>( 1.0 ) );
      shapes.push_back( std::make_shared<Triangle>( 2.0, 2.0, 16.0 ) );
  }
  catch( std::invalid_argument & ex )
  {
      std::cout << "exception cathed!\n"
                << ex.what()
                << std::endl;
  }

  auto print_shape = []( auto *shape )
  {
      std::cout << shape->name() << ": { "
                << shape->area() << ", "
                << shape->perimeter() << " }"
                << std::endl;
      return;
  };

  for( auto i: shapes )
  {
    print_shape( i.get() );
  }

  return 0;
}
