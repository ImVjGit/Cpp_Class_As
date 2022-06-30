#include <iostream>
#include <stdio.h>
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
    void setsalary(int a)
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
    int getsalary()
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
        return this->getsalary();
    }
}; // Class Emp End
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
        return this->getsalary()+this->incentive;
    }
};//Sales Manager Class end 

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
        return this->getsalary()+this->allowance;
    }
}; //Admin class end

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
        return this->getsalary()+this->commission;
    }
};//hr class end 

int main()
{
    employee * ep;
    employee e1(152,"virat",60000);
    ep = &e1;
    ep->display();
    cout<<"\ntotal Salary is : " <<ep->calsal();
    cout << "\n\n";
 
   
    Salesmanager s1(101, "Smram", 67000,458, 5);
    ep = &s1;
    ep->display();
    cout<<"\ntotal Salary is : " <<ep->calsal();
    cout << "\n\n";

    
    Admin a1(19, "AdminVani", 80000, 1502);
    ep = &a1 ;
    ep->display();
    cout<<"\ntotal Salary is : " <<ep->calsal();
    cout <<"\n\n";
    
    HR h2(17, "HrRavi", 73000, 1000);
    ep = &h2;
    ep->display();
    cout<<"\ntotal Salary is : " <<ep->calsal();
    cout << "\n\n";

    
}
