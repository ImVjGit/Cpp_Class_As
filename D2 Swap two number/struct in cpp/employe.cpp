#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct employee
{
    int id ;
    char name[20];
    int salary;
};

void storevalue(struct employee*);
void print(struct employee*);

int main()
{
    struct employee e1;
    storevalue(&e1);
    print(&e1);
}

void storevalue(struct employee* ptr)
{
    printf("\nenter the employee id :  ");
    scanf("%d",&ptr->id);
    printf("Enter the employee name :  ");
    scanf("%s",ptr->name);
    printf("\nenter the employee salary :  ");
    scanf("%d",&ptr->salary);
}

void print(struct employee* ptr)
{
    printf("\n employee id :  %d ",ptr->id);
    printf("\n employee name : %s ",ptr->name);
    printf("\nemployee salary : %d ",ptr->salary);
}