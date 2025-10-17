#include <iostream>
#include <string>
#include <cctype>

void task10() {
    std::cin.ignore();
    std::string text;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    short numofletters = 0, numofa = 0;
    for (char z : text) {
        if (isalpha(z)) {
            numofletters++;
            if (tolower(z) == 'a')
                numofa++;
        }
    }
    if (numofletters > 0)
        std::cout << "the percentage of A letter is: " << ((double)numofa / numofletters) * 100 << "%";
    else std::cout << "there's no letters in text";
}