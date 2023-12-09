//Parameterized constructor.

#include<iostream>
using namespace std;

class Student
{
		int sid;
		string sname;
		string course;
		
		public : 
				Student(int id, string name, string co)  //para. constructor
				{
					sid=id;
					sname=name;
					course=co;
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
		Student S(101,"Virat","SE"); //Implicit call
		
		//Student S=Student(101, "Virat", "SE");  Explicit call
		
		S.printdata();
}

