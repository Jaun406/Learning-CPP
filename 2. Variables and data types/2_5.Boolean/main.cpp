#include <iostream>

int main() {
    // Booleans -> take 8 bits of data
    bool redLight {true};
    bool greenLight {false};

    // One way of working with booleans
    if (redLight == true){
        std::cout << "Stop!" << std::endl;
    } else {
        std::cout << "Go through!" << std::endl;
    }

    // Another way of working with Booleans
    if (greenLight){
        std::cout << "The light is green!" << std::endl;
    } else{
        std::cout << "The light is not green!"<< std::endl;
    }
    std::cout << std::endl;
    //////////////////////////////////////////////////////////////

    //Size of bool
    std::cout << "size of boolean: " << sizeof(bool) <<std::endl;
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////

    //Printing booleans
    // 1 -> True
    // 2 -> False
    std::cout << "Without boolalpha" << std::endl;
    std::cout << "True -> " << true << std::endl;
    std::cout << "False -> " << false << std::endl;
    std::cout << std::endl;
    // With boolalpha
    std::cout << std::boolalpha;
    std::cout << "With boolalpha" << std::endl;
    std::cout << "True -> " << true << std::endl;
    std::cout << "False -> " << false << std::endl;




    return 0;
}