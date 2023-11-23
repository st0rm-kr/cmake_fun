#include "hello.hpp"
#include "world.hpp"
#include "add.cpp"

int main() {
  hello();
  std::cout << " ";
  world();
  std::cout << "\n";
  std::cout << "10 + 20 = " << add(10, 20) << "\n";
  return 0;
}