#include<iostream>
using namespace std;
class bankname
{
private:
    string name;
    int bank_name;
public:
    string getname()
    {
        return this->name;
    }
    int getbankname()
    {
        return this->bank_name;
    }
    void setname(string name)
    {
        this->name = name;
    }
    void setbankname(int name)
    {
        this->bank_name = name;
    }
};
int main()
{
    bankname b1;
    b1.setname("sandesh");
    b1.setbankname("SBI");
    cout << "name is: " << b1.getname() << endl;
    cout << "bank name is:" << b1.getbankname() << endl; 
    return 0;
}