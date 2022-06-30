#include "MyArray.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	MyArray arr;
	arr.AddElements();
	arr.Display();
	MyArray arr2(arr);
	arr2.Display();
	//return 0;
	
}
