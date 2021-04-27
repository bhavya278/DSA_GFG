//--------------------------------NAIVE APPROACH(O(n^2))--------------------------------

/*
#include <iostream>
#include <cmath>
using namespace std;

int getLargest(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
            return i;
    }
    return -1;
}

int main()
{

    int arr[] = {5, 8, 20, 10};

    cout << getLargest(arr, 4) << endl;

    return 0;
}
*/

//------------------------------------EFFICIENT APPROACH(O(n))--------------------------------------

#include <iostream>
#include <cmath>
using namespace std;
int getLargest(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
        if (arr[i] > arr[res])
            res = i;
    return res;
}

int main()
{

    int arr[] = {5, 8, 20, 10};

    cout << getLargest(arr, 4) << endl;

    return 0;
}