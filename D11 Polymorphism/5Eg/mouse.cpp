#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Mouse
{
    int click;

public:
    void setclick(int i)
    {
        this->click=i;
    } 

    int getclick()
    {
        return this->click;
    }

    Mouse()
    {
        this->click=0;
    }
    Mouse(int i)
    {
        this->click=i;
    }

    virtual void display()
    {
        cout<<"\n count :"<<this->click;
    }

    virtual void work()
    {
        cout<<"\nThier work Or Function  ";
    }
};

class Right :public Mouse
{
    int oneClick;
    int DoubleClick;
public:
    void setoneClick(int i)
    {
        this->oneClick=i;
    }
    void setDoubleClick(int d)
    {
        this->DoubleClick=d;
    }
    int getoneClick()
    {
        return this->oneClick;
    }
    int getDoubleClick()
    {
        return this->DoubleClick;
    }

    Right(): Mouse()
    {
        this->oneClick=00;
        this->DoubleClick=00;
    }

     Right(int c,int o,int d): Mouse(c)
    {
        this->oneClick=00;
        this->DoubleClick=00;
    }
     void display()
    {
         Mouse::display();
         cout<<"\n One click is :"<<this->oneClick;
         cout<<"\n Doubleclick is :"<<this->DoubleClick;
        
    }
    void work()
    {
        
        cout<<"\nSelect  ";
        cout<<"\nMove";
        
    }


};

class Left : public Mouse
{
    int oneClick;

public:
     void setoneClick(int i)
    {
        this->oneClick=i;
    }
     
     int getoneClick()
    {
        return this->oneClick;
    }
    Left(): Mouse()
    {
        this->oneClick=00;
       
    }
    
     Left(int c,int o): Mouse(c)
    {
        this->oneClick=o;
       
    }
     void display()
    {
        Mouse::display();
        cout<<"\n count :"<<this->oneClick;
         
    }
     void work()
    {
        
        cout<<"\nopen  ";
        cout<<"\npropertity";
        cout<<"\nNew File/Doc/EXE/Etc Create  ";
        cout<<"\nResfresh";
        
    }


};

int main()
{
    cout<<"\n";
    cout<<"\nDefault :";
    Mouse * M;
    Mouse m1;
    M=&m1;
    //M->display();
    M->work();

    cout<<"\n";
    cout<<"\nLeft Click: On Single Click ";
    Left L1(1,23);
    M=&L1;
   // M->display();
    M->work();
    
    cout<<"\n";
    cout<<"\nRight Click : One Single/Double Click ";
    Right R1(115,26,1235);
    M=&R1;
   // M->display();
   M->work();
    }
