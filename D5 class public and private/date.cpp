#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class date
{
    int day;
    int month;
    int year;

   public:
    void setday(int a )
    {
        day = a;

    }
    void setmonth(int a )
    {
        month = a;
    }
    void setyear(int a )
    {
        year = a;
    }



    int getday()
    {
        return day;
    }
    int getmonth()
    {
        return month;
    }
    int getyear()
    {
        return year;
    }
};

int main()
{
    date d1;
    d1.setday(25);
    d1.setmonth(05);
    d1.setyear(2022);
    printf("\n Date in day:month:year is %d : %d :%d \n ",d1.getday(),d1.getmonth(),d1.getyear());
}
