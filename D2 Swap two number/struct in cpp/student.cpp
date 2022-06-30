#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[20];
};
void studentvalue(struct student *);
void studentprint(struct student *);
int main()
{
    struct student s1;
    studentvalue(&s1);
    studentprint(&s1);
}

void studentvalue(struct student *ptr)
{
    printf("\n enter roll number is : ");
    scanf("%d", &ptr->roll);
    printf("\n enter name is : ");
    scanf("%s", ptr->name);
}

void studentprint(struct student *ptr)
{
    printf("\n name is %s ", ptr->name);
    printf("\n roll number is %d", ptr->roll);
}
