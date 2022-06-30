#include <iostream>
#include <string.h>
using namespace std;

class Shirt
{
    int sid;
    char sname[20];
    float price;
    char size[10];
    static char type[20];

public:
    void setsid(int s)
    {
        this->sid = s;
    }
    void setsnamae(const char *nm)
    {
        strcpy(this->sname, nm);
    }
    void setprice(float p)
    {
        this->price = p;
    }
    void setsize(const char *s)
    {
        strcpy(this->size, s);
    }
    static void settype(const char *t)
    {
        strcpy(type, t);
    }

    int getid()
    {
        return this->sid;
    }
    const char *getname()
    {
        return this->sname;
    }
    float getprice()
    {
        return this->price;
    }
    const char *getsize()
    {
        return this->size;
    }
    const char *gettype()
    {
        return this->type;
    }

    Shirt()
    {
        this->sid = 00;
        strcpy(this->sname, "Not Given");
        strcpy(this->size, "Not Given");
        this->price = 00.00;
    }
    ~Shirt()
    {
        // Destructor
        cout << "\n Call Distructor \n ";
    }

    Shirt(int i, const char *sn, const char *size, float p)
    {
        this->sid = i;
        strcpy(this->sname, sn);
        strcpy(this->size, size);
        this->price = p;
    }

    void Display()
    {

        cout << "\n Id :" << this->sid;
        cout << "\n Name :" << this->sname;
        cout << "\n Size :" << this->size;
        cout << "\n Type : " << this->type;
        cout << "\n Price: " << this->price << ".00/-";
    }

    void Discount()
    {
        if (strcmp(size, "L") == 0)
        {
            int t;
            t = getprice() + (getprice() * 0.2);
            cout << "\n Size is Large so Price :" << t << ".00/-";
        }
        else
        {
            if (strcmp(size, "M") == 0)
            {
                int t;
                t = getprice() + (getprice() * 0.1);
                cout << "\n Size is Medium so Price :" << t << ".00/-";
            }
            else
            {
                if (strcmp(size, "XL") == 0)
                {
                    int t;
                    t = getprice() + (getprice() * 0.3);
                    cout << "\n Size is XL so Price :" << t << ".00/-";
                }
                else
                {
                    if (strcmp(size, "S") == 0)
                    {
                        int t;
                        t = getprice();
                        cout << "\nSize is Small so Price: " << t << ".00/-";
                    }
                    else
                    {
                        cout << "\nnot !!";
                    }
                }
            }
        }
    }
};

char Shirt::type[20] = "Cotton";

int main()
{

    Shirt s1(6, "Round", "S", 1000.00);
    s1.Display();
    s1.Discount();
    cout << "\n";
    Shirt s2(255, "T-shirt", "L", 1000.00);
    s2.Display();
    s2.Discount();
    cout << "\n";
    Shirt s3(265, "Polo", "M", 1000.00);
    s3.Display();
    s3.Discount();
    cout << "\n";
    Shirt s4(755, "Sport", "XL", 1000.00);
    s4.Display();
    s4.Discount();
    cout << "\n";
    Shirt s5(426, "Full-Party-Wear", "L", 1000.00);
    s5.Display();
    s5.Discount();
    cout << "\n";
    Shirt s6(426, "Round", "M", 1000.00);
    s6.Display();
    s6.Discount();
    cout << "\n";
}
