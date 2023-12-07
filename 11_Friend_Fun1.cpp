//Friend Function

#include <iostream>
 
using namespace std;

class Math
{
	int n;
	
	friend int square(Math);
	
	public : 
			void getdata()
			{
				cout<<"\n\n\t n : ";
				cin>>n;
			}
			
			friend int cube(Math);
				
};

int square(Math m1)
{
	return m1.n*m1.n;	
}

int cube(Math m2)
{
	return m2.n*m2.n*m2.n;
}

main()
{
	Math M;
	M.getdata();
	cout<<"\n\n\t Square : "<<square(M);
	cout<<"\n\n\t Cube : "<<cube(M);
}
