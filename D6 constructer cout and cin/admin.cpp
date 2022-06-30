#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class admin
{
    int id;
    char name[15];
    int salary;
    int allownce;

public:
    admin() // default constructor
    {
        cout << "\n given value is Default constructor";
        this->id = 0;
        this->salary = 0000;
        strcpy(this->name, "not given");
        this->allownce = 0000;
    }
    admin(const char *nm, int a, int s, int all) // Parameters constructor
    {

        cout << "\n given value is Parameters constructor";
        this->id = a;
        this->salary = s;
        strcpy(this->name, nm);
        this->allownce = all;
    }

    void Display()
    {
        cout << "\nName is :" << name;
        cout << "\nid is :" << id;
        cout << "\nsalary : " << salary;
        cout << "\nallownce: " << allownce;
    }
};

int main()
{
    admin a1;
    admin a2("ram", 2, 25000, 5000);
    a1.Display();
    a2.Display();
}
