#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct HR
{
    int id;
    char name[15];
    int salary;
    int commission;
    void setid(int a)
    {
        id = a;
    }
    void setname(const char *a)
    {
        strcpy(name, a);
    }
    void setsalary(int a)
    {
        salary = a;
    }
    void setcommission(int a)
    {
        commission = a;
    }

    int getid()
    {
        return id;
    }
    const  char *getname()
    {
        return name;
    }
    int getsalary()
    {
        return salary;
    }
    int getcommission()
    {
        return commission;
    }
};

int main()
{
    HR h1;
    h1.setid(20);
    h1.setname("vani");
    h1.setsalary(42000);
    h1.setcommission(3000);
    printf("\n id is : %d", h1.getid());
    printf("\n name  is : %s ", h1.getname());
    printf("\n salary is : %d", h1.getsalary());
    printf("\n commission is : %d ", h1.getcommission());
}
