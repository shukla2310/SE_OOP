/*
ofstream: Stream class to write on files 
ifstream: Stream class to read from files 
fstream: Stream class to both read and write from/to files. 

*/

#include <iostream>
#include <fstream>
 
using namespace std;

main()
{
	ofstream fout;
	
	string line; 
	
	// by default ios::out mode, automatically deletes
    // the content of file. To append the content, open in ios:app
    // fout.open("sample.txt", ios::app)
    fout.open("sample.txt");
    
    fout<<"hello world....";
    
    fout.close();
    
    ifstream fin;
    
    fin.open("sample.txt");
    
    while(getline(fin, line))
    {
    	cout<<line;
	}
    
    fin.close();
}
