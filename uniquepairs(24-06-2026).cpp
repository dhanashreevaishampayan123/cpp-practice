#include <iostream>
#include <vector>
using namespace std;

int countUniquePairs(vector<int> &v, int x)
{
    int left = 0;
    int right = v.size() - 1;
    int count = 0;

    while (left < right)
    {
        int sum = v[left] + v[right];

        if (sum == x)
        {
            count++;

            // Store the current values
            int leftValue = v[left];
            int rightValue = v[right];

            // Skip all duplicates on the left
            while (left < right && v[left] == leftValue)
            {
                left++;
            }

            // Skip all duplicates on the right
            while (left < right && v[right] == rightValue)
            {
                right--;
            }
        }
        else if (sum < x)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v;

    cout << "Enter elements in sorted order:\n";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    int x;
    cout << "Enter target sum: ";
    cin >> x;

    int ans = countUniquePairs(v, x);

    cout << "Number of unique pairs = " << ans;

    return 0;
}