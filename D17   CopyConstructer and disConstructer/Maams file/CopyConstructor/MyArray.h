#include<iostream>
using namespace std;

class MyArray
{
	int size;
	int *parr;
	public:
	 MyArray();
	 MyArray(int);
	 void AddElements();
	 void Display();
	 ~MyArray();
};
