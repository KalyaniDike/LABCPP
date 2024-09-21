/*Q.No. 2
Write a program to print the area of two rectangles having sides (4,5) and (5,8)
 respectively by creating a
class named &#39;Rectangle&#39; with a function named &#39;Area&#39; which returns
 the area. Length*/


#include<iostream>
using namespace std;
class Rectangle{
	
	private:
		float length,breadth;
		public:
			float area(int length,int breadth)
			{
				this->length=length;
				this->breadth=breadth;
				cout<<"\n the area of Rectangle="<<length*breadth;
			} 
};
int main()
{
	Rectangle r1;
	Rectangle r2;
	r1.area(4,5);
	r2.area(5,8);
}

