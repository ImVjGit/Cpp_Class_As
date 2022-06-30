#include "MyArray.h"
////////////////////////////
MyArray::MyArray()
{
    cout << "\n Enter the size of array : ";
    cin >> size;
    parr = new int[size];
}
////////////////////////////
MyArray::MyArray(int s)
{
    size = s;
    parr = new int[s];
}
////////////////////////////
void MyArray::AddElement()
{
    cout << "\n enter " <<size<<"element " ;
    int i;
    for (i = 0; i < size; i++)
    {
        cin >> parr[i];
    }
}
////////////////////////////
void MyArray::Display()
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "\n" << parr[i];
    }
}
////////////////////////////
MyArray::~MyArray()
{
    delete[] parr;
    //cout<<"\n Memory Free ";
}