#include<string.h>
#include<iostream>
using namespace std;

struct Employee
{
	int id;
	char name[20];
	double salary;

public:
	Employee()
	{
		cout << "\nEmp default constructor!";
		this->id = 0;
		strcpy(this->name, "Not mentioned");
		this->salary = 0;
	}

	Employee(int i, char* nm, double sal)
	{
		cout << "\nEMP parameterized constructor!";
		this->id = i;
		strcpy(this->name, nm);
		this->salary = sal;
	}

	void set_id(int eid)
	{
		this->id = eid;
	}
	void set_name(char* Name)
	{
		strcpy(this->name, Name);
	}
	void set_salary(int s)
	{
		this->salary = s;
	}

	int get_id()
	{
		return this->id;
	}
	char* get_name()
	{
		return this->name;
	}
	int get_salary()
	{
		return this->salary;
	}

	void display()
	{
		cout << "\n ID: " << this->id;
		cout << "\n Name: " << this->name;
		cout << "\n Salary: " << this->salary;
	}
};//class Emp ends shere

class Salesmanager : public Employee
{
	double incentive;
	int target;

public :
	Salesmanager() : Employee()
	{
		cout << "\nSM default constructor !";
	
		this->incentive = 111;
		this->target = 11;
	}
	Salesmanager(int i, char* nm, double sal, double in, int t)
		:Employee(i,nm,sal) //parameter initialisation list 
	{
		cout << "\nSM parameterized constructor!";
		this->incentive = in;
		this->target = t;
	}
	void display()
	{
		Employee::display();
		cout << "\n Incenitve is : " << this->incentive;
		cout << "\n Target: " << this->target;
	}
	double getIncentive()
	{
		return this->incentive;
	}
};// class SM ends here

int main()
{
	Salesmanager s1;
	s1.display();
	//cout << "\n";

	Salesmanager s2(101, "Sachin", 50000, 555, 55);
	s2.display();

	cout << "\n\n\n";
}