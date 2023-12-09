//Implicit Copy Constructor

#include<iostream>
using namespace std;

class Student
{
	int sid;
	string sname;
	string course;
	
	public : 
			void setdata(int id, string name, string co)
			{
				sid=id;
				sname=name;
				course=co;
			}
			
			void display()
			{
				cout<<"\n\n\t Id : "<<sid;
				cout<<"\n\n\t Student's name : "<<sname;
				cout<<"\n\n\t Course : "<<course;
			}
};

main()
{
	Student S1;
	S1.setdata(101, "raj","PHP");
	S1.display();
	
	Student S2(S1);
	S2.display();
}


