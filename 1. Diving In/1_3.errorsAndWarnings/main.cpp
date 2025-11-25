#include <iostream>
// Compile time error (will not compile)

// Code with errors
/*


int main(int argc, char **argv) {
    std::cout << 'Hello World in C++!' << std::endl
    return 0;
}
*/

// Runtime errors (does compile, but program might cash)
int main() {
    std::cout << 'Hello World in C++!' << std::endl;

    int value = 7/0; // This causes a runtime error
    std::cout << "value: "<<value<<std::endl;
    return 0;
} 