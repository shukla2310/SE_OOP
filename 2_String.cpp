//To demostrate class & object. (String data type)

#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int s_id;
	string name;
	int marks;
	
	public :
			void getvalue()
			{
				s_id=101;
				name="Virat";
				marks=77;
			}
			
			void setvalue()
			{
				cout<<"\n\n\t S_id = "<<s_id;
				cout<<"\n\n\t Name : "<<name;
				cout<<"\n\n\t Marks : "<<marks;
			}
};

main()
{
	student sobj;
	sobj.getvalue();
	sobj.setvalue();
}
