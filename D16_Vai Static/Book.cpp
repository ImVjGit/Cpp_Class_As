#include <iostream>
#include <string.h>
using namespace std;

class Book
{
    int bid;
    char bname[20];
    int price;
    char Author[20];
    static int count;

public:
    void setbid(int b)
    {
        this->bid = b;
    }

    void setbname(const char *nm)
    {
        strcpy(this->bname, nm);
    }

    void setprice(int p)
    {
        this->price = p;
    }

    void setAuthor(const char *an)
    {
        strcpy(this->Author, an);
    }

    static void setcount(int c)
    {
        count = c;
    }
    // getter
    int getcount()
    {
        return this->count;
    }

    const char *getAuthor()
    {
        return this->Author;
    }
    const char *getbname()
    {
        return this->bname;
    }
    int getprice()
    {
        return this->price;
    }

    Book() // Constructor
    {
        strcpy(this->bname, " Not Given ");
        strcpy(this->Author, "Not Given");
        this->bid = 0;
        this->price = 00;
        count++;
    }
    ~Book() // Destructor
    {
    }

    Book(int id, int p, const char *bn, const char *an) // Para_Constructor
    {
        strcpy(this->bname, bn);
        strcpy(this->Author, an);
        this->bid = id;
        this->price = p;
        count++;
    }

    void display()
    {
        cout << "\n Count:  " << this->count;
        cout << "\n Book Name :  " << this->bname;
        cout << "\n Book Id :  " << this->bid;
        cout << "\n Author Name :  " << this->Author;
        cout << "\n Price :  " << this->price << ".00/-";
    }
};

int Book::count = 0;

int main()
{
    Book b1;
    b1.display();
    cout << "\n";
    Book b2(1, 250, "Math", "AP Jadhav");
    b2.display();
    cout << "\n";
    Book b3(23, 502, "English", "Pk Raman");
    b3.display();
    cout << "\n";
}