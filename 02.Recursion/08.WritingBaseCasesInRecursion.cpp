#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{

    int n = 6;

    cout << "Factorial is " << fact(n) << endl;

    cout << "Fibonacci is " << fib(n) << endl;
    
    return 0;
}