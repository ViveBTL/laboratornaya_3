#include <iostream>
using namespace std;

extern void task1();
extern void task2();
extern void task3();
extern void task4();
extern void task5();
extern void task6();
extern void task7();
extern void task8();
extern void task9();
extern void task10();
extern void task11();

int main() {
	cout << "Enter task number: ";
	int x;
	cin >> x;
	if (x == 1)
		task1();
	else if (x == 2)
		task2();
	else if (x == 3)
		task3();
	else if (x == 4)
		task4();
	else if (x == 5)
		task5();
	else if (x == 6)
		task6();
	else if (x == 7)
		task7();
	else if (x == 8)
		task8();
	else if (x == 9)
		task9();
	else if (x == 10)
		task10();
	else if (x == 11)
		task11();
	return 0;
}