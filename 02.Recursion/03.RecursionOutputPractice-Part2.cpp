//---------------------------------------------------EXAMPLE 2--------------------------------------------------
#include <iostream>
using namespace std;

void fun(int n)
{
    if (n == 0)
        return;

    fun(n / 2);

    cout << (n % 2) << endl;
}
int main()
{

    fun(7);

    return 0;
}

//---------------------------------------------------EXAMPLE 1--------------------------------------------------
/*
#include <iostream>
using namespace std;

int fun(int n)
{
    if (n == 1)
        return 0;
    else
        return 1 + fun(n / 2);
}
int main()
{

    cout << fun(16);

    return 0;
}
*/