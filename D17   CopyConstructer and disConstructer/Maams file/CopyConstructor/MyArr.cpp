#include"MyArray.h"
/////////////////////////////////////////////
MyArray::MyArray()
{
	cout<<"\nEnter the size of array";
	cin>>size;
	parr = new int[size];
}
/////////////////////////////////////////////
MyArray :: MyArray(int s)
{
	size=s;
	parr = new int[size];
}
/////////////////////////////////////////////
void MyArray::AddElements()
{
	cout<<"\nEnter "<<size<<" elements";
	int i;
	for(i=0;i<size;i++)
	{
		cin>>parr[i];
	}
}
/////////////////////////////////////////////
void MyArray::Display()
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<"\t"<<parr[i];
	}
}
////////////////////////////////////////////
MyArray::~MyArray()
{
	delete []parr;
}
