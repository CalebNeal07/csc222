#include "Point.h"
#include <cmath>
using namespace std;

Point::Point() {
  x = 0;
  y = 0;
}

Point::Point(double x, double y) {
  this->x = x;
  this->y = y;
}

double Point::getX() { return this->x; }

double Point::getY() { return this->y; }

string Point::clean_double_to_string(double d) {
  std::string str = std::to_string(d);
  str.erase(str.find_last_not_of('0') + 1, std::string::npos);
  str.erase(str.find_last_not_of('.') + 1, std::string::npos);
  return str;
}

string Point::to_string() {
  return "(" + clean_double_to_string(this->x) + ", " +
         clean_double_to_string(this->y) + ")";
}

Point Point::operator+(const Point &p) {
  return Point(this->x + p.x, this->y + p.y);
}

Point Point::operator-(const Point &p) {
  return Point(this->x - p.x, this->y - p.y);
}

double Point::distance(Point p) {
  return sqrt(pow(p.getX() - this->x, 2) + pow(p.getY() - this->y, 2));
}

ostream &operator<<(ostream &os, const Point &p) {
  os << "(" << p.x << ", " << p.y << ")";
  return os;
}

Point operator*(int i, Point p) { return Point(i * p.getX(), i * p.getY()); }
