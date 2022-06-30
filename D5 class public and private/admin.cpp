#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class admin
{
    int id;
    char name[15];
    int salary;
    int allownce;

public:
    void setid(int a)
    {
        id = a;
        //this ->id =a;
    }
    void setname(const char *p)
    {
        strcpy(name, p);
        //this ->name = p;
    }
    void setsalary(int a)
    {
        salary = a;
        //this -> salary=a;
    }
    void setallownce(int a)
    {
        allownce = a;
        //this -> allownce = a
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

    int getallownce()
    {
        return allownce;
    }
};

int main()
{
    admin a1;
    a1.setid(100);
    a1.setname("ram");
    a1.setsalary(25000);
    a1.setallownce(2000);
    printf("\n the id : %d", a1.getid());
    printf("\n the name : %s", a1.getname());
    printf("\n the salary : %d", a1.getsalary());
    printf("\n the allownce : %d", a1.getallownce());
}
