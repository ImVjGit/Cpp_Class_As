#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;

    void storedate()
    {
        printf("\n enter the day :  ");
        scanf("%d", &day);
        printf("\n enter the month :  ");
        scanf("%d", &month);
        printf("\n enter the year :  ");
        scanf("%d", &year);
    }

    void printdate()
    {
        printf("\n the day :  %d ", day);
        printf("\n the month :  %d", month);
        printf("\n the year :  %d", year);
    }
};

int main()
{
    date d1;
    d1.storedate();
    d1.printdate();
}
