#include <iostream>
using namespace std;
class bankname
{
private:
    string name;
public:
    bankname(string name)
    {
        this->name = name;
        cout << "constructor called for: " << this->name << endl;
    }
    ~bankname()
    {
        cout << "destructor called for: "<<name << endl;
    }
};
int main()
{
    bankname b1("SBI");
    bankname b2("HDFC");
    bankname b3("CANARA");
    return 0;
}



