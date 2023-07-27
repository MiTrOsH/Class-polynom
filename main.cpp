#include <iostream>
#include "polynom.h"

void test_operators() {
  std::cout << "start" << std::endl;
  Polynom p1({ 1, 2, -3, 0, 4 }); 
  std::cout << "p1: " << p1 << std::endl;
  Polynom p2({ 5, -1, 2 });
  std::cout << "p2: " << p2 << std::endl;
  p1 += p2;
  std::cout << "p1 += p2: " << p1 << std::endl;
  p1 -= p2;
  std::cout << "p1 -= p2: " << p1 << std::endl;
  p1 *= p2;
  std::cout << "p1 *= p2: " << p1 << std::endl;
  p1 /= p2;
  std::cout << "p1 /= p2: " << p1 << std::endl;
  Polynom p3({ 1, 1 }); 
  p1 %= p3;
  std::cout << "p1 %= p3: " << p1 << std::endl;
  Polynom p4({ 1, 2, -3, 0, 4 }); 
  if (p1 == p4) {
    std::cout << "p1 == p4" << std::endl;
  }
  Polynom p5({ 1, 2, -3, 0, 5 }); 
  if (p1 != p5) {
    std::cout << "p1 != p5" << std::endl;
  }
  std::cout << "end " << std::endl;
}
int main() {
  test_operators();
  return 0;
}