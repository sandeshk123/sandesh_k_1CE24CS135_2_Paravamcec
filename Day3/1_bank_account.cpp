#include<iostream>
using namespace std;
class BankAccount
{
public:
    string Holder_name;
    int ac_no;
};
int main()
{
    BankAccount b1;
    b1.Holder_name ="sandesh";
    b1.ac_no = 101;
    cout<< "Holder name: " << b1.Holder_name << endl;
    cout<< "Account number: " << b1.ac_no << endl;
    return 0;
}