#pragma once
#include <iostream>
using namespace std;

int ReadPositiveNumber() {
	int number;
	do {
		cout << "Please enter a positive number: ";
		cin >> number;
	} while (number <= 0);
	return number;
}
