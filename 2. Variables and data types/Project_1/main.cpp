#include <iostream> // Include to write to and from the console

int main() {
    // Welcome message
    std::cout << "=== Personal Buget calculator ===" << std::endl << std::endl; // Leave open a line after the title

    // Total income
    float income {};
    std::cout << "Total income every month: ";
    std::cin >> income;

    // Total rent expense
    float rent_out {};
    std::cout << "Total rent every month: ";
    std::cin >> rent_out;

    // Total food expense
    float food_out {};
    std::cout << "Total food every month: ";
    std::cin >> food_out;

    // Total rent expense
    float transport_out {};
    std::cout << "Total transport every month: ";
    std::cin >> transport_out;

    // Total rent expense
    float entertainment_out {};
    std::cout << "Total entertainment every month: ";
    std::cin >> entertainment_out;

    // Total expenses
    float total_out {rent_out + food_out + transport_out + entertainment_out};
    std::cout << "Total expenses:" << total_out << std::endl << std::endl;

    // Remaining
    float remaining {income - total_out};
    std::cout << "Remaining money: " << remaining << std::endl;

    // If statement to decide if they need to save of borrow
    bool save {total_out < income};
    if (save){
        std::cout << "Good job, you can save " << remaining << "." << std::endl;
    } else{
         std::cout << "Oh no, you need to borrow " << remaining << "." << std::endl;
    }

    // Extended
    bool extend {};
    char YesNo {};

    std::cout << "Do you want to see the daily budget breakdown? (y/n): ";
    std::cin >> YesNo;
    extend = YesNo == 'y';

    if (extend){
        std::cout << " You can spend " << income/31 << " every day! " << std::endl;
    } else {
        return 0;
    }

    return 0;
}