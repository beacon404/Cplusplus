#include <iostream>
#include <cstdlib>
#include <ctime>

std::string generateRandomPassword(int length) {
    const std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+";

    srand(static_cast<unsigned int>(time(nullptr)));

    std::string password;
    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % characters.length();
        password += characters[randomIndex];
    }

    return password;
}

int main() {
    int passwordLength;
    std::cout << "Enter the length of the password: ";
    std::cin >> passwordLength;

    std::string randomPassword = generateRandomPassword(passwordLength);

    std::cout << "Generated Password: " << randomPassword << std::endl;

    return 0;
}
