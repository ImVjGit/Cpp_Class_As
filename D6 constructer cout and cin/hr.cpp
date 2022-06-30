#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class HR
{
    int id;
    char name[15];
    int salary;
    int commission;

public:
    HR() // default constructor
    {
        cout << "\n given value is Default constructor";
        this->id = 00;
        strcpy(this->name, "not given");
        this->salary = 00000;
        this->commission = 0000;
    }
    HR(int i, const char *nm, int s, int c) // Parameters constructor
    {
        cout << "\n given value is Parameters constructor";
        this->id = i;
        strcpy(this->name, nm);
        this->salary = s;
        this->commission = c;
    }

    void display()
    {
        cout << "\n id : " << id;
        cout << "\n name :" << name;
        cout << "\n salary : " << salary;
        cout << "\n commission : " << commission;
    }
};

int main()
{
    HR h1;
    HR h2(33, "ram", 500000, 1000);
    h1.display();
    h2.display();
}
