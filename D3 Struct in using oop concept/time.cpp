#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct time
{
    int hr;
    int min;
    int seconds;
    void storetime()
    {
        printf("\n enter the hr :  ");
        scanf("%d", &hr);
        printf("\n enter the min :  ");
        scanf("%d", &min);
        printf("\n enter the seconds :  ");
        scanf("%d", &seconds);
    }

    void printtime()
    {
        printf("\n the hr :  %d ", hr);
        printf("\n the min :  %d", min);
        printf("\n the seconds :  %d", seconds);
    }
};

int main()
{
    time t1;
    t1.storetime();
    t1.printtime();
}
