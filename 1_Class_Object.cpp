//To demostrate class & object.

#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int s_id;
	char name[30];
	int marks;
	
	public :
			void getvalue()
			{
				c_id=101;
				strcpy(name,"Virat");
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
