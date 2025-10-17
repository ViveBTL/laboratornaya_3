#include <iostream>

void task5() {
    short i = 0;
    char a;
    std::cin.ignore();

    std::cout << "Enter text (press Enter on empty line to stop):" << std::endl;

    do {
        std::cin.get(a);
        i++;
        if (a == '\n')
            i--;
    } while (a != '\n');

    std::cout << i << '\n';

    if (i % 2 == 0)
        std::cout << "The number of characters is even";

    else
        std::cout << "The number of characters is not even";
}