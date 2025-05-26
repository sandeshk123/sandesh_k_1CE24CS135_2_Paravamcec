#include<iostream>
using namespace std;
class person
{
    string name;
    int age;
public:
    person(string name, int age) : name(name), age(age)
    {
    }
    void display_person()
    {
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }
};
class student : public person
{ 