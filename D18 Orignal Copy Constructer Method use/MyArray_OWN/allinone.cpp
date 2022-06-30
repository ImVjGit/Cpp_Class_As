#include <iostream>
using namespace std;

class MyArray
{
    int size;
    int *parr;

public:
    MyArray()
    {
        cout << "\n Enter the size of array : ";
        cin >> size;
        parr = new int[size];
    }

    MyArray(int s)
    {
        size = s;
        parr = new int[s];
    }
    
    MyArray(MyArray &t)//copy construtor its use deep copy
    {

        this->size=t.size;
        this->parr=new int[size];
        for (int i = 0; i <t.size; i++)
        {
            parr[i]=t.parr[i];
        }
        
    }

    void AddElement()
    {
        cout << "\nsize of array is " << size;
        cout<<"\nEnter element here :\n";
        int i;
        for (i = 0; i < size; i++)
        {
            cin>>parr[i];
        }
    }

    void Display()
    {
        int i;
        for (i = 0; i < size; i++)
        {   
            cout << "\n i "<<"["<<i<<"]"<<":   "<< parr[i];
        }
    }

    ~MyArray()
    {
        delete[] parr;
        cout << "\n Memory Free ";
    }
};
//vaishali.firstbit@gmail.com
int main()
{
    MyArray arr;
    arr.AddElement();
    arr.Display();
    arr.~MyArray();
    MyArray arr1(arr); 
    arr1.AddElement();
    arr1.Display();
    arr1.~MyArray();
    return 0;
}