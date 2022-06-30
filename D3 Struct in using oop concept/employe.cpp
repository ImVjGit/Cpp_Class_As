#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employee
{
    int id;
    char name[20];
    int salary;

    void storevalue()
    {
        printf("\nenter the employee id :  ");
        scanf("%d", &id);
        printf("Enter the employee name :  ");
        scanf("%s", name);
        printf("\nenter the employee salary :  ");
        scanf("%d", &salary);
    }

    void print()
    {
        printf("\n employee id :  %d ", id);
        printf("\n employee name : %s ", name);
        printf("\nemployee salary : %d ", salary);
    }
};

int main()
{
    employee e1;
    e1.storevalue();
    e1.print();
}
