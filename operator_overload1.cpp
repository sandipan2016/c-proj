#include<iostream>

using namespace std;

class demo
{
	
	int x,y,z;
	public :
		void getdata(int a, int b, int c)
		{
			
			x=a;
			y=b;
			z=c;
						
		}
		
		void display();
		void operator -();
};

void demo :: display()
{
	cout << "X = "<<x<<"\nY = "<<y<<"\nZ =  "<<z<<endl;
}
 
void demo::operator -()
{
	x= -x;
	y =-y;
	z =-z;
}

int main()
{
	demo obj1;
	obj1.getdata(10,20,30);
	obj1.display();
	-obj1;                // this will call the overloading function
	obj1.display();
	return 0;
}
