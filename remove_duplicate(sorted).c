#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter length of array: ";
    cin >> n;

    int a[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int index = 1;

    for(int i = 1; i < n; i++)
    {
        if(a[i] != a[i - 1])
        {
            a[index] = a[i];
            index++;
        }
    }

    cout << "Array after removing duplicates:\n";
    for(int i = 0; i < index; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}