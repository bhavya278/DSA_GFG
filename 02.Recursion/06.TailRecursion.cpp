//-----------------------------------------------EXAMPLE 3(Factorial)----------------------------------------
#include <iostream>
using namespace std;

int fact(int n, int k)
{
    if (n == 0 || n == 1)
        return k;

    return fact(n - 1, k * n);
}

int main()
{

    cout << fact(3, 1);
}
//--------------------------------------------------EXAMPLE 2--------------------------------------------
/*
#include <iostream>
using namespace std;

void fun(int n, int k)
{
    if (n == 0)
        return;

    cout << k << " ";

    fun(n - 1, k + 1);
}

int main()
{

    fun(3, 1);
}
*/
//-----------------------------------------------------EXAMPLE 1----------------------------------------------------
/*
#include <iostream>
using namespace std;

void fun(int n)
{
    if (n == 0)
        return;

    cout << n << " ";

    fun(n - 1);
}

int main()
{

    fun(3);
}
*/