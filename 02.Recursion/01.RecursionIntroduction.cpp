//-------------------------------------EXAMPLE 2------------------------------------------
#include <iostream>
using namespace std;

void fun1(int n)
{
    if (n == 0)
        return;

    cout << "GFG" << endl;

    fun1(n - 1);
}
int main()
{

    fun1(2);

    return 0;
}

//-------------------------------------EXAMPLE 1-------------------------------------------
/*
#include <iostream>
using namespace std;


static void fun1()
{
	cout<<"fun1"<<endl;
}

static void fun2()
{
	cout<<"Before fun1"<<endl;

	fun1();

	cout<<"After fun1"<<endl;
}
	
	
int main() {
	
	cout<<"Before fun2"<<endl;

	fun2();

	cout<<"After fun2"<<endl;
}
*/