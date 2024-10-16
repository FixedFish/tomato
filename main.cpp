#include <iostream>
#include <ostream>
#include <string>

using std::cout;

int main() {
  std::cout << "Hello, world!\n";
  std::string name = "Tomato";
  sayName(name);
  return 0;
}

/*
int calc(int x, int y) {
    return x ** y;
}
*/

void sayName(std::string name) { cout << name << std::endl; }