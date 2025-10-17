#include <iostream>


void task3() {
	int array[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	for (int i = 0; i < 20; i++)
		std::cout << array[i] << ' ';
	std::cout << std::endl;

	int t;
	for (int i = 0; i < 3; i++) {
		t = array[i];
		array[i] = array[17 + i];
		array[17 + i] = t;
	}

	for (int i = 0; i < 20; i++) {
		std::cout << array[i] << ' ';
	}
}