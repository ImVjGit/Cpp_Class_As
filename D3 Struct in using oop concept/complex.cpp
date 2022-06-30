#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct complex
{
    int real;
    int imaginary;

    void storevalue()
    {
        printf("enter the real number : ");
        scanf("%d", &real);
        printf("enter the imaginary  number : ");
        scanf("%d", &imaginary);
    }

    void printfvalue()
    {
        printf("\naddition of both number is : %d + %d i ", real, imaginary);
    }
};

int main()
{
    complex c1;
    c1.storevalue();
    c1.printfvalue();
}
