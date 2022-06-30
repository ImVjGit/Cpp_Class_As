#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[20];
    void studentvalue()
    {
        printf("\n enter roll number is : ");
        scanf("%d", &roll);
        printf("\n enter name is : ");
        scanf("%s", name);
    }

    void studentprint()
    {
        printf("\n name is %s ", name);
        printf("\n roll number is %d", roll);
    }
};

int main()
{
    student s1;
    s1.studentvalue();
    s1.studentprint();
}
