#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct complex
{
    int real;
    int imaginary;

    void setreal(int a)
    {
        real = a;
        //this -> a;
    }
    void setimaginary(int a)
    {
        imaginary = a;
        //this -> imaginary = a ;
    }

    int getreal()
    {
        return real;
        
    }

    int getimaginary()
    {
        return imaginary;
    }
};

int main()
{
    complex c1;
    c1.setreal(4);
    c1.setimaginary(12);
    printf("\naddition of both number is : %d + %d i ", c1.getreal(), c1.getimaginary());
}
