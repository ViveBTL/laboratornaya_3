#include <iostream>
#include <string>
void task9() {
	std::string word;
	std::cout << "Enter word: ";
	std::cin >> word;
	short x = word.length();
	short i = 0;
	std::string stars(x, '*');
	word = stars + word + stars;
	/*while (i != x) {
		i++;
		word.insert(word.begin(), '*');
		word.push_back('*');
		word = "*" + word + "*";
	}*/
	std::cout << word;
}