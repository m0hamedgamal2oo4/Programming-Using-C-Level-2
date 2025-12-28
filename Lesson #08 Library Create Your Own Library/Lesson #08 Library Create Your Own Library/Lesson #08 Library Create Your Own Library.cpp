// Lesson #08 Library Create Your Own Library.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;
#include "Readpositive number.h"

int main()
{
  
   int num;
	num=ReadPositiveNumber();
   cout << "The number is " << num << endl;
}

