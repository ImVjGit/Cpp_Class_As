#include <iostream>
using namespace std;

class MyArray
{
    int size;
    int *parr;

public:
    MyArray()
    {
        cout << "\nEnter the size of array";
        cin >> size;
        parr = new int[size];
    }
    /////////////////////////////////////////////
    MyArray(int s)
    {
        size = s;
        parr = new int[size];
    }
    /////////////////////////////////////////////
    void AddElements()
    {
        cout << "\nEnter " << size << " elements";
        int i;
        for (i = 0; i < size; i++)
        {
            cin >> parr[i];
        }
    }
    /////////////////////////////////////////////
    void Display()
    {
        int i;
        for (i = 0; i < size; i++)
        {
            cout << "\t" << parr[i];
        }
    }
    ////////////////////////////////////////////
    ~MyArray()
    {
        // delete[] parr;
        cout << "\nFree the memory ";
    }
};

int main()
{
    MyArray arr;
    arr.AddElements();
    arr.Display();
    MyArray arr2(arr);
    arr2.Display();
    // return 0;
}