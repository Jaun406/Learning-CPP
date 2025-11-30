#include <iostream>

int main() {
    // Characters and text
    char char1 {'a'};
    char char2 {'r'};
    char char3 {'r'};
    char char4 {'o'};
    char char5 {'w'};

    std::cout << char1;
    std::cout << char2;
    std::cout << char3;
    std::cout << char4;
    std::cout << char5 << std::endl;

    // Use ASCII
    char value = 65;
    std::cout << "value: " << value << std::endl;
    std::cout << "value(int): " << static_cast<int>(value) << std::endl;
    
    return 0;
}