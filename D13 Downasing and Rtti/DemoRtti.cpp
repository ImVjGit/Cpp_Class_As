using namespace std;
#include<iostream>
#include<typeinfo>

class Base
{
    
    public:
    virtual void fun()
    {

    }
};

class Drivee : public Base
{

};
int main()
{
    Base bobj;
    Drivee dobj;
    Base *bptr;
    int w;

    bptr = &dobj;
    cout<<"\n check the : "<< typeid(w).name();
}