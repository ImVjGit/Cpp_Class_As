#include <iostream>
using namespace std;

class complex
{
    int real;
    int img;

public:
    void setreal(int r)
    {
        this->real = r;
    }
    void setimg(int i)
    {
        this->img = i;
    }

    int getreal()
    {
        return this->real;
    }
    int getimg()
    {
        return this->img;
    }
    complex()
    {
        this->real = 0;
        this->img = 0;
    }
    complex(int a, int b)
    {
        this->real = a;
        this->img = b;
    }

    complex sub(int a)
    {
        complex temp;
        temp.real = this->real - a;
        temp.img = this->img - a;
        return temp;
    }
    complex sub(complex c2)
    {
        complex temp;
        temp.real = this->real - c2.real;
        temp.img = this->img - c2.img;
        return temp;
    }

    void display()
    {
        cout << "\n " << real << " - " << img << "i";
    }
};

complex sub(int, complex);

int main()
{
    complex c1(10, 20);
    complex c2(5, 7);
    complex c3;
    complex c4, c5;
    c3 = c1.sub(c2);
    c4 = c1.sub(10);
    c5 = sub(20, c1);
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
}

complex sub(int a, complex c1)
{
    complex temp;
    int i, r;
    r = a - c1.getreal();
    i = a - c1.getimg();
    temp.setreal(r);
    temp.setimg(i);
    return temp;
}
