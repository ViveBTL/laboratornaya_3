#include <iostream>


void task4() {
    int N;
    std::cout << "Enter count: ";
    std::cin >> N;
    int* v = new int[N];
    std::cout << "Enter numbers: ";
    for (int i = 0; i < N; i++)
        std::cin >> v[i];


    int first_neg_ind = -1;
    for (int i = 0; i < N; i++) {
        if (v[i] < 0) {
            first_neg_ind = i;
            break;
        }
    }
    if (first_neg_ind != -1) {
        for (int i = first_neg_ind; i < N - 1; i++)
            v[i] = v[i + 1];
        N--;
        for (int i = 0; i < N; i++)
            std::cout << v[i] << " ";
    }
    else
        std::cout << "There weren't negative numbers.\n";
    std::cout << std::endl;


    int last_even_ind = -1;
    for (int i = 0; i < N; i++) {
        if (v[i] % 2 == 0)
            last_even_ind = i;
    }
    if (last_even_ind != -1) {
        for (int i = last_even_ind; i < N - 1; i++)
            v[i] = v[i + 1];
        N--;
        for (int i = 0; i < N; i++)
            std::cout << v[i] << " ";
    }
    else
        std::cout << "There weren't even numbers.\n";
}