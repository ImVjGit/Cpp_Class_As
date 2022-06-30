#include <iostream>
using namespace std;
namespace India
{
    class emp
    {
    public:
        void display()
        {
            cout << "\nI am Employee of India";
        }
    };

    class manager
    {
    public:
        void display()
        {
            cout << "\nI am Manager of India";
        }
    };

    class coustomer
    {
    public:
    public:
        void display()
        {
            cout << "\nI am Coustomer of India";
        }
    };

    class product
    {
    public:
        void display()
        {
            cout << "\nI am Product of India";
        }
    };
}

namespace Usa
{
    class emp
    {
    public:
        void display()
        {
            cout << "\nI am Employee of USA";
        }
    };

    class manager
    {
    public:
        void display()
        {
            cout << "\nI am Manager of USA";
        }
    };

    class coustomer
    {
    public:
    public:
        void display()
        {
            cout << "\nI am Coustomer of USA";
        }
    };

    class product
    {
    public:
        void display()
        {
            cout << "\nI am Product of USAa";
        }
    };
}

namespace India
{
    class student
    {
    public:
        void display()
        {
            cout << "\nI am Student of india (who call 2nd India namespace ) ";
        }
    };
}

using namespace India;
int main()
{
    emp e1;
    e1.display();
    Usa::emp e2; // callling usa class using this syntax
    e2.display();
    student s1;
    s1.display();
}