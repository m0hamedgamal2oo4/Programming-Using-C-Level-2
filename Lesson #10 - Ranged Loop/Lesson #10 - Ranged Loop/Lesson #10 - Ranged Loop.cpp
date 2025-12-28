// Lesson #10 - Ranged Loop.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;
int main()
{
	int myNumbers[] = { 10,20,30,40,50 };
	for (int num : myNumbers)
	{
		cout << num << endl;
	}
}
