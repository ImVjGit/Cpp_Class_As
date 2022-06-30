
#include <iostream>
using namespace std;
class printer
{
public:
    void print()
    {
        cout << "vijay\n";
    }

    void print(char a)
    {
        cout << a<<"\n";
    }

    void print(const char* p)
    {
        cout << p<<"\n";
    }

    void print(int v)
    {
        cout << v;
    }

    void print(float a)
     {
          cout << a;
     }
};

int main()
{
    printer p1;
    p1.print();
    p1.print('A');
    p1.print("First Bit solution");
    p1.print(123);
    p1.print(2.03);
}
