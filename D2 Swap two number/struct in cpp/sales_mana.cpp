#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct sales_manager
{
    int id;
    char name[15];
    int sale;
    int intensvie;
    int target;
};

void storedata(struct sales_manager *);
void printdata(struct sales_manager *);

int main()
{
    struct sales_manager s1;
    storedata(&s1);
    printdata(&s1);
}

void storedata(struct sales_manager *ptr)
{
    printf("\nid is : ");
    scanf("%d", &ptr->id);
    printf("\nname is : ");
    scanf("%s", ptr->name);
    printf("\nsales is : ");
    scanf("%d", &ptr->sale);
    printf("\nintensive is : ");
    scanf("%d", &ptr->intensvie);
    printf("\ntarget is : ");
    scanf("%d", &ptr->target);
}
void printdata(struct sales_manager *ptr)
{
    printf("\nid is : %d", ptr->id);
    printf("\nname  is : %s ", ptr->name);
    printf("\nsales is : %d", ptr->sale);
    printf("\nintensive is : %d Percentage ", ptr->intensvie);
    printf("\ntarget is : %d", ptr->target);
}