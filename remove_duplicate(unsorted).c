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

    int index = 0;

    for(int i = 0; i < n; i++)
    {
        bool duplicate = false;

        // Check if this element has appeared before
        for(int j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                duplicate = true;
                break;
            }
        }

        if(duplicate == false)
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