#include <iostream>
#include <vector>
#include <algorithm> // Cho std::sort

int main() {
    std::vector<int> myNumbers;

    // Thêm các số vào vector
    myNumbers.push_back(5);
    myNumbers.push_back(2);
    myNumbers.push_back(8);
    myNumbers.push_back(1);

    std::cout << "Các số trong vector: ";
    for (int num : myNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Kích thước của vector: " << myNumbers.size() << std::endl;

    std::sort(myNumbers.begin(), myNumbers.end()); // Sắp xếp vector

    std::cout << "Các số sau khi sắp xếp: ";
    for (int num : myNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    myNumbers.pop_back(); // Xóa phần tử cuối cùng

    std::cout << "Kích thước sau khi pop_back: " << myNumbers.size() << std::endl;

    return 0;
}