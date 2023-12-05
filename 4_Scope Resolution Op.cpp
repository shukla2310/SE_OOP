//To demostrate class & object. (Scope resolution op)

#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	int e_id;
	string ename;
	float salary;
	
	public :
			void setdata();
			void printdata();
};

void Employee :: setdata()
{
	cout<<"\n\n\t Employee ID : ";
	cin>>e_id;
	cout<<"\n\n\t Employee Name : ";
	cin>>ename;
	cout<<"\n\n\t Salary : ";
	cin>>salary;
}
			
void Employee :: printdata()
{
	cout<<"\n\n\t Employee ID : "<<e_id;
	cout<<"\n\n\t Employee Name : "<<ename;
	cout<<"\n\n\t Salary : "<<salary;
}


main()
{
	Employee E;
	E.setdata();
	E.printdata();
	
}
