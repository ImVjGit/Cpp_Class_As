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
    void setsalary(int a)
    {
        this->salary = a;
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
        this->salary = 000;
    }
    employee(int id, const char *nm, double salary)
    {
        cout << "\nEmployee Parameterized constructor";
        this->id = id;
        strcpy(this->name, nm);
        this->salary = salary;
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
        this->incentive = 000;
        this->target = 00;
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
        cout << "\n incentive is : " << this->incentive<<"%";
        cout << "\n target is : " << this->target;
    }
};

class Admin : public employee
{

    double allowance;

public:
    void setallowance(double a)
    {
        this->allowance = a;
    }

    double getallowance()
    {
        return this->allowance;
    }

    Admin() : employee()
    {
        cout << "\nAdmin Default constructor";
        this->allowance = 00;
    }

    Admin(int i, const char *nm, double salary, double a) : employee(i, nm, salary)
    {
        cout << "\nAdmin Parameterized constructor";
        this->allowance = a;
    }

    void display()
    {
        employee::display();
        // Salesmanager::display();
        cout << "\n allowance is : " << this->allowance<<"%";
    }
};
class HR : public employee
{

    int commission;

public:
    void setcommission(int c)
    {
        this->commission = c;
    }

    int getcommission()
    {
        return this->commission;
    }

    HR() : employee()
    {
        cout << "\nHr Default constructor";
        this->commission = 000;
    }

    HR(int i, const char *nm, double salary, int c) : employee(i, nm, salary)
    {
        cout << "\nHR Parameterized constructor";
        this->commission = c;
    }

    void display()
    {
        employee::display();
        cout << "\n commission is : " << this->commission<<"%";
    }
};

int main()
{
    Salesmanager s1;
    s1.display();
    cout << "\n\n";
    Salesmanager s2(101, "Smram", 67000, 55, 5);
    s2.display();
    cout << "\n\n";
    Admin a1;
    a1.display();
    cout << "\n\n";
    Admin a2(19, "AdminVani", 80000, 12);
    a2.display();
    cout << "\n\n";
    HR h1;
    h1.display();
    cout << "\n\n";
    HR h2(17, "HrRavi", 73000, 8);
    h2.display();
    cout << "\n\n";
}
