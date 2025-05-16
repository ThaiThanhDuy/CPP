#include <iostream>
#include <string>

// Lớp cha Dog (đã định nghĩa trước đó)
class Animal {
private:
    std::string name;
    int age;

protected:
    std::string breed; // Thêm thuộc tính giống loài (có thể truy cập bởi lớp con)

public:
    Animal(const std::string& n, int a, const std::string& b) : name(n), age(a), breed(b) {}
    virtual void makeSound() const {
        std::cout << "Một con vật phát ra âm thanh." << std::endl;
    }
    std::string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
    std::string getBreed() const {
        return breed;
    }
    void celebrateBirthday() {
        age++;
        std::cout << name << " vừa tròn " << age << " tuổi!" << std::endl;
    }
    virtual void displayInfo() const {
        std::cout << "Tên: " << name << ", Tuổi: " << age << ", Giống loài: " << breed << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog(const std::string& n, int a, const std::string& b) : Animal(n, a, b) {}
    void makeSound() const override {
        std::cout << "Woof!" << std::endl;
    }
    void fetch() const {
        std::cout << getName() << " đang tha đồ vật!" << std::endl;
    }
    void displayInfo() const override {
        std::cout << "Đây là một con chó tên " << getName() << ", " << getAge() << " tuổi, giống " << getBreed() << "." << std::endl;
    }
};

// Lớp con Poodle kế thừa từ Dog
class Poodle : public Dog {
private:
    bool isMiniature; // Thuộc tính riêng của Poodle

public:
    // Constructor của Poodle, gọi constructor của Dog thông qua danh sách khởi tạo thành viên
    Poodle(const std::string& n, int a, bool mini) : Dog(n, a, "Poodle"), isMiniature(mini) {}

    // Ghi đè phương thức makeSound để phù hợp với tiếng sủa của Poodle (ví dụ)
    void makeSound() const override {
        std::cout << "Yip! Yip!" << std::endl;
    }

    // Phương thức riêng của Poodle
    void doFancyTricks() const {
        std::cout << getName() << " đang thực hiện các trò diễn đẹp mắt!" << std::endl;
    }

    // Ghi đè phương thức displayInfo để hiển thị thông tin riêng của Poodle
    void displayInfo() const override {
        Dog::displayInfo(); // Gọi phương thức displayInfo của lớp cha Dog
        std::cout << (isMiniature ? "Đây là Poodle Miniature." : "Đây là Poodle tiêu chuẩn.") << std::endl;
    }
};

int main() {
    Poodle myPoodle("Bella", 2, true);
    myPoodle.makeSound();       // Gọi phương thức đã ghi đè của Poodle
    myPoodle.fetch();         // Gọi phương thức kế thừa từ Dog
    myPoodle.celebrateBirthday(); // Gọi phương thức kế thừa từ Animal
    myPoodle.doFancyTricks();  // Gọi phương thức riêng của Poodle
    myPoodle.displayInfo();   // Gọi phương thức đã ghi đè của Poodle

    return 0;
}