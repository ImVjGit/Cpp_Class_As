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

    void storedata()
    {
        printf("\nid is : ");
        scanf("%d", &id);
        printf("\nname is : ");
        scanf("%s", name);
        printf("\nsales is : ");
        scanf("%d", &sale);
        printf("\nintensive is : ");
        scanf("%d", &intensvie);
        printf("\ntarget is : ");
        scanf("%d", &target);
    }
    void printdata()
    {
        printf("\nid is : %d", id);
        printf("\nname  is : %s ", name);
        printf("\nsales is : %d", sale);
        printf("\nintensive is : %d Percentage ", intensvie);
        printf("\ntarget is : %d", target);
    }
};

int main()
{
    sales_manager s1;
    s1.storedata();
    s1.printdata();
}
