#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class time
{
    int hr;
    int min;
    int seconds;
    
    public:
    void sethr(int a )
    {
        hr = a;
    }
    void setmin(int a)
    {
        min =a ;
    }
    void setseconds(int a )
    {
        seconds = a;
    }

    int gethr()
    {
        return hr;
    }

    int getmin()
    {
        return min;
    }

    int getseconds()
    {
        return seconds;
    }


};

int main()
{
    time t1;
    t1.sethr(03);
    t1.setmin(25);
    t1.setseconds(40);
    printf("\n Time is  hr:min:Sec  %d:%d:%d ",t1.gethr(),t1.getmin(),t1.getseconds());
}
