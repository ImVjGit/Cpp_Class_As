#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct complex
{
    int real;
    int imaginary;
};

void storevalue(struct complex *);
void printfvalue(struct complex *);

int main()
{
    struct complex c1;
    storevalue(&c1);
    printfvalue(&c1);
}

void storevalue(struct complex *ptr)
{
    printf("enter the real number : ");
    scanf("%d", &ptr->real);
    printf("enter the imaginary  number : ");
    scanf("%d", &ptr->imaginary);
}

void printfvalue(struct complex *ptr)
{
    printf("\naddition of both number is : %d + %d i ", ptr->real, ptr->imaginary);
}