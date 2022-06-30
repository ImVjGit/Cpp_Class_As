#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Paint
{
    int size;
    int time;

public:
    void setsize(int s)
    {
        this->size = s;
    }
    void settime(int t)
    {
        this->time = t;
    }
    int getsize()
    {
        return this->size;
    }
    int gettime()
    {
        return this->time;
    }

    Paint()
    {
        this->size = 00;
        this->time = 00;
    }

    Paint(int s, int t)
    {
        this->size = s;
        this->time = t;
    }

    virtual void Display()
    {
        cout << "\nsize of img  :" << this->size<<"k";
        cout << "\ntime : " << this->time;
    }

    virtual void algo()
    {
        cout << "\nUse Algorithm............";
    }
};

class PNG : public Paint
{
    char Transparent[10];

public:
    void setTransparent(const char *t)
    {
        strcpy(this->Transparent, t);
    }

    const char *getTransparent()
    {
        return this->Transparent;
    }

    PNG() : Paint()
    {
        strcpy(this->Transparent, "yes");
    }
    PNG(int s, int t, const char *tr) : Paint(s, t)
    {
        strcpy(this->Transparent, tr);
    }
    void Display()
    {
        Paint::Display();
        cout << "\nTransparent img :" << this->Transparent;
    }

    void algo()
    {
        cout << "\nUse Lossless Algorithm for saving image";
    }
};

class JPG : public Paint
{
    int imgId;

public:
    int getimgId()
    {
        return this->imgId;
    }
    void setimgId(int i)
    {
        this->imgId;
    }

    JPG() : Paint()
    {
        this->imgId = 0000;
    }

    JPG(int s, int t, int i) : Paint(s, t)
    {
        this->imgId = i;
    }
    void Display()
    {
        Paint::Display();
        cout << "\nImg Id :" << this->imgId;
    }

    void algo()
    {
        cout << "\nUse Lossy compression  Algorithm for saving image";
    }
};

class GIF : public Paint
{
    int Duration;

public:
    int getDuration()
    {
        return this->Duration;
    }
    void setDuration(int D)
    {
        this->Duration;
    }

    GIF() : Paint()
    {
        this->Duration = 00;
    }
    GIF(int s, int t, int d) : Paint(s, t)
    {
        this->Duration = d;
    }

    void Display()
    {
        Paint::Display();
        cout << "\nDuration :" << this->Duration<<" Second";
    }

    void algo()
    {
        cout << "\nUse LZW support compression Algorithm for saving image";
    }
};

int main()
{
    cout << "\n Default";
    Paint *P;
    Paint p1;
    P = &p1;
    P->Display();
    P->algo();
    cout << "\n\n";

    cout << "\nPNG";
    PNG pn1(26, 15052022, "yes");
    P = &pn1;
    P->Display();
    P->algo();
    cout << "\n\n";

    cout << "\nJPG";
    JPG j1(85, 10052022, 1010154);
    P = &j1;
    P->Display();
    P->algo();
    cout << "\n\n";
    cout << "\nGIF";
    GIF g1(45, 02052022, 5);// 02052022 :date 02 month 05 year 2022
    P = &g1;
    P->Display();
    P->algo();
    cout << "\n\n";
}