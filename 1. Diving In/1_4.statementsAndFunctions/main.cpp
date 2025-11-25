#include <iostream>
// |return type|function name|paramaters| 
int addNumbers(int firstNumber, int secondNumber){
    int sum = firstNumber + secondNumber;
    return sum;
}


int main(int argc, char **argv) {
    //Inputs of our computation
    int firstNumber;
    int secondNumber;

    std::cout << "First number: ";
    std::cin >> firstNumber;
    std::cout << "Second number: ";
    std::cin >> secondNumber;

    //int sum = firstNumber + secondNumber;
    // Call our own function
    int sum = addNumbers(firstNumber, secondNumber);
    std::cout << "The sum of your numbers: " <<sum <<std::endl;

    return 0;
}