//----------------------------EFFICIENT APPROACH----------------------------

#include <bits/stdc++.h>
using namespace std;

void zero_to_end(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}
int main()
{

    int arr[] = {8, 5, 0, 10, 0, 20}, n = 6;

    cout << "Before Removal" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    zero_to_end(arr, n);

    cout << "After Removal" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


//-----------------------NAIVE APPROACH------------------------
/*
#include <bits/stdc++.h>
using namespace std;

void zero_to_end(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                    swap(arr[i], arr[j]);
            }
        }
    }
}
int main()
{

    int arr[] = {8, 5, 0, 10, 0, 20}, n = 6;

    cout << "Before Removal" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    zero_to_end(arr, n);

    cout << "After Removal" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
*/