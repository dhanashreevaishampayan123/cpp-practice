
 #include<iostream>
using namespace std;
void swapnumber(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x,y;
    x=10;
    y=20;
    swapnumber(&x,&y);
    cout<<x<<" "<<y;
}