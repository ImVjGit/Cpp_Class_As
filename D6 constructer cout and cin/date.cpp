#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class date
{
    int day;
    int month;
    int year;

public:
    date() // default constructor
    {
        cout << "\n given value is Default constructor";
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    date(int d, int m, int y) // Parameters constructor
    {
        cout << "\n given value is Parameters constructor";
        this->day = d;
        this->month = m;
        this->year = y;
    }

    void display()
    {
        cout << "\n day is " << day;
        cout << "\n month is " << month;
        cout << "\n year is " << year;
    }
};

int main()
{
    date d1;
    date d2(03, 05, 2022);
    d1.display();
    d2.display();
}
