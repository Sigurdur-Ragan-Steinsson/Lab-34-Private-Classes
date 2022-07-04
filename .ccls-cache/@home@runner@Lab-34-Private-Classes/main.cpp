#include <iostream>
#include <string>
using namespace std;
class Square
{
private:
  double    side;
  double    area;
  // Your code here
public:
  Square(double side);
  int set_side(int change);
  void print(Square* square);

};

Square::Square(double side)
{
  this->side = side;
  this->area = side * side;
}
Square::set_side(x){
  if (x < 0){
    return side;
  }
  else;
    side = x;
    return side
}
Square::print(Square* square)
{
  cout << "Square: side=" << square->side << " area=" square->area << endl;
}
int main()
{
  Square s(4);
  s.print("square");
  s.side = 2.0;
  s.print("square");
  s.side = -33.0;
  s.print("square");
  return 0;
}