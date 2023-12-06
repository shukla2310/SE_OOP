//Array iwthin the class.

#include<iostream>
using namespace std;

const int size=5;

class student
{	
	int roll_no;
	int marks[size];
	float per;

	public:
			void getdata();
			void tot_marks();
};

void student :: getdata()
{
		cout<<"\nEnter roll no: ";
		cin>>roll_no;
		
		for(int i=0; i<size; i++)
		{
			cout<<"Enter marks in subject"<<(i+1)<<": ";
			cin>>marks[i] ;
		}
}

void student :: tot_marks() //calculating total marks
{
	int total=0;

	for(int i=0; i<size; i++)
	{
			total+= marks[i];
	}
	per=total/size;
	cout<<"\n\nTotal marks "<<total;
	cout<<"\n\nTotal Per "<<per;
}

main()
{
	student S;
	S.getdata() ;
	S.tot_marks() ;
}


