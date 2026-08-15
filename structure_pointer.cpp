#include<iostream>
using namespace std;
struct student {
    string name;
    int roll;
    float marks;
};

int main() 
{
 student s1={"dhanashree",268,98.89};
student *p=&s1;
cout<<p->name<<endl;
cout<<p->roll<<endl;
cout<<p->marks<<endl;
    return 0;
}