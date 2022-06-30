#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Defence
{
    int budget;
    int emp;
    int headquarters;

public:
    void setbudget(int s)
    {
        this->budget = s;
    }
    void setemp(int e)
    {
        this->emp = e;
    }
    void setheadquarters(int h)
    {
        this->headquarters = h;
    }

    int getheadquarters()
    {
        return this->headquarters;
    }
    int getemp()
    {
        return this->emp;
    }
    int getbudget()
    {
        return this->budget;
    }

    Defence()
    {
        this->budget = 00;
        this->emp = 00;
        this->headquarters = 00;
    }

    Defence(int a, int b, int c)
    {
        this->budget = a;
        this->emp = b;
        this->headquarters = c;
    }

    virtual void Display()
    {
        cout << "\nbudget : " << this->budget;
        cout << "\nempolyee :  " << this->emp;
        cout << "\nHeadquarters: " << this->headquarters;
    }

    virtual void Attack()
    {
        cout << "\nAttack by diff way ";
    }
}; // Defence class end

class Navy : public Defence
{
    char port[20];
    int ships;

public:
    void setport(const char *p)
    {
        strcpy(this->port, p);
    }
    void setships(int s)
    {
        this->ships = s;
    }
    int getships()
    {
        return this->ships;
    }
    const char *getport()
    {
        return this->port;
    }
    Navy() : Defence()
    {

        strcpy(this->port, "Not Given");
        this->ships = 00;
    }

    Navy(int a, int b, int c, const char *nm, int s) : Defence(a, b, c)
    {
        strcpy(this->port, "nm");
        this->ships = s;
    }

    void Display()
    {
        Defence::Display();
        cout << "\nPort protect  " << this->port;
        cout << "\nnumber of ships : " << this->ships;
    }

    void Attack()
    {
        cout << "\nAttack by Sea ";
    }
}; // navy clas end

class Military : public Defence
{
    int Border;
    int arms;
    int guns;

public:
    void setBorder(int a)
    {
        this->Border = a;
    }
    void setarms(int b)
    {
        this->arms = b;
    }
    void setguns(int c)
    {
        this->guns = c;
    }
    int getBorder()
    {
        return this->Border;
    }
    int getarms()
    {
        return this->arms;
    }
    int getguns()
    {
        return this->guns;
    }
    Military() : Defence()
    {
        this->Border = 00;
        this->arms = 00;
        this->guns = 00;
    }
    Military(int a, int b, int c, int bb, int aa, int gg) : Defence(a, b, c)
    {
        this->Border = bb;
        this->arms = aa;
        this->guns = gg;
    }

    void Display()
    {
        Defence::Display();
        cout << "\nBorder protect  " << this->Border;
        cout << "\nnumber of arms : " << this->arms;
        cout << "\nnumber of guns : " << this->guns;
    }

    void Attack()
    {
        cout << "\nAttack by Arms ";
    }
}; // Military class end

class AirForce : public Defence
{
    int aircraft;
    int jet;
    int pilot;

public:
    void setaircraft(int ai)
    {
        this->aircraft = ai;
    }
    void setjet(int j)
    {
        this->jet = j;
    }
    void setpilot(int p)
    {
        this->pilot = p;
    }

    int getaircraft()
    {
        return this->aircraft;
    }
    int getjet()
    {
        return this->jet;
    }
    int getpilot()
    {
        return this->pilot;
    }

    AirForce() : Defence()
    {
        this->aircraft = 00;
        this->jet = 00;
        this->pilot = 00;
    }

    AirForce(int a, int b, int c, int ai, int j, int p) : Defence(a, b, c)
    {
        this->aircraft = ai;
        this->jet = j;
        this->pilot = p;
    }

    void Display()
    {
        Defence::Display();
        cout << "\nAircraft  " << this->aircraft;
        cout << "\nnumber of jet : " << this->jet;
        cout << "\nnumber of pilot : " << this->pilot;
    }

    void Attack()
    {
        cout << "\nAttack by air  ";
    }
}; // AirForce class end

int main()
{
    cout << "Default";
    Defence *D;
    Defence d1;
    D = &d1;
    D->Display();
    D->Attack();
    cout << "\n\n";
    cout << "\nAirForce";
    AirForce a1(82348723, 8345, 55, 598, 53, 120);
    D = &a1;
    D->Display();
    D->Attack();
    cout << "\n\n";
    cout << "\nNavy";
    Navy n1(12348723, 2345, 15, "Mumbai", 50);
    D = &n1;
    D->Display();
    D->Attack();
    cout << "\n\n";
    cout << "\nMilitary";
    Military m1(12348723, 2345, 15, 15, 5698754, 5556481);
    D = &m1;
    D->Display();
    D->Attack();
    cout << "\n\n";
}
