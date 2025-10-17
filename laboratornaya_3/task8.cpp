#include <iostream>
#include <string>

void task8() {
	std::string word;
	short m, n;
	std::cout << "Enter m: ";
	std::cin >> m;

	std::cout << "Enter n: ";
	std::cin >> n;

	std::cout << "Enter word: ";
	std::cin >> word;

	std::cout << word.substr(m - 1, n - m + 1) << std::endl;
	/*for (; (m-1) < n; m++)
		std::cout << word[m-1];*/
}