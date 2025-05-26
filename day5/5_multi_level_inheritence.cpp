#include<iostream>
using namespace std;
class person
{
protected:
string name;
    int age;
    int weight;
public:
    person(string name, int age, int weight) :name(name),age(age),weight(weight)
    {
        cout<<"person constructor"<<endl;
    }
};
class Employee : public Manager
{
protected:
    int emp_id;
public:
    Employee(string name, int age, int weight, int emp_id) : person(name, age, weight), emp_id(emp_id)
    {
        cout<<"Employee constructor"<<endl;
    }
};
class manager : public Employee
{
    int salary;
public:
    Manager(string name, int age, int weight, int emp_id, int salary) : Employee(name, age, weight,emp_id),salary(salary)
    {
        cout<<"Manager constructor"<<endl;
    }   
    void display()
    {
       cout<<"Manager details:"<<endl;
       cout<<"Manager Name:"<<name<<endl;
       cout<<"Manager Age:"<<age<<endl;
       cout<<"Manager Weight:"<<weight<<endl;
       cout<<"Employee Id:"<<emp_id<<endl;
       cout<<"Manager Salary:"<<salary<<endl;
    }
};
int main()
{
    Manager m1("sandesh",23,59,24300000);
    m1.display();
}