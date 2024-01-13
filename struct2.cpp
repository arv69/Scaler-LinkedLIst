#include<iostream>
using namespace std;
struct person{
    string name;
    int age;
    char gender;

    void print(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }

    void input(string name1,int age1,char gender1){
        name=name1;
        age=age1;
        gender=gender1;
    }
};
int main()
{
    person p;
    // p.name="Kalpesh";
    // p.age=22;
    // p.gender='M';

    // cout<<p.name<<endl;
    // cout<<p.age<<endl;
    // cout<<p.gender<<endl;

    p.input("Mohit",25,'M');
    p.print();
    return 0;
}
