#include <iostream>
#include <string>
void task9() {
	std::string word;
	std::cout << "Enter word: ";
	std::cin >> word;
	short x = word.length();
	short i = 0;
	while (i != x) {
		i++;
		word.insert(word.begin(), '*');
		word.push_back('*');
	}
	std::cout << word;
}