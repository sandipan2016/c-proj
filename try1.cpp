#include<iostream>

using namespace std;

class Test
{
	
   public :
   	
   	int res1;                        //  class variable has an object scope
		
	void compute()
	{
		
		int x = 10;                  //  have local scope 
		int y = 20;
		
		int res = 0;
		
		res = x*y;
	
		res1 = res;
	}
		
		
    void disp()
	{
		
	     	cout << " res = "<< res1;   // cout is used to print 	
	}	
	
	
};

 
int main()
{
	
	Test t;    // object t is created of test class
	t.compute();     // t object is used to call compute method.
	t.disp();
	
}


