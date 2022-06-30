#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Vehicle
{
    char name[20];
    int number;
    int sit;
    int wheels;

public:
    void setname(const char *nm)
    {
        strcpy(this->name, nm);
    }
    void setnumber(int a)
    {
        this->number = a;
    }
    void setsit(int s)
    {
        this->sit = s;
    }
    void setwheels(int w)
    {
        this->wheels = w;
    }

    const char *getname()
    {
        return this->name;
    }

    int getnumber()
    {
        return this->number;
    }

    int getsit()
    {
        return this->sit;
    }

    int getwheels()
    {
        return this->wheels;
    }

    Vehicle()
    {
        strcpy(this->name, "Not Given");
        this->number = 0000;
        this->sit = 00;
        this->wheels = 00;
    }
    Vehicle(const char *nm, int n, int s, int w)
    {
        strcpy(this->name, nm);
        this->number = n;
        this->sit = s;
        this->wheels = w;
    }

    virtual void Display()
    {
        cout << "\nName :" << this->name;
        cout << "\nNumber:" << this->number;
        cout << "\nsit:" << this->sit;
        cout << "\nwheels:" << this->wheels;
    }
    virtual void brk()
    {
        cout << "\nBreak system";
    }

}; // Vehicle class end

class Car : public Vehicle
{
    int sitbelt;
    int airbag;
    int door;
    int ac;

public:
    void setsitbelt(int sb)
    {
        this->sitbelt = sb;
    }
    void setairbag(int ab)
    {
        this->airbag = ab;
    }
    void setdoor(int d)
    {
        this->door = d;
    }
    void setac(int ac)
    {
        this->ac;
    }

    int getsitbelt()
    {
        return this->sitbelt;
    }
    int getairbag()
    {
        return this->airbag;
    }
    int getdoor()
    {
        return this->door;
    }
    int getac()
    {
        return this->ac;
    }

    Car() : Vehicle()
    {
        this->ac = 00;
        this->airbag = 00;
        this->sitbelt = 00;
        this->door = 00;
    }

    Car(const char *nm, int n, int s, int w, int ac, int a, int ss, int d) : Vehicle(nm, n, s, w)
    {
        this->ac = ac;
        this->airbag = a;
        this->sitbelt = ss;
        this->door = d;
    }

    void brk()
    {
        cout << "\nCylinder Break system";
    }
    void Display()
    {
        Vehicle::Display();
        cout << "\nac :" << this->ac;
        cout << "\nairbag:" << this->airbag;
        cout << "\nsitbelt:" << this->sitbelt;
        cout << "\ndoor:" << this->door;
    }

}; // car class end

class Bike : public Vehicle
{
    int handle;
    int sideStand;

public:
    void sethandle(int h)
    {
        this->handle = h;
    }
    void setsideStand(int s)
    {
        this->sideStand = s;
    }
    int gethandle()
    {
        return this->handle;
    }
    int getsideStand()
    {
        return this->sideStand;
    }

    Bike() : Vehicle()
    {
        this->handle = 00;
        this->sideStand = 00;
    }

    Bike(const char *nm, int m, int n, int s, int h, int ss) : Vehicle(nm, m, n, s)
    {
        this->handle = h;
        this->sideStand = ss;
    }

    void brk()
    {
        cout << "\nDics Break system";
    }

    void Display()
    {
        Vehicle::Display();
        cout << "\nHandle: " << this->handle;
        cout << "\nsideStand: " << this->sideStand;
    }

}; // bike class end

class Bus : public Vehicle
{
    int womensit;
    int handicapped;

public:
    void setwomensit(int h)
    {
        this->womensit = h;
    }
    void sethandicapped(int s)
    {
        this->handicapped = s;
    }
    int getwomensit()
    {
        return this->womensit;
    }
    int gethandicapped()
    {
        return this->handicapped;
    }
    Bus() : Vehicle()
    {
        this->womensit = 00;
        this->handicapped = 00;
    }
    Bus(const char *nm, int m, int n, int s, int a, int b) : Vehicle(nm, m, n, s)
    {
        this->womensit = a;
        this->handicapped = b;
    }
    void brk()
    {
        cout << "\nAir Break system";
    }
    void Display()
    {
        Vehicle::Display();
        cout << "\nwomen sit :" << this->womensit;
        cout << "\nhandicapped sit : " << this->handicapped;
    }

}; // bus class end

int main()
{
    Vehicle *v;
    Vehicle v1;
    v = &v1;
    v->Display();
    v->brk();
    cout << "\n\n";
    cout << "Car :";

    Car c1("Swift", 1134, 4, 4, 1, 2, 4, 4);
    v = &c1;
    v->Display();
    v->brk();
    cout << "\n\n";
    cout << "\nBus";

    Bus b1("Shivneri", 4579, 60, 6, 5, 5);
    v = &b1;
    v->Display();
    v->brk();
    cout << "\n\n";

    cout << "\nBike";
    Bike b2("Honda", 4444, 2, 2, 1, 1);
    v = &b2;
    v->Display();
    v->brk();
    cout << "\n\n";
}
