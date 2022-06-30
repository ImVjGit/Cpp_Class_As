#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct admin
{
    int id;
    char name[15];
    int salary;
    int allownce;
    void printdata()
    {
        printf("\nadmin id is : %d", id);
        printf("\nadmin name  is : %s ", name);
        printf("\nsalary is : %d", salary);
        printf("\nallownce is : %d Percentage ", allownce);
    }
    void storedata()
    {
        printf("\nid is : ");
        scanf("%d", &id);
        printf("\nname is : ");
        scanf("%s", name);
        printf("\nsalary is : ");
        scanf("%d", &salary);
        printf("\nallownce is : ");
        scanf("%d", &allownce);
    }
};

int main()
{
    admin a1;
    a1.storedata();
    a1.printdata();
}
