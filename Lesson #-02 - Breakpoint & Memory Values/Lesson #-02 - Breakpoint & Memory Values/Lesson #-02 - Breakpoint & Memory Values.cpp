#include<iostream>
using namespace std;

// Step Into (F11) can be used here to see how 's' is allocated in memory
int MySum(int a, int b)
{
    int s = 0; // Memory location for 's' is created here
    s = a + b;
    return s;  // Value is passed back to the caller (main)
}

int main()
{
    // Memory Value Observation: 
    // arr1 occupies 20 bytes (5 elements * 4 bytes each)
    int arr1[5] = { 200, 100, 50, 25, 30 };

    int a, b, c;
    a = 10;
    b = 20;

    // Use Breakpoint here to watch 'a' change from 10 to 11
    a++;
    // Watch 'b' change from 20 to 21 in the Watch Window
    ++b;

    c = a + b; // c now holds 32

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    // Tracing the Loop with Watch Window:
    // Monitor variable 'i' and 'a' at each iteration
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;

        // Logical Observation: 'a' grows exponentially
        // Iteration 1 (i=1): a = 11 + (11 * 1) = 22
        // Iteration 2 (i=2): a = 22 + (22 * 2) = 66
        a = a + a * i;
    }

    // Call Stack Exploration:
    // Place a breakpoint here and use 'Step Into' to jump to MySum definition
    c = MySum(a, b);

    cout << "Final Result in c: " << c << endl;

    return 0;
}