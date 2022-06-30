#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct time
{
    int hr;
    int min;
    int seconds;
};

void storetime(struct time *);
void printtime(struct time *);

int main()
{
    struct time t1;
    storetime(&t1);
    printtime(&t1);
}
void storetime(struct time *ptr)
{
    printf("\n enter the hr :  ");
    scanf("%d", &ptr->hr);
    printf("\n enter the min :  ");
    scanf("%d", &ptr->min);
    printf("\n enter the seconds :  ");
    scanf("%d", &ptr->seconds);
}

void printtime(struct time *ptr)
{
    printf("\n the hr :  %d ", ptr->hr);
    printf("\n the min :  %d", ptr->min);
    printf("\n the seconds :  %d", ptr->seconds);
}