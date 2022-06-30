#include <stdio.h>
#include <string.h>

struct distance
{
    int feet;
    int inches;
};

void storevalue(struct distance *);
void printvalue(struct distance *);

int main()
{
    struct distance d1;
    storevalue(&d1);
    printvalue(&d1);
}

void storevalue(struct distance *ptr)
{
    printf("enter the feet :");
    scanf("%d", &ptr->feet);
    printf("enter the inches: ");
    scanf("%d", &ptr->inches);
}
void printvalue(struct distance *ptr)
{
    printf(" \nfeet  is : %d ", ptr->feet);
    printf(" \ninches is  :%d ", ptr->inches);
}