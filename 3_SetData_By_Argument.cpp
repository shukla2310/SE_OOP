//To demostrate class & object. 

#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	int e_id;
	string ename;
	float salary;
	
	public :
			void setdata(int id, string name, float sal)
			{
				e_id=id;
				ename=name;
				salary=sal;
			}
			
			void printdata()
			{
				cout<<"\n\n\t Employee ID : "<<e_id;
				cout<<"\n\n\t Employee Name : "<<ename;
				cout<<"\n\n\t Salary : "<<salary;
			}
};

main()
{
	Employee E;
	int id;
	string name;
	float sal;
	
	cout<<"\n\n\t Employee ID : ";
	cin>>id;
	cout<<"\n\n\t Employee Name : ";
	cin>>name;
	cout<<"\n\n\t Salary : ";
	cin>>sal;
	
	E.setdata(id, name, sal);
	E.printdata();
	
}
