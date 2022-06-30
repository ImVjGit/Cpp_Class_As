#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct admin
{
    int id ;
    char name[15];
    int salary;
    int allownce;
};

void storedata(struct admin*);
void printdata(struct admin*);

int main()
{
    struct admin a1;
    storedata(&a1);
    printdata(&a1);
}

void storedata(struct admin* ptr)
{
printf("\nid is : ");
scanf("%d",&ptr->id);
printf("\nname is : ");
scanf("%s",ptr->name);
printf("\nsalary is : ");
scanf("%d",&ptr->salary);
printf("\nallownce is : ");
scanf("%d",&ptr->allownce);
}

void printdata(struct admin*ptr)
{
printf("\nadmin id is : %d",ptr->id);
printf("\nadmin name  is : %s ",ptr->name);
printf("\nsalary is : %d",ptr->salary);
printf("\nallownce is : %d Percentage ",ptr->allownce);
}