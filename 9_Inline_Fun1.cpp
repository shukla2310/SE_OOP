//Inline function demostration

#include<iostream>
using namespace std;

class Math
{
	int n;
	
	public :
			inline int square()
			{
				return n*n;
			}	
			
			inline int cube();
			
			void getdata()
			{
				cout<<"\n\n\t Input a number : ";
				cin>>n;
			}
			
};

inline int Math :: cube()
{
	return n*n*n;
}

main()
{
	Math obj;
	int s, c;
	
	obj.getdata();
	s=obj.square();
	cout<<"\n\n\t Square  : "<<s;
	c=obj.cube();
	cout<<"\n\n\t Cube  : "<<c;
	
	
}


