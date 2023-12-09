//Default_Constructor

#include<iostream>
using namespace std;

class Math
{
	int n;
	
	public :
			Math()  //default constructor to initilaize class member.
			{
				n=3;	
			}	
			
			void square()
			{
				cout<<"\n\n\t Square : "<<n*n;
			}
			
			void cube()
			{
				cout<<"\n\n\t Cube : "<<n*n*n;
			}
};

main()
{
	Math M;
	M.square();
	M.cube();
}
