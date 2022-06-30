#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct employee
{
    int id;
    char name[20];
    int salary;

public:
    employee() // default constructor
    {
        cout << "\n given value is Default constructor";
        this->id = 00;
        strcpy(this->name, "not given");
        this->salary = 00000;
    }
    employee(int i, const char *nm, int s) // Parameters constructor
    {
        cout << "\n given value is Parameters constructor";
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
};

int main()
{
    employee e1;
    employee e2(555, "lonika", 23000);
    e1.display();
    e2.display();
}
