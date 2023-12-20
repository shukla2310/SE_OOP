

#include<iostream>
#include<fstream>

using namespace std;

main()
{
	ofstream fout;
	fout.open("SecondFile.txt", ios::app);	
	fout<<"hello C++ programming world";
	fout.close();
	
	ifstream fin;
	string line;
	
	fin.open("SecondFile.txt");
	
	while(getline(fin, line))
	{
		cout<<line;
	}
	
	fin.close();
}


