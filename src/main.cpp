#include <iostream>

int main()
{
    std::string input;
    std::string& message = input;

    std::cout << "Enigma Machine\n";
    while(true)
    {
        std::cout << "Enter a message to encrypt: ";
        std::getline(std::cin, input);
        if(input.empty())
        {
            std::cout << "Empty message\n";
            continue;
        }
        std::cout << "Encrypted message: " << message << "\n";
        break;
    }
}