#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;
};

void storedate(struct date *);
void printdate(struct date *);

int main()
{
    struct date d1;
    storedate(&d1);
    printdate(&d1);
}
void storedate(struct date *ptr)
{
    printf("\n enter the day :  ");
    scanf("%d", &ptr->day);
    printf("\n enter the month :  ");
    scanf("%d", &ptr->month);
    printf("\n enter the year :  ");
    scanf("%d", &ptr->year);
}

void printdate(struct date *ptr)
{
    printf("\n the day :  %d ", ptr->day);
    printf("\n the month :  %d", ptr->month);
    printf("\n the year :  %d", ptr->year);
}