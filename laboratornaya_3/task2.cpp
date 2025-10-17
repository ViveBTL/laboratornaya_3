#include <iostream>


void task2() {
    int sum = 0;
    int N;
    std::cout << "Enter count: ";
    std::cin >> N;

    int* v = new int[N];

    std::cout << "Enter numbers: ";
    for (int i = 0; i < N; i++) {
        std::cin >> v[i];
    }
    std::cout << "sum of all elements: ";
    for (int i = 0; i < N; i++)
        sum += v[i];
    std::cout << sum << '\n';

    sum = 0;

    std::cout << "summa kvadratov: ";
    for (int i = 0; i < N; i++)
        sum += v[i] * v[i];
    std::cout << sum << '\n';

    sum = 0;

    std::cout << "sum of first 6 elements: ";
    for (int i = 0; i < 6; i++)
        sum += v[i];
    std::cout << sum << '\n';

    sum = 0;

    std::cout << "sum of elements from k1 to k2: ";
    int k1, k2;
    std::cin >> k1 >> k2;
    for (k1; k1 <= k2; k1++)
        sum += v[k1];
    std::cout << sum << '\n';

    sum = 0;

    std::cout << "sredneje arithmeticheskoe: ";
    double sm = 0;
    for (int i = 0; i < N; i++)
        sm += v[i];
    std::cout << sm / N << '\n';

    sm = 0;

    std::cout << "sredneje arithmeticheskoe s1 -> s2: ";
    int s1, s2;
    std::cin >> s1 >> s2;
    for (int i = s1; i <= s2; i++)
        sm += v[i];
    std::cout << sm / (s2 - s1 + 1) << '\n';
}