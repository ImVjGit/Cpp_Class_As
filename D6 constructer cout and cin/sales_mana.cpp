#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class sales_manager
{
    int id;
    char name[15];
    int sale;
    int intensvie;
    int target;

public:
    sales_manager() // default constructor
    {
        cout << "\n given value is Default constructor";
        this->id = 00;
        strcpy(this->name, "not given");
        this->sale = 00000;
        this->intensvie = 0000;
        this->target = 000;
    }
    sales_manager(int i, const char *nm, int s, int in, int t) // Parameters constructor
    {
        cout << "\n given value is Parameters constructor";
        this->id = i;
        strcpy(this->name, nm);
        this->sale = s;
        this->intensvie = in;
        this->target = t;
    }

    void display()
    {
        cout << "\n id : " << id;
        cout << "\n name :" << name;
        cout << "\n sale : " << sale;
        cout << "\n intensive: " << intensvie;
        cout << "\n target : " << target;
    }
};

int main()
{
    sales_manager s1;
    sales_manager s2(55, "tina", 50, 10, 150);
    s1.display();
    s2.display();
}
