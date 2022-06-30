#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct student
{
    int roll;
    char name[20];

public:
    student() // default constructor
    {
        cout << "\n given value is Default constructor";
        this->roll = 00;
        strcpy(this->name, "not given");
    }

    student(int r, const char *nm) // Parameters constructor
    {
        cout << "\n given value is Parameters constructor";
        this->roll = r;
        strcpy(this->name, nm);
    }

    void display()
    {
        cout << "\n name is " << name;
        cout << "\n roll is  " << roll;
    }
};

int main()
{
    student s1;
    student s2(13, "enaika");
    s1.display();
    s2.display();
}
