#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct HR
{
    int id;
    char name[15];
    int salary;
    int commission;
};

void storedata(struct HR *);
void printdata(struct HR *);

int main()
{
    struct HR h1;
    storedata(&h1);
    printdata(&h1);
}
void storedata(struct HR *ptr)
{
    printf("\nid is : ");
    scanf("%d", &ptr->id);
    printf("\nname is : ");
    scanf("%s", ptr->name);
    printf("\nsalary is : ");
    scanf("%d", &ptr->salary);
    printf("\ncommission is : ");
    scanf("%d", &ptr->commission);
}

void printdata(struct HR *ptr)
{
    printf("\n id is : %d", ptr->id);
    printf("\n name  is : %s ", ptr->name);
    printf("\n salary is : %d", ptr->salary);
    printf("\n commission is : %d Percentage ", ptr->commission);
}