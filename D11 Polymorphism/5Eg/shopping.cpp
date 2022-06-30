#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Payment
{
    int price; 
    int RefId;
    
public:
    void setprice(int s)
    {
        this->price=s;
    }
    void setRefId(int i)
    {
        this->RefId=i;
    }
    int getprice()
    {
        return this->price;
    }
    int getRefId()
    {
        return this->RefId;
    }
    Payment()
    {
        this->price=00;
        this->RefId=00;
    }
    Payment(int i,int s)
    {
        this->price=i;
        this->RefId=s;
    }

    virtual void Display()
    {
        cout<<"\nPrice : "<<this->price;
        cout<<"\nRef Id : "<<this->RefId;
    }

    virtual void Msg()
    {
        cout<<"\nPayment Done by........";
    }

};//Payment class end

class Bank : public Payment
{
    char bankName[20];
   
    char branch[20];
     int pincode;
public:
    void setbankName(const char* bn)
    {
        strcpy(this->bankName,bn);
    }
    void setpincode(int p)
    {
        this->pincode=p;
    }
    void setbranch(const char* b)
    {
        strcpy(this->branch,b);
    }
    const char* getbankName()
    {
        return this->bankName;
    }
    const char* getbranch()
    {
        return this->branch;
    }

    Bank():Payment()
    {
        strcpy(this->bankName,"Not Given");
         strcpy(this->branch,"Not Given");
        this->pincode=000;

    }
    Bank(int p, int r,const char* bn,const char* b,int pin):Payment(p,r)
    {
        strcpy(this->bankName,bn);
        strcpy(this->branch,b);
        this->pincode=pin;

    }
    void Display()
    {
    Payment::Display();
    cout<<"\nBank Name: "<<this->bankName;
    cout<<"\nBranch Name  : "<<this->branch;
    }

    void Msg()
    {
    cout<<"\nPayment Done by Bank Account";
    }
};//Bank class end

class Cod : public Payment
{
    int OTP;
    public:
    void setOTP(int o)
    {
        this->OTP=o;
    }
    int getOTP()
    {
        return this->OTP;
    }

    Cod():Payment()
    {
        this->OTP=0000;
    }
    Cod(int p, int r,int o):Payment(p,r)
    {
        this->OTP=o;

    }
        void Display()
    {
    Payment::Display();
    cout<<"\nOTP : "<<this->OTP;
    
    }
    void Msg()
    {
    cout<<"\nPayment Done BY Cash On Delivery";
    }
};//Cod class end

class Application : public Payment
{
    char appName[20];
    int mobileNumber;
    int pin;
public:
    void setappName(const char* an)
    {
        strcpy(this->appName,an);
    }

    void setmobileNumber(int m)
    {
        this->mobileNumber=m;
    }

    void setpin(int p)
    {
        this->pin=p;
    }

    const char* getappName()
    {
        return this->appName;
    }
    int getmobileNumber()
    {
        return    this->mobileNumber;
    }
    int getpin()
    {
        return this->pin;
    }
    
    Application() : Payment()
    {
        strcpy(this->appName,"Not Given");
        this->mobileNumber=0000000000;
        this->pin=0000;
    }

    Application(int p,int r,const char* an,int mb,int pi) : Payment(p,r)
    {
        strcpy(this->appName,an);
        this->mobileNumber=mb;
        this->pin=pi;
    }
     void Display()
    {
    Payment::Display();
    cout<<"\nApplication Name : "<<this->appName;
    cout<<"\nMobile number  : "<<this->mobileNumber;
    cout<<"\nPin :"<<this->pin;
    }

    void Msg()
    {
        cout<<"\nPayment Done by Application ";
    }
    
};//Application Class end
int main()
{
    cout<<"\nDefault";
    Payment * P;
    Payment p1;
    P = &p1;
    P->Display();
    P->Msg();
    cout<<"\n";


    cout<<"\nBank ";
    Bank b1(15000,451356,"SBI","Pune",412503);
    P=&b1;
    P->Display();
    P->Msg();
    cout<<"\n";

    cout<<"\nCod ";
    Cod c1(15000,7543547,4526);
    P =&c1;
    P->Display();
    P->Msg();
    cout<<"\n";

    cout<<"\nApplication ";
    Application a1(15000,6355354,"Paytm",9845612,455213);
    P= &a1;
    P->Display();
    P->Msg();
    cout<<"\n\n";



}