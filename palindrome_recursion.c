#include<iostream>
using namespace std;
int f(int num,int *temp)
{
    if(num>=0 && num<=9)
    {
        int lastdigitoftemp=(*temp)%10;
        (*temp)/=10;
        return (num==lastdigitoftemp);
    }
    bool result=(f(num/10,temp) && (num%10)==(*temp%10));
    *temp/=10;
    return result;
}
int main()
{
  int num=12621;
  int anothernumber=num;
  int *temp=&anothernumber;
  cout<<f(12621,temp);
}