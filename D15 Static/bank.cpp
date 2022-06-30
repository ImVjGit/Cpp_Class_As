#include <iostream>
#include <string.h>
using namespace std;
class BankInfo
{
    int AccountNumber;
    double Balance;
    char AccountHolderName[25];
    static double InterestRate; //apply static

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
    static void setInterestRate(double i)//static
    {
        InterestRate = i;           //remove this-> pointer
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
       
    }

    BankInfo(int a, double b, const char *nm)
    {
        this->AccountNumber = a;
        strcpy(this->AccountHolderName, nm);
        this->Balance = b;
       
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
 
double BankInfo::InterestRate=6.5;//static 

int main()
{

    BankInfo b1(1515, 575615, "Vishal Patil");
    b1.Display();
    cout << "\n";
    BankInfo b12(7981, 255756, "Rani Ram Pawar");
    b12.Display();

    BankInfo::setInterestRate(5.0);//static 
    BankInfo b2(1235, 75618, "Virat Koli");
    b2.Display();
    cout << "\n";
    BankInfo b21(77777, 777777, "MS Dhoni");
    b21.Display();

}