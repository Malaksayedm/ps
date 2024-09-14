#include <iostream>
#include <string>
#include <cctype>

// checking key invalidity 2.5/3
bool isNumber(const std::string& str) {
    if (str.empty()) return false;
    for (size_t i = 0; i < str.length(); i++) {
        if (i == 0 && str.length() != 1 && (str[i] == '-' || str[i] == '+')) continue; // handle error case
        if (!isdigit(str[i])) return false;
    }
    return true;
}

// Decrypting process 2.5/3
std::string decrypt(const std::string& text, int key) {
    key %= 26; // to remove multiples
    std::string result = text;
    for (size_t i = 0; i < text.length(); i++) {
        if (isupper(text[i])) {
            result[i] = char((text[i] - 'A' - key + 26) % 26 + 'A');
        }
        else if (islower(text[i])) {
            result[i] = char((text[i] - 'a' - key + 26) % 26 + 'a');
        }
        else {
            result[i] = text[i];
        }
    }
    return result;
}

int main() {
    // prompting user for valid ciphertext and key
    std::string input;
    int key;
    
    while (true) {
        std::cout << "Enter input: ";
        std::cin >> input;
        if (isNumber(input)) {
            key = std::stoi(input);
            break;
        } else {
            std::cout << "Wrong input, try again" << std::endl;
        }
    }
    
    std::cout << "Enter the encrypted word or sentence:\n  ";
    std::cin.ignore();
    std::getline(std::cin, input); // Taking message 1/1
    
    // invoke your decrypt function to return the plaintext 1/1
    std::string decryptedText = decrypt(input, key);
    std::cout << "Decrypted text: " << decryptedText << std::endl;
    
    return 0;
}
// great work 😎 9/10 ⭐
