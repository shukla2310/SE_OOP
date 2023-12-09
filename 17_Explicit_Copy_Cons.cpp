//Parameterized constructor.

#include<iostream>
using namespace std;

class Student
{
		int sid;
		string sname;
		string course;
		
		public : 
				Student() //default
				{
				}
				
				Student(int id, string name, string co)  //para. constructor
				{
					sid=id;
					sname=name;
					course=co;
				}
				
				Student(Student &S)  //copy constructor
				{
					sid=S.sid;
					sname=S.sname;
					course=S.course;
				}
				
				void printdata()
				{
					cout<<"\n\n\t Id : "<<sid;
					cout<<"\n\n\t Student's Name : "<<sname;
					cout<<"\n\n\t Course : "<<course;
				}
};

main()
{
		Student S1(101,"Virat","SE"); //Implicit call
		
		//Student S1=Student(101, "Virat", "SE");  Explicit call
		
		S1.printdata();
		
		Student S2;
		S2=S1;
		S2.printdata();
}

