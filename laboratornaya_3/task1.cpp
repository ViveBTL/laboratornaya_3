#include <iostream>


void task1() {
    int N;
    std::cout << "Enter count: ";
    std::cin >> N;

    int* array = new int[N];

    std::cout << "Enter numbers: ";
    for (int i = 0; i < N; i++) {
        std::cin >> array[i];
    }
    std::cout << "\n\nx2 ";
    for (int i = 0; i < N; i++) {
        array[i] <<= 1;
        std::cout << array[i] << ' ';
    }

    int a;
    std::cout << "\n\nEnter number: ";

    std::cin >> a;
    std::cout << "minus a. ";
    for (int i = 0; i < N; i++) {
        array[i] -= a;
        std::cout << array[i] << " ";
    }
    a = array[0];
    std::cout << "\n\n:v[0]. ";
    for (int i = 0; i < N; i++) {
        array[i] /= a;
        std::cout << array[i] << " ";
    }
}