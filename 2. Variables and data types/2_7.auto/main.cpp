#include <iostream>

int main() {
// The auto keyword -> Let the compiler deduce the type
    auto var1 {12}; // Interprate as int
    auto var2 {13.0}; // Interprate as double
    auto var3 {14.0f}; // Interperate as float
    auto var4 {15.0L}; // Interperate as long double
    auto var5 {'e'}; // Interperate as char

    //int modiefiers
    auto var6 {123u}; // unsigned int
    auto var7 {123ul}; // unsigned long int
    auto var8 {123ll}; // Long long int

    // Display all values and sizes
    std::cout << "Variable 1: " << var1 << std::endl;
    std::cout << " Size of variable 1: " << sizeof(var1) << std::endl;

    std::cout << "Variable 2: " << var2 << std::endl;
    std::cout << " Size of variable 2: " << sizeof(var2) << std::endl;

    std::cout << "Variable 3: " << var3 << std::endl;
    std::cout << " Size of variable 3: " << sizeof(var3) << std::endl;

    std::cout << "Variable 4: " << var4 << std::endl;
    std::cout << " Size of variable 4: " << sizeof(var4) << std::endl;

    std::cout << "Variable 5: " << var5 << std::endl;
    std::cout << " Size of variable 5: " << sizeof(var5) << std::endl;

    std::cout << "Variable 6: " << var6 << std::endl;
    std::cout << " Size of variable 6: " << sizeof(var6) << std::endl;
    
    std::cout << "Variable 7: " << var7 << std::endl;
    std::cout << " Size of variable 7: " << sizeof(var7) << std::endl;

    std::cout << "Variable 8: " << var8 << std::endl;
    std::cout << " Size of variable 8: " << sizeof(var8) << std::endl;


    return 0;
}