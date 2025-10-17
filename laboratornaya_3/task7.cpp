#include <iostream>
#include <string>
#include <algorithm>

void find_min_max_length(const std::string& a, const std::string& b, const std::string& c) {

    if (a.length() < b.length() && a.length() < c.length())
        std::cout << "the_shortest: " << a << " (" << a.length() << ") " << '\n';

    else if (a.length() == b.length() && a.length() == c.length())
        std::cout << "equal: " << a << ", " << b << ", " << c << " (" << a.length() << ") " << '\n';

    else if (a.length() == b.length() && a.length() < c.length())
        std::cout << "the_shortest: " << a << ", " << b << " (" << a.length() << ") " << '\n';

    else if (a.length() == c.length() && a.length() < b.length())
        std::cout << "the_shortest: " << a << ", " << c << " (" << a.length() << ") " << '\n';

    else if (b.length() == c.length() && b.length() < a.length())
        std::cout << "the_shortest: " << b << ", " << c << " (" << b.length() << ") " << '\n';

    else if (b.length() < a.length() && b.length() < c.length())
        std::cout << "the_shortest: " << b << " (" << b.length() << ") " << '\n';

    else
        std::cout << "the_shortest: " << c << " (" << c.length() << ") " << '\n';


    if (a.length() > b.length() && a.length() > c.length())
        std::cout << "the_longest: " << a << " (" << a.length() << ") " << '\n';

    else if (a.length() == b.length() && a.length() > c.length())
        std::cout << "the_longest: " << a << ", " << b << " (" << a.length() << ") " << '\n';

    else if (a.length() == c.length() && a.length() > b.length())
        std::cout << "the_longest: " << a << ", " << c << " (" << a.length() << ") " << '\n';

    else if (b.length() == c.length() && b.length() > a.length())
        std::cout << "the_longest: " << b << ", " << c << " (" << b.length() << ") " << '\n';

    else if (b.length() > a.length() && b.length() > c.length())
        std::cout << "the_longest: " << b << " (" << b.length() << ") " << '\n';

    else if (c.length() > a.length() && c.length() > b.length())
        std::cout << "the_longest: " << c << " (" << c.length() << ") " << '\n';

}
void task7() {
    std::string City_1, City_2, City_3;
    std::cout << "First city: ";
    std::cin >> City_1;
    std::cout << "Second city: ";
    std::cin >> City_2;
    std::cout << "Third city: ";
    std::cin >> City_3;
    find_min_max_length(City_1, City_2, City_3);
}