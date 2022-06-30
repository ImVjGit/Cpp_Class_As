#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Lock
{
    int Sdisplay;

public:
    void setSdisplay(int s)
    {
        this->Sdisplay = s;
    }

    int getSdisplay()
    {
        return this->Sdisplay;
    }
    Lock()
    {
        this->Sdisplay = 00;
    }
    Lock(int s)
    {
        this->Sdisplay = s;
    }

    virtual void Display()
    {
        cout << "\nDisplay : " << this->Sdisplay<<" Resolution";
    }

    virtual void algo()
    {
        cout << "\nUse Algorithm To Encryption and Decryption ";
    }

}; // Lock class end

class Pin : public Lock
{
    int digit;

public:
    void setdigit(int d)
    {
        this->digit = d;
    }

    int getdigit()
    {
        return this->digit;
    }

    Pin() : Lock()
    {
        this->digit == 00000;
    }

    Pin(int s, int d) : Lock(s)
    {
        this->digit = d;
    }

    void Display()
    {
        Lock::Display();
        cout << "\n Digit is :" << this->digit;
    }
    void algo()
    {
        cout << "\nUse Iso-3 Pin Block Format To Encryption and Decryption the Digit";
    }

}; // Pin class end

class Face : public Lock
{
    int eyesDist;
    int noseDist;
    int lipsDist;
    int faceSize;

public:
    void seteyesDist(int e)
    {
        this->eyesDist = e;
    }
    void setnosedist(int n)
    {
        this->noseDist = n;
    }
    void setlipsDist(int li)
    {
        this->lipsDist = li;
    }

    void setfaceSize(int f)
    {
        this->faceSize = f;
    }

    int geteyesDist()
    {
        return this->eyesDist;
    }
    int getnoseDist()
    {
        return this->noseDist;
    }
    int getlipsDist()
    {
        return this->lipsDist;
    }
    int getfaceSize()
    {
        return this->faceSize;
    }

    Face() : Lock()
    {
        this->eyesDist = 00;
        this->noseDist = 00;
        this->lipsDist = 00;
        this->faceSize = 00;
    }
    Face(int d, int e, int n, int l, int f) : Lock(d)
    {
        this->eyesDist = e;
        this->noseDist = n;
        this->lipsDist = l;
        this->faceSize = f;
    }

    void Display()
    {
        Lock::Display();
        cout << "\nEye :" << this->eyesDist<<" Inch";
        cout << "\nNose :" << this->noseDist<<" Inch";
        cout << "\nLips : " << this->lipsDist<<" Inch";
        cout << "\nFace : " << this->faceSize<<" Inch";
    }
    void algo()
    {
        cout << "\nUse EATA algorithm To Encryption and Decryption ";
    }
}; // Face class end

class Pattern : public Lock
{
    int dot;

public:
    void setdot(int d)
    {
        this->dot = d;
    }
    int getdot()
    {
        return this->dot;
    }

    Pattern() : Lock()
    {
        this->dot = 000000;
    }

    Pattern(int d, int o) : Lock(d)
    {
        this->dot = o;
    }

    void Display()
    {
        Lock::Display();
        cout << "\ndot Number is: " << this->dot;
    }

    void algo()
    {
        cout << "\nUse SHA1 Hashing algorithm To Encryption and Decryption ";
    }

}; // Pattern class end

class FingerPrint : public Lock
{
    int finger;

public:
    void setfinger(int f)
    {
        this->finger = f;
    }

    int getfinger()
    {
        return this->finger;
    }

    FingerPrint() : Lock()
    {
        this->finger = 00;
    }
    FingerPrint(int d, int f) : Lock(d)
    {
        this->finger = f;
    }
    void Display()
    {
        Lock::Display();
        cout << "\n Finger Scan:  " << this->finger;
    }

    void algo()
    {
        cout << "\nUse Minutiae algorithm To Encryption and Decryption ";
    }
}; // FingerPrint class end

int main()
{
    cout << "\n Default";
    Lock *L;
    Lock l1;
    L = &l1;
    L->Display();
    L->algo();
    cout << "\n";

    cout << "\nPin";
    Pin p1(1048, 1234567);
    L = &p1;
    L->Display();
    L->algo();
    cout << "\n";

    cout << "\nPattern";
    Pattern pi1(1045, 6542318);
    L = &pi1;
    L->Display();
    L->algo();
    cout << "\n";

    cout << "\nFinger";
    FingerPrint f1(1028, 2);
    L = &f1;
    L->Display();
    L->algo();
    cout << "\n";

    cout << "\nFace";
    Face fa1(1028, 2, 2, 2, 7);
    L = &fa1;
    L->Display();
    L->algo();
    cout << "\n\n";
}
