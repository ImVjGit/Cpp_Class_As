#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct HR
{
    int id;
    char name[15];
    int salary;
    int commission;

    void storedata()
    {
        printf("\nid is : ");
        scanf("%d", &id);
        printf("\nname is : ");
        scanf("%s", name);
        printf("\nsalary is : ");
        scanf("%d", &salary);
        printf("\ncommission is : ");
        scanf("%d", &commission);
    }
    void printdata()
    {
        printf("\n id is : %d", id);
        printf("\n name  is : %s ", name);
        printf("\n salary is : %d", salary);
        printf("\n commission is : %d Percentage ", commission);
    }
};

int main()
{
    HR h1;
    h1.storedata();
    h1.printdata();
}
