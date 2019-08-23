
#include<iostream>

// constructors help create objects of a class
// constructors must be defined with the same name as a class.
// constructors donot have a RETURN TYPE
// constructors are used to intitialize the class variables.
// base most constructor is fired first
// destructors fire in the reverse direction to that of a constructor.
// destructors cannot be inherited.
// destructors are used to de-allocate space from memory 

using namespace std;

class Parent
{
	public :
		
		int y;
	
		Parent()
		{
			y=10;
			cout<<" in parent constructor"<< endl;
		}
	
	
};

class Child : Parent
{

	int res;
	int x;     // class scope 
	
    public :
    	
      Child(int,int);	
 	  
	  void compute();
	  
	  void disp();

	
	
};

 Child::Child(int x1, int y1)   // argument constructor
    {
    	x=20;
    	
    	int sum = 0;
    	
    	sum = x1 + y1;
    	    	
    	cout <<"sum in child constructor = "<<sum<< endl;
    	
       	
	}


void Child::compute()   // here :: is the scope resolution operator
 {
	        	
	    res = x*y;      	
	      	
 }	
 
 void Child::disp()
	  {
	  	cout << "res = "<< res <<endl;
	  	
	  } 

int main()
{
	
	Child c = Child(10,20); 
	c.compute();
	c.disp();
	
}
