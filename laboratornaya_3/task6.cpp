#include <iostream>
#include <string>

bool is_first_longer(const std::string& name_one, const std::string& name_two) {
    return name_one.length() > name_two.length();
}

void task6() {
    std::string surname1, surname2;

    std::cout << "Surname1: ";
    std::cin >> surname1;
    std::cout << '\n';

    std::cout << "Surname2: ";
    std::cin >> surname2;

    std::cout << std::boolalpha << is_first_longer(surname1, surname2);
}