#include<iostream>
#include<vector>
using namespace std;
int first_occurence(vector<int> &input,int target)
{
    int low=0;
    int high=input.size()-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(input[mid]==target)
        {
            ans=mid;
            high=mid-1;
        }
        else if(input[mid]>target)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int> input;
    input={1,1,1,5,5,5,6,9,9,9};
    cout<<first_occurence(input,5);
    
   
}