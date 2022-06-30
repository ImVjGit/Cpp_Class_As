#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[20];
    
    void setroll(int a)
    {
        roll = a;
    }
    void setname(char* a )
    {
        strcpy(name,a);
    }

    int getroll()
    {
        return roll;
    }

    char* getname()
    {
        return name;
    }

};

int main()
{
    student s1;
    s1.setroll(23);
    s1.setname("rakesh");
    printf("roll number is : %d ",s1.getroll());
    printf("Name is : %s  ",s1.getname());
}
