#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employee
{
    int id;
    char name[20];
    int salary;

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

    int getid()
    {
        return id;
    }
    const char *getname()
    {
        return name;
    }
    int getsalary()
    {
        return salary;
    }
};

int main()
{
    employee e1;
    e1.setid(42);
    e1.setname("lokanika");
    e1.setsalary(40000);
    printf("\n id is : %d ", e1.getid());
    printf("\n name is : %s ", e1.getname());
    printf("\n salary is : %d ", e1.getsalary());
}
