#include <stdio.h>
#include <string.h>
#include <stdlib.h>
class sales_manager
{
    int id;
    char name[15];
    int sale;
    int intensvie;
    int target;

public:
    void setid(int a)
    {
        id = a;
    }
    void setname(const char *a)
    {
        strcpy(name, a);
    }
    void setsale(int a)
    {
        sale = a;
    }
    void setintensive(int a)
    {
        intensvie = a;
    }
    void settarget(int a)
    {
        target = a;
    }

    int getid()
    {
        return id;
    }
    const char *getname()
    {
        return name;
    }
    int getsale()
    {
        return sale;
    }
    int getintensive()
    {
        return intensvie;
    }
    int gettarget()
    {
        return target;
    }
};

int main()
{
    sales_manager s1;
    s1.setid(20);
    s1.setname("vani");
    s1.setsale(42000);
    s1.setintensive(3000);
    s1.settarget(6);
    printf("\n id is : %d", s1.getid());
    printf("\n name  is : %s ", s1.getname());
    printf("\n salary is : %d", s1.getsale());
    printf("\n intensive is : %d ", s1.getintensive());
    printf("\ntarget is : %d", s1.gettarget());
}
