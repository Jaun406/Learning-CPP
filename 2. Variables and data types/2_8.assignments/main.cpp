#include <iostream>

int main() {

    int var1 {123};
    std::cout << "var1 before we assign another value is: " << var1 << std::endl;

    //Assign different value
    var1 = 56;
    std::cout << "var1 after assignment: " << var1 << std::endl;

    return 0;
}