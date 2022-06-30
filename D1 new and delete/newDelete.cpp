#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i, n;
    printf("enter the size of array: ");
    scanf("%d", &n);
    ptr = new int[n];
    for (i = 0; i < n; i++)
    {
        printf("\n enter the value of array %d :  ", i);
        scanf("%d", &ptr[i]);
    }
    printf("\n Display All Value :");
    for (i = 0; i < n; i++)
    {
        printf("\n ptr[%d] : %d", i, ptr[i]);
    }
    delete[] ptr;
}