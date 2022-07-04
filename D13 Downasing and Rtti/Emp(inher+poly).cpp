/*#include <iostream>
#include <string.h>
using namespace std;
class employee
{
    int id;
    char name[20];
    double salary;

public:
    void setid(int a)
    {
        this->id = a;
    }
    void setname(const char *a)
    {
        strcpy(this->name, a);
    }
    void setsalary(double a)
    {
        this->salary = a;
    }

    int getid()
    {
        return this->id;
    }
    const char *getname()
    {
        return this->name;
    }
    double getsalary()
    {
        return this->salary;
    }

    employee()
    {

        this->id = 00;
        strcpy(this->name, "not given");
        this->salary = 000;
    }
    employee(int id, const char *nm, double salary)
    {

        this->id = id;
        strcpy(this->name, nm);
        this->salary = salary;
    }

    virtual void display()
    {
        cout << "\n name is : " << name;
        cout << "\n id is : " << id;
        cout << "\n salary is : " << salary;
    }

    virtual double calsal()
    {
       cout << "\n Totoal sal->" << getsalary() ;
    }

}; // Class Employee End
class Salesmanager : public employee
{

    double incentive;
    int target;

public:
    void setincentive(double i)
    {
        this->incentive = i;
    }

    void settarget(int t)
    {
        this->target = t;
    }

    double getincentive()
    {
        return this->incentive;
    }
    int gettarget()
    {
        return this->target;
    }

    Salesmanager() : employee()
    {

        this->incentive = 000;
        this->target = 00;
    }
    Salesmanager(int i, const char *nm, double salary, double in, int t) : employee(i, nm, salary)
    {

        this->incentive = in;
        this->target = t;
    }

    void display()
    {
        employee::display();
        cout << "\n incentive is : " << this->incentive;
        cout << "\n target is : " << this->target;
    }

    double calsal()
    {
        cout << "\n Totoal sal->" << getsalary() + getincentive();
    }
}; // Sales Manager Class end

class Admin : public employee
{

    double allowance;

public:
    void setallowance(double a)
    {
        this->allowance = a;
    }

    double getallowance()
    {
        return this->allowance;
    }

    Admin() : employee()
    {

        this->allowance = 00;
    }

    Admin(int i, const char *nm, double salary, double a) : employee(i, nm, salary)
    {

        this->allowance = a;
    }

    void display()
    {
        employee::display();
        cout << "\n allowance is : " << this->allowance;
    }
    double calsal()
    {
        cout << "\n Totoal sal->" << getsalary() + getallowance();
    }

}; // Admin class end

class HR : public employee
{

    int commission;

public:
    void setcommission(int c)
    {
        this->commission = c;
    }

    int getcommission()
    {
        return this->commission;
    }

    HR() : employee()
    {

        this->commission = 000;
    }

    HR(int i, const char *nm, double salary, int c) : employee(i, nm, salary)
    {

        this->commission = c;
    }

    void display()
    {
        employee::display();
        cout << "\n commission is : " << this->commission;
    }
    double calsal()
    {
        cout << "\n Totoal sal->" << getsalary() + getcommission();
    }

}; // hr class end
void allEmp(employee *);
int main() // Inheritacne Using pointer
{
    // employee * ep;
    // employee e1(152,"virat",60000);
    // ep = &e1;
    // ep->display();
    //  ep->calsal();
    // cout << "\n\n";

    // Salesmanager * sp;
    Salesmanager s1(101, "Smram", 67000, 55, 5);
    // sp = &s1;
    //  sp->display();
    // sp->calsal();
    allEmp(&s1);
    // cout << "\n\n";

    // Admin * ap;
    Admin a1(19, "AdminVani", 80000, 12);
    allEmp(&a1);
    // ap = &a1 ;
    // ap->display();
    // ap->calsal();
    // cout <<"\n\n";

    // HR * hp;
    HR h2(17, "HrRavi", 73000, 8);
    allEmp(&h2);
    // hp = &h2;
    // hp->display();
    // hp->calsal();
    // cout << "\n\n";
}

void allEmp(employee *ep)
{
    cout << "\n name: " << ep->getname();
    cout << "\n id : " << ep->getid();
    cout << "\n Salary: " << ep->getsalary();
    cout << "\n Total salary : " << ep->calsal();

    if (strcmp(typeid(*ep).name(), "class Salesmanager") == 0)
    {
        Salesmanager *sp = (Salesmanager *)ep;
        cout << "\n Incentive is : " << sp->getincentive();
    }

    if (strcmp(typeid(*ep).name(), "class Admin") == 0)
    {
        Admin *ap = (Admin *)ep;
        cout << "\n Allwonces : " << ap->getallowance();
    }

    if (strcmp(typeid(*ep).name(), "class HR") == 0)
    {
        HR *h = (HR *)ep;
        cout << "\n Commission : " << h->getcommission();
    }

    cout << "\n";
}

*/


