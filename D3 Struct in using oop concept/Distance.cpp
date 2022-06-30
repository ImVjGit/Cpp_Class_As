#include <stdio.h>
#include <string.h>

struct distance
{
    int feet;
    int inches;

    void storevalue()
    {
        printf("enter the feet :");
        scanf("%d", &feet);
        printf("enter the inches: ");
        scanf("%d", &inches);
    }
    void printvalue()
    {
        printf(" \nfeet  is : %d ", feet);
        printf(" \ninches is  :%d ", inches);
    }
};

int main()
{
    distance d1;
    d1.storevalue();
    d1.printvalue();
}
