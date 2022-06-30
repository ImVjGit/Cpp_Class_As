#include <iostream>
using namespace std;

class Array
{
    int *parr;
    int size;

public:
   
    Array()
    {
        cout << "\n enter the array size :";
        cin >> size;
        parr = new int[size];
    }
    Array(int s)
    {
        size = s;
        parr = new int[s];
    }
     
    Array(Array &t)//copy construtor its use deep copy
    {

        this->size=t.size;
        this->parr=new int[size];
        for (int i = 0; i <t.size; i++)
        {
            parr[i]=t.parr[i];
        }
        
    }
    void addelement()
    {
        cout << "\nyou have to enter "<<size<<" element : \n";
        int i;
        for (i = 0; i < size; i++)
        {
            cin >> parr[i];
        }
    }
    

    void display()
    {
        int i;
        for (i = 0; i < size; i++)
        {
            cout << "\t" << parr[i];
        }
    }
    ~Array()
    {
        delete[] parr;
    }
};

int main()
{
    Array a1;
    a1.addelement();
    a1.display(); 
    Array a2;
    a2.addelement();
    a2.display();
    
   
}