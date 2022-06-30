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

    void AddElement()
    {
        cout << "\nsize of array is " << size<<" element \n";
        cout<<"\nnter element here :\n";
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

int main(int argc, char **argv)
{
    MyArray arr;
    arr.AddElement();
    arr.Display();
    arr.~MyArray();
    MyArray arr1(arr); // inbuld copyconstruter given by compiler
    arr1.AddElement();
    arr1.Display();
    arr1.~MyArray();
    return 0;
}