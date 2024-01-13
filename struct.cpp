#include<iostream>
using namespace std;
struct person{
    string name;
    int age;
    char gender;
};
int main()
{
    person p;
    p.name="Kalpesh";
    p.age=22;
    p.gender='M';

    cout<<p.name<<endl;
    cout<<p.age<<endl;
    cout<<p.gender<<endl;
    return 0;
}
