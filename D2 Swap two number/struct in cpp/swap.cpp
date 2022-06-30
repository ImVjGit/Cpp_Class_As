#include<stdio.h>

void swap(int&,int&);
int main()
{
    int a=10;
    int b=20;
    printf("old value of \n  a = %d and b = %d ",a,b);
    swap(a,b);
    printf("new value of \n a = %d and b = %d ",a,b);
}

void swap(int& p, int& q)
{
int temp =0;
temp = p ;
p = q ;
q = temp;
}