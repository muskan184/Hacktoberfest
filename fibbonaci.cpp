// C++ Program to print the fibonacci series
// using iteration (loops)
#include <iostream>
using namespace std;

// Function to print fibonacci series
void printFib(int n)
{
    if (n < 1)
    {
        cout << "Invalid Number of terms\n";
        return;
    }

    // When number of terms is greater than 0
    int prev1 = 1;
    int prev2 = 0;

    cout << prev2 << " ";

    // If n is 1, then we do not need to
    // proceed further
    if (n == 1)
        return;

    cout << prev1 << " ";

    // Print 3rd number onwards using
    // the recursive formula
    for (int i = 3; i <= n; i++)
    {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
        cout << curr << " ";
    }
}

// Driver code
int main()
{
    int n = 9;
    printFib(n);
    return 0;
}
