#include <algorithm> // Cho std::sort
#include <iostream>
#include <list>
#include <string>
#include <vector>
class Dog {
private:
  std::string name;
  int age;

public:
  // Constructor
  Dog(const std::string &n, int a) : name(n), age(a) {}

  // Phương thức public để truy cập và thao tác với thuộc tính
  void bark() const { std::cout << "Woof!" << std::endl; }

  void displayInfo() const {
    std::cout << "Tên: " << name << ", Tuổi: " << age << std::endl;
  }

  void setName(const std::string &newName) { name = newName; }

  std::string getName() const { return name; }
};
int main() {

  Dog myDog("Buddy", 3);
  myDog.bark();        // Truy cập phương thức public
  myDog.displayInfo(); // Truy cập phương thức public
  myDog.setName("Max"); // Thay đổi thuộc tính thông qua phương thức public
  std::cout << "Tên mới: " << myDog.getName() << std::endl;
  // myDog.name = "Charlie"; // Lỗi: 'name' là private
  return 0;
}