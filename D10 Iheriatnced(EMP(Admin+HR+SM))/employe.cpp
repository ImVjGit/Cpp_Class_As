#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct employee
{
    int id;
    char name[20];
    double salary;

public:
    void setid(int a)
    {
        this->id = a;
    }
    void setname(const char *a)
    {
        strcpy(this->name, a);
    }
    void setsalary(int  s)
    {
        this->salary = s;
    }

    int getid()
    {
        return this->id;
    }
    const char *getname()
    {
        return this->name;
    }
    int getsalary()
    {
        return this->salary;
    }
    employee()
    {
        cout << "\nEmployee Default constructor";
        this->id = 00;
        strcpy(this->name, "not given");
        this->salary = 00000;
    }
    employee(int i, const char *nm, double s)
    {
        cout << "\nEmployee Parameterized constructor";
        this->id = i;
        strcpy(this->name, nm);
        this->salary = s;
    }

    void display()
    {
        cout << "\n name is : " << name;
        cout << "\n id is : " << id;
        cout << "\n salary is : " << salary;
    }
}; // Class Emp End
class Salesmanager : public employee
{

    double incentive;
    int target;

public:
    void setincentive(double i)
    {
        this->incentive = i;
    }

    void settarget(int t)
    {
        this->target = t;
    }

    double getincentive()
    {
        return this->incentive;
    }
    int gettarget()
    {
        return this->target;
    }

    Salesmanager() : employee()
    {
        cout << "\nSales Manager Default constructor";
        this->incentive = 111;
        this->target = 11;
    }
    Salesmanager(int i, const char *nm, double salary, double in, int t) : employee(i, nm, salary)
    {
        cout << "\nSales Manager Parameterized constructor";
        this->incentive = in;
        this->target = t;
    }

    void display()
    {
        employee::display();
        cout << "\n incentive is : " << this->incentive;
        cout << "\n target is : " << this->target;
    }
};

int main()
{
    Salesmanager s1;
    s1.display();
    Salesmanager s2(10,"ram",23000,55,13);
    s2.display();
}
