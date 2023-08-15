

#include <iostream>

#include <string>

void displayUSSDSystem() {
    std::cout << "Welcome to the USSD System!" << std::endl;

    std::string input;
    std::cout << "Enter your USSD code: ";
    std::cin >> input;

    
    if (input == "*100#") {
        std::cout << "Your current balance is $50." << std::endl;
    } else if (input == "*101#") {
        std::cout << "Your data usage is 1.5GB." << std::endl;
    } else if (input == "*102#") {
        std::cout << "Your remaining SMS balance is 100." << std::endl;
    } else {
        std::cout << "Invalid USSD code. Please try again." << std::endl;
    }
}

int main() {
    displayUSSDSystem();
    

return 0;
}