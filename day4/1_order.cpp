#include <iostream>
using namespace std;
class Student
{
private:
    string name;
public:
    Student(string name)
    {
        this->name = name;
        cout << "constructor called for: " << this->name << endl;
    }
    ~Student()
    {
        cout << "destructor called for: "<<name << endl;
    }
};
int main()
{
    Student s1("sandesh");
    Student s2("yashwanth");
    Student s3("sanjay");
    return 0;
}



