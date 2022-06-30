#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct complex
{
    int real;
    int imaginary;

public:
    complex() // default constructor
    {
        cout << "\n given value is Default constructor";
        this->real = 0;
        this->imaginary = 0;
    }

    complex(int r, int i) // Parameters constructor
    {

        cout << "\n given value is Parameters constructor";
        this->real = r;
        this->imaginary = i;
    }
    void display()
    {
        cout << "\n"
             << real << "+" << imaginary << "i";
    }
};

int main()
{
    complex c1;
    complex c2(2, 5);
    c1.display();
    c2.display();
}
