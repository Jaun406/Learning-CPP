#include <iostream>

/* A variable is a named piece of memory that can store values*/
// Ints will take up 4 bytes in memory (most of the times)
// typename varaible_name {initializer_value}

int main() {
    // Variable may contain random garbage value .WARNING
    int elephant_count;

    int lion_count{}; // Initializes to zero (Brased initialization)
    int dog_count {10}; // Initialize to 10

    // Can also use parameters (functional initialization)
    int cat_count(5);
    
    // Store fractions in integer types:
    /*
    int frac_count{2.9}; // Will give error or warning
    */

    int trunc_count(2.9);// Will truncade initialization

    // Print output
    std::cout << "Elephant count: " << elephant_count << std::endl;
    std::cout << "Lion count: " << lion_count << std::endl;
    std::cout << "Dog count: " << dog_count << std::endl;
    std::cout << "Cat count: " << cat_count << std::endl;
    std::cout << "What happens with round bracets: "<< trunc_count << std::endl;

    // Check size of varaibles (in bytes)

    std::cout << "sizeof in: " << sizeof(int) << std::endl;
    std::cout << "sizeof lion_count: " << sizeof(lion_count) << std::endl;

    // return 0
    return 0;
}