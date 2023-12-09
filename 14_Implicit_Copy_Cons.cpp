//Implicit Copy Constructor

#include<iostream>
using namespace std;

class Sum
{
	int n1, n2;
	
	public :
			
			Sum()
			{
				
			}
			
			Sum(int a, int b)
			{
				n1=a;
				n2=b;
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
	
	Sum S2;
	S2=S1;
	
	S2.display();
	
}
