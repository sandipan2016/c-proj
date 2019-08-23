#include<iostream>

using namespace std;

class Prime
{
	
	public:
		
       int a;	
	   int div=2;
	   
	   void compute()
	   {
	   	    int flg=0;
	   	
	   	    cout<< " Enter a number"<<endl;
	   	    cin >> a;
	   	    
	   	    for(;div<a;div++)
	   	    {
	   	    	if(a%div!=0)
	   	    		{
	   	    			continue;
		           }
		        else
		        {
		        	flg=1;
					break;
				}
	   	    	
			  }
			    if(flg==0)
			  		cout<<a<<"  is prime"<< endl;
				else
				   	cout<<a<<" is not prime"<<endl;
	   }
	   	
	   	
	   	
	   
};

int main()
{
	Prime p;
	p.compute();
	
}
