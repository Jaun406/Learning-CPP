#include <iostream>

int main() {
    //Desimal
    int number_des = 15;
    //Octal
    int number_oct = 017;
    //Hexadesimal
    int number_hex = 0x0f;
    //Binary (only possible since C++ 14)
    int number_bin = 0b00001111;

    std::cout << "Hello world! " << std::endl;

    std::cout << "Number1 is: " << number_des << std::endl;
    std::cout << "Number2 is: " << number_oct << std::endl;
    std::cout << "Number3 is: " << number_hex << std::endl;
    std::cout << "Number4 is: " << number_bin << std::endl;

    return 0;
}
