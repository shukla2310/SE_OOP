//Explicit Copy Constructor.

#include<iostream>
using namespace std;

class Sum
{
	int n1, n2;
	
	public :
		
			Sum() //default constructor for 
			{
				
			}
			
			Sum(int a, int b) //parameterized
			{
				n1=a;
				n2=b;
			}
			
			Sum(Sum &S) //copy constructor
			{
				n1=S.n1;
				n2=S.n2;	
			}
			
			void display()
			{
				cout<<"\n\n\t Addition : "<<n1+n2;
			}	
};

main()
{
	Sum S1(10,20);
	S1.display();
	
	//Sum S2(S1);
	
	Sum S2; //call default
	S2=S1;
	
	S2.display();
	
}
