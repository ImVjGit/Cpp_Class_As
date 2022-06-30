#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
struct distancE
{
    int feet;
    int inches;

public:
    distancE() // default constructor
    {
        cout << "\n given value is Default constructor";
        this->feet = 00;
        this->inches = 00;
    }
    distancE(int a, int b) //  Parameters constructor
    {
        cout << "\n given value is Parameters constructor";
        this->feet = a;
        this->inches = b;
    }

    void display()
    {
        cout << "\n feet is " << feet;
        cout << "\ninches is " << inches;
    }
};

int main()
{
    distancE d1;
    distancE d2(5, 20);

    d1.display();
    d2.display();
}
