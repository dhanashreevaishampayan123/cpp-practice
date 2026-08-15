#include<iostream>
using namespace std;
struct student {
    string name;
    int roll;
    float marks;
};
void display(student &s)
{
    cout<<s.name<<endl;
    cout<<s.roll<<endl;
    cout<<s.marks<<endl;
}
int main() 
{
 student s1={"dhanashree",268,98.89};
display(s1);
    return 0;
}