#include<string.h>
#include<iostream>
using namespace std;

class Employee
{
	int id;
	char name[20];
	double salary;

public:
	Employee()
	{
		this->id = 0;
		strcpy(this->name, "Not mentioned");
		this->salary = 0;
	}

	Employee(int i, const char* nm, double sal)
	{
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

	virtual void display()
	{
		cout << "\n ID: " << this->id;
		cout << "\n Name: " << this->name;
		cout << "\n Salary: " << this->salary;
	}

	virtual double calsal()
	{
		return this->get_salary();
	}
};//class Emp ends shere

class Salesmanager : public Employee
{
	double incentive;
	int target;

public:
	Salesmanager() : Employee()
	{
		this->incentive = 111;
		this->target = 11;
	}
	Salesmanager(int i, char* nm, double sal, double in, int t) :Employee(i, nm, sal) //parameter initialisation list 
	{
		this->incentive = in;
		this->target = t;
	}
	void display()
	{
		Employee::display();
		cout << "\n Incenitve is : " << this->incentive;
		cout << "\n Target: " << this->target;
	}
	void setIncentive(double incentive)
	{
		this->incentive = incentive;
	}
	double getIncentive()
	{
		return this->incentive;
	}
	double calsal()
	{
		return	this->get_salary() + this->incentive;
	}
};// class SM ends here
class Admin :public Employee
{
	double allowance;
public:
	Admin() : Employee()
	{
		this->allowance = 22;
	}
	Admin(int i, char* nm, double sal, double a) :Employee(i, nm, sal)
	{
		this->allowance = a;
	}
	void setAllowance(double a)
	{
		this->allowance = a;
	}
	double getAllowance()
	{
		return this->allowance;
	}
	void display()
	{
		Employee::display();
		cout << "\n Allowance is " << this->allowance;
	}
	double calsal()
	{
		return this->get_salary() + this->allowance;
	}
};//class Admin ends here
class HR : public Employee
{

    int commission;

public:
    void setcommission(int c)
    {
        this->commission = c;
    }

    int getcommission()
    {
        return this->commission;
    }

    HR() : Employee()
    {

        this->commission = 000;
    }

    HR(int i,const char *nm, double sal, int c) :Employee(i, nm, sal)
    {

        this->commission = c;
    }

    void display()
    {
        Employee::display();
        cout << "\n commission is : " << this->commission;
    }
    double calsal()
	{
		return this->get_salary() + this->commission;
	}
   

}; // hr class end
void allEmpDetails(Employee* );
int main()
{

	Salesmanager s2(101,"Sachin",50000,555,55);
	allEmpDetails(&s2);
	cout << "\n";

	/*Admin a1(222,"Virat",60000,333);
	allEmpDetails(&a1);
	cout << "\n\n\n";

     HR h2(17, "HrRavi", 73000, 8);
     allEmpDetails(&h2);
     cout << "\n\n\n\n";
*/
} //main ends here

void allEmpDetails(Employee* ep)
{
	//cout << "\n Type is " << typeid(*ep).name();
	cout << "\n Name is " << ep->get_name();
	cout << "\n Calculated sal is " << ep->calsal();
	if (strcmp(typeid(*ep).name(), "class Salesmanager") == 0)
	{

		Salesmanager* sp = (Salesmanager*)ep;
		cout << "\n Incenitive is " << sp->getIncentive();
	}
/*	if (strcmp(typeid(*ep).name(), "class Admin") == 0)
	{

		Admin* ap = (Admin*)ep;
		cout << "\n Allowance is " << ap->getAllowance();
	}

    if (strcmp(typeid(*ep).name(), "class HR") == 0)
	{

		HR* h = (HR*)ep;
		cout << "\n commission is " <<h->getcommission();
	}
*/

}
