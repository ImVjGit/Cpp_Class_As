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
        this->salary = 00000;
    }
    employee(int i, const char *nm, int s)
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
        this->allowance = 6;
    }

    Admin(int i, const char *nm, double s, double a) : employee(i, nm, salary)
    {
        cout << "\nAdmin Parameterized constructor";
        this->allowance = a;
    }

    void display()
    {
        employee::display();
        // Salesmanager::display();
        cout << "\n allowance is : " << this->allowance;
    }
};

int main()
{
    //  Salesmanager s1;
    Admin a1;
    a1.display();
    Admin a2(10, "ram", 23000, 13);
    a2.display();
}
