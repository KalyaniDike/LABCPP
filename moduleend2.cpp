/*Student Database Management System
File handling has been effectively used for each feature of this project
Operation
1. Add Records
2. List Records
3. Modify Records
4. Delete Records
.*/

#include<iostream>
#include<fstream>
using namespace std;
class FH{
	string str,file;
	public:
		void create()
		{
			cout<<"Enter file name to create";
			cin>>file;
			ofstream obj(file+("txt"),ios::app);
			while(true)
			{
				getline(cin,str);
				if(str=="exit")
				break;
				obj<<str;
			}
			obj.close();
		}
		void read()
		{
			ifstream in(file+("txt"));
			while(getline(in,str))
			{
				cout<<"\n"<<str;
				in.close();
			}
		}
		
};