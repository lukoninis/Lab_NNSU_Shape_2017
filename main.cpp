#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>

#include "shape/rectangle.h"
#include "shape/circle.h"

int main( int argc, char const *argv[] )
{
  using shape_ptr = std::shared_ptr<Shape>;

  std::vector<shape_ptr> shapes;
  shapes.push_back( std::make_shared<Rectangle>( 5.0, 6.0 ) );
  shapes.push_back( std::make_shared<Circle>( 1.0 ) );
  //shapes[2] = new Triangle(2.0, 3.0, 4.0);

  auto print_shape = []( auto *shape )
  {
      std::cout << shape->name() << ": { ";
      std::cout << shape->area() << ", ";
      std::cout << shape->perimeter() << " }";
      std::cout << std::endl;
      return;
  };

  for( auto i: shapes )
  {
    print_shape( i.get() );
  }

  return 0;
}
