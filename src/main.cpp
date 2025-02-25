#include <iostream>
#include <string>
#include <thread>

//ASCII to alpha 90-64

char rotorOneAlpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rotorTwoAlpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rotorThreeAlpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void print_rotors(int rotor1, int rotor2, int rotor3) {
    std::cout << "3rd\t\t2nd\t\t1st\n";
    std::cout << "["<< rotor3 << "]\t\t[" << rotor2 << "]\t\t[" << rotor1 << "]" << std::endl;
    std::cout.flush();  // Ensure the output is printed immediately
}

bool check_rotor(int rotor) {
    if (rotor < 1 || rotor > 26) {
        return false;
    }
    return true;
}

std::string encrypt_message(const std::string &message, int &rotor1, int &rotor2, int &rotor3){
    std::string encrypted_message = message;
    for (char& c : encrypted_message) {
        if (c >= 'A' && c <= 'Z') {
            c = rotor1;
            if rotor
            c = rotor2;
            c = rotor3:
        }
    }
    return encrypted_message;

}

int main() {
    std::string message;
    std::string input;

    std::cout << "Enigma Machine\n";
    while (true) {
        std::cout << "Enter a message to encrypt: ";
        std::getline(std::cin, message);

        // 1st rotor input with text animation
        int rotor1, rotor2, rotor3;
        while(true) {
        std::cout << "Input rotors (1-26): [3rd] [2nd] [1st]\n";
        std::getline(std::cin, input);
        std::sscanf(input.c_str(), "%d %d %d", &rotor3, &rotor2, &rotor1);
        if (!check_rotor(rotor1) || !check_rotor(rotor2) || !check_rotor(rotor3)) {
            std::cout << "Invalid rotor input. Please enter a number between 0 and 25.\n";
            continue;
        }
        break;
    }
        // Print the final updated rotors without creating a new line
        print_rotors(rotor1, rotor2, rotor3);

        std::string encrypted_message = encrypt_message(message, rotor1, rotor2, rotor3);
        std::cout << "rotors: " << rotor1 << " " << rotor2 << " " << rotor3 << std::endl;
        std::cout << "Encrypted message: " << encrypted_message << std::endl;
        break;  // Exit the loop once all inputs are valid
    }

    return 0;
}
