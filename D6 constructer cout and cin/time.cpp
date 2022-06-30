#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class time
{
    int hr;
    int min;
    int seconds;

public:
    time() // default constructor
    {
        cout << "\n given value is Default constructor";
        this->hr = 00;
        this->min = 00;
        this->seconds = 00;
    }
    time(int h, int m, int s) // Parameters constructor
    {
        cout << "\n given value is Parameters constructor";
        this->hr = h;
        this->min = m;
        this->seconds = s;
    }

    void display()
    {
        cout << "\n  ";
        cout << hr << ":" << min << ":" << seconds;
    }
};

int main()
{
    time t1;
    time t2(12, 10, 42);
    t1.display();
    t2.display();
}
