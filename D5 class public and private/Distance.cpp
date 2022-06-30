#include <stdio.h>
#include <string.h>

struct distance
{
    int feet;
    int inches;

   void setfeet(int a )
   {
       feet = a;
   }
   void setinches(int a)
   {
       inches = a; 
   }
   
   int getfeet()
   {
       return feet;
   }

   int  getinches()
   {
       return inches;
   }
};

int main()
{
    distance d1;
    d1.setfeet(25);
    d1.setinches(10);
    printf("\n feet is : %d ",d1.getfeet());
    printf("\n inches is : %d ",d1.getinches());
}
