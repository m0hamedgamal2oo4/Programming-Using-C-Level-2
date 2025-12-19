#include<iostream>
using namespace std;

int MySum(int a, int b)
{
    int s = 0;
    s = a + b; // Quick Watch Tip: Highlight (a + b) and press Shift+F9 to see the result before assignment
    return s;
}

int main()
{
    // Memory Observation
    int arr1[5] = { 200, 100, 50, 25, 30 };

    int a, b, c;
    a = 10;
    b = 20;

    a++; // a = 11
    ++b; // b = 21

    c = a + b; // Quick Watch: Check the value of 'c' here to ensure it's 32

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    // Quick Watch in Loops:
    // When the breakpoint hits inside, highlight (a + a * i) 
    // to see the NEXT value of 'a' before the line executes.
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
        a = a + a * i;
    }

    // Quick Watch on Functions:
    // You can highlight 'MySum(a, b)' to see what the function will return 
    // without even stepping into it!
    c = MySum(a, b);

    cout << "Final: " << c;

    return 0;
}