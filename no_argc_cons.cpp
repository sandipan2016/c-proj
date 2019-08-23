#include<iostream>

using namespace std;


class Child 
{

    public :
    	
    	
   	Child()       // default no -argument constructor is impilictly called 
    {
    
    	cout<<" in child constructor"<< endl;

	}
	  	  

	
	void disp()
	{
	  	cout << "hello "<<endl;
	  	
	}
	
	
};

int main()
{
	
	Child c;
	c.disp();
	
}
