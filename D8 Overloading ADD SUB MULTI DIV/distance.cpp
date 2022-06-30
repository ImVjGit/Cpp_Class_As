#include <iostream>
using namespace std;
class Distance
{
    int inch;
    int feet;

public:
    Distance()
    {
        this->feet = 0;
        this->inch = 0;
    }

    Distance(int x, int y)
    {
        this->feet = x;
        this->inch = y;
    }

    Distance(int x)
    {
        this->feet = x;
        this->inch = x;
    }

    void display()
    {
        cout << "\n Feet : " << feet;
        cout << "\n inch : " << inch;
    }
};

int main()
{
    Distance d1;
    Distance d2(5, 10);
    Distance d3(5);

    d1.display();
    d2.display();
    d3.display();
}
