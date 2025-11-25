#include <iostream>
#include <string>
// Type of data writing and reading form terminal
/*
• std::cout -> Print data to terminal
• std::cin -> Read data from terminal
• std::cerr -> Printing errors to console
• std::clog -> Print log message to console
*/


int main() {
    // Print hello world to the console
    std::cout << "Hello World!" << std::endl;

    // Get data from the console
    std::cout << "What is your name: ";
    std::string name;
    // std::cin >> name;
    // Get full line
    std::getline(std::cin, name);
    std::cout<< "Hello "<< name << "!" << std::endl;

    // Error
    std::cerr << "std::cerr output : Something went wrong" << std::endl;

    //log message
    std::clog << "std::clog output : This is a log message"<< std::endl; 


    return 0;
}