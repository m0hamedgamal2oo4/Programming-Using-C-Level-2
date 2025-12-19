#include<iostream>
using namespace std;

int MySum(int a, int b)
{
    int s = 0;
    // Step Into (F11)
    // Here: I can use 'Quick Watch' to change 'a' or 'b' before the addition
    s = a + b;
    return s;
}

int main()
{
    // Lesson #02: Memory Observation
    int arr1[5] = { 200, 100, 50, 25, 30 };

    int a, b, c;
    a = 10;
    b = 20;

    a++; // a = 11
    ++b; // b = 21

    // Lesson #06: Changing Values on the fly
    // Action: Set a breakpoint here, and change 'a' from 11 to 50 in the Watch Window.
    // Result: 'c' will become 71 instead of 32.
    c = a + b;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;

        // Changing Values in Loops:
        // While debugging, I manually changed 'i' to 5 in the Watch Window
        // to skip the intermediate iterations and test the loop termination.
        a = a + a * i;
    }

    // Changing Values via Quick Watch (Shift + F9):
    // Highlight 'b', press Shift+F9, and change its value to 0.
    c = MySum(a, b);

    cout << "Final: " << c;

    return 0;
}