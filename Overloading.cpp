#include<iostream>

using namespace std;

class Child 
{

   public :
  
	int res;
	double res1;

	
    public :
    	
      Child(int,int);	
 	  
	  void compute(int,int);        // overloaded functions are when the function name is the same 
	  								// and function arguments vary 
	  void compute(int,int,int);   // in type, sequence or number of arguments 
	  							   // overloading is an example of static or compile time polymorphism
	  void compute(int,double);
	  void compute(double,int);
	  
	  
	  void disp();
	  void disp1();
	
	
};

 Child::Child(int x1, int y1)   // argument constructor
    {
    	   
		res = 0;
		res1 = 0.00;
		 
		    	
    	int sum = 0;
    	
    	sum = x1 + y1;
    	    	
    	cout <<"sum in child constructor = "<<sum<< endl;
    	
       	
	}


void Child::compute(int x, int y)   // here :: is the scope resolution operator
 {
 	
	  res = x*y;      	
	      	
 }	
 
 
 void Child::compute(int x, int y, int z)   // here :: is the scope resolution operator
 {
 	
	  res = x*y*z;      	
	      	
 }	
 
 void Child::compute(int x,double y)   // here :: is the scope resolution operator
 {
 	
	  res1 = x*y;      	
	      	
 }
 
 void Child::compute(double x, int y)   // here :: is the scope resolution operator
 {
 	
	  res1 = x*y;      	
	      	
 }
 void Child::disp()
	  {
	  	cout << "res = "<< res <<endl;
	  	
	  } 

void Child::disp1()
	  {
	  	cout << "res1 = "<< res1 <<endl;
	  	
	  } 
int main()
{
	
	Child c = Child(10,20); 
	c.compute(10,20);
	c.disp();
	c.compute(10,20,30);
	c.disp();
	c.compute(11,21.3);
	c.disp1();
	c.compute(11.2,31);
	c.disp1();
}
