/* 3. Write a C++ program to create a class Student with data members Roll_No, 
Student_Name, Class. Write
member functions to accept and display Student information also display count of 
students. (Use Static data member and Static member function)*/


#include<iostream>
using namespace std;
class student{
	private:
		int rno;
		char name[20];
		static int count;
		public:
			void get(int rno,char name)
			{
				cout<<"Enter roll_no:";
				cin>>rno;
				cout<<"Enter name:";
				cin>>name;
				cout<<"Enter count";
				cin>>count;
			}
			static void_display()
			{
				//cout<<"\n roll_no"<<roll_no<<"\n std"<<std<<"\n name"<<name;//
				cout<<"\n count"<<count;
			}
};
int student::count;
int main()
{
	student s1;
	s1.void_display();
	student::void_display();
	//s1.accept(4,4);
	//s2.display();
	//static student::count();
	return 0;
	
}

