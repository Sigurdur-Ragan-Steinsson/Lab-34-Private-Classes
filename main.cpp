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
  int set_side(int x);
  void print();

};

Square::Square(double side)
{
  this->side = side;
  this->area = side * side;
}
int Square::set_side(int x){
  if (x < 0){
    return side;
  }
  else;
    side = x;
    return side
}
void Square::print()
{
  cout << "Square: side=" << side << " area=" <<area << endl;
}
int main()
{
  Square s(4);
  s.print();
  s.set_side ( 2.0);
  s.print();
  s.set_side(-33.0);
  s.print();
  return 0;
}