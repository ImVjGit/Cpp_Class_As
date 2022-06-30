#include <iostream>
using namespace std;

class MyArray
{
    int size;
    int *parr;

public:
    MyArray();    // Default const
    MyArray(int); // Para
    void AddElement();
    void Display();
    ~MyArray(); // Desconstr
};