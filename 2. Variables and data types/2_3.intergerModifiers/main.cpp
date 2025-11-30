#include <iostream>

int main() {
    // long and short
    short int value1 {10};
    long long int value2 {-300};

    std::cout<< "Value 1: "<< value1 <<std::endl;
    std::cout<< "Size of value 1: "<< sizeof(value1) <<std::endl;
    std::cout<< "Value 2: "<< value2 <<std::endl;
    std::cout<< "Size of value 2: "<< sizeof(value2) <<std::endl;

    //Only positive numbers
    unsigned int value3 {4};
    // unsigned int negSign {-23}; //This will give compile error
    std::cout<< "Value 3: "<< value3 << std::endl;
    std::cout<< "Size of value 3: "<< sizeof(value3) <<std::endl;


    return 0;
}