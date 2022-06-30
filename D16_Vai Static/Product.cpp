#include <iostream>
#include <string.h>
using namespace std;

class Product
{
    int pid;
    char pname[20];
    float price;
    int quantity;
    static float discount;

public:
    void setpid(int i)
    {
        this->pid = i;
    }

    void setprice(float p)
    {
        this->price = p;
    }

    void setquantity(int q)
    {
        this->quantity = q;
    }

    void setpname(const char *pn)
    {
        strcpy(this->pname, pn);
    }

    static void setdiscount(float d)
    {
        discount = d;
    }
    int getpid()
    {
        return this->pid;
    }

    float getprice()
    {
        return this->price;
    }

    int getquantity()
    {
        return this->quantity;
    }

    const char *getpname()
    {
        return this->pname;
    }

    float getdiscount()
    {

        return discount;
    }

    Product()
    {
        this->pid = 00;
        this->price = 0.00;
        this->quantity = 0;
        strcpy(this->pname, "Not Given");
    }
    ~Product()
    {
        // Destructor
    }

    Product(int i, float p, int q, const char *nm)
    {
        this->pid = i;
        this->price = p;
        this->quantity = q;
        strcpy(this->pname, nm);
    }

    void Display()
    {
        cout << "\n";
        cout << "\n Product Id : " << this->pid;
        cout << "\n Name : " << this->pname;
        cout << "\n Quantity :" << this->quantity;
        cout << "\n Price :  " << this->price << ".00/-";
        cout << "\n Discount : " << this->discount << "%";
    }
};

float Product::discount = 10;

int main()
{
    Product p1(1, 602123, 2, "Iphone");
    p1.Display();

    cout << "\n";
    Product p2(5, 2500.00, 1, "TV");
    p2.Display();

    cout << "\n";
    Product p3(264, 75800.00, 1, "Washing M/C");
    p3.Display();

    cout << "\n";
    Product p4(25, 30000.00, 1, "Laptop");
    p4.Display();

    cout << "\n";
    Product p5(35, 59500.00, 1, "Ac");
    p5.Display();

    cout << "\n";
    Product p6(78, 45800.00, 1, "Fan");
    p6.Display();
}