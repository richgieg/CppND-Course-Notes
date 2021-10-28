#include <assert.h>
#include <string>

struct Person {
  Person(std::string name) : name(name) {}
  std::string name;  
};

// Test
int main() {
  Person alice("Alice");
  Person bob("Bob");
  assert(alice.name != bob.name);
}
