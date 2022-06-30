#include <iostream>
#include <string.h>
using namespace std;
class BankInfo
{
    int AccountNumber;
    double Balance;
    char AccountHolderName[25];
    double InterestRate;

public:
    void setAccountNumber(int n)
    {
        this->AccountNumber = n;
    }
    void setBalance(double a)
    {
        this->Balance = a;
    }
    void setAccountHolderName(const char *nm)
    {
        strcpy(this->AccountHolderName, nm);
    }
    void setInterestRate(double i)
    {
        this->InterestRate = i;
    }

    int getAccountNumber()
    {
        return this->AccountNumber;
    }

    double getBalance()
    {
        return this->Balance;
    }

    const char *getAccountHolderName()
    {
        return this->AccountHolderName;
    }

    double getInterestRate()
    {
        return this->InterestRate;
    }

    BankInfo()
    {
        this->AccountNumber = 0000;
        strcpy(this->AccountHolderName, "Not Given");
        this->Balance = 000;
        this->InterestRate = 00;
    }

    BankInfo(int a, double b, const char *nm, double i)
    {
        this->AccountNumber = a;
        strcpy(this->AccountHolderName, nm);
        this->Balance = b;
        this->InterestRate = i;
    }

    void Display()
    {
        cout << "\nAccount Number : " << this->AccountNumber;
        cout << "\nAccount Holder Name :" << this->AccountHolderName;
        cout << "\nBalance : " << this->Balance;
        cout << "\nInterest Rate :  " << this->InterestRate << "%";
        cout << "\n";
    }
};

int main()
{

    BankInfo b1(1515, 575615, "Vishal Patil", 12.32);
    b1.Display();
    cout << "\n";
    BankInfo b12(7981, 255756, "Rani Ram Pawar", 30.32);
    b12.Display();
}