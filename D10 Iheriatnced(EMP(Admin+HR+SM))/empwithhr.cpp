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
        this->commission = 11;
    }

    HR(int i, const char *nm, double s, int c) : employee(i, nm, salary)
    {
        cout << "\nHR Parameterized constructor";
        this->commission = c;
    }

    void display()
    {
        employee::display();
        // Salesmanager::display();
        cout << "\n commission is : " << this->commission;
    }
};

int main()
{
    //  Salesmanager s1;
    HR h1;
    h1.display();
    HR h2(10, "ram", 23000, 13);
    h2.display();
}
