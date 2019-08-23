#include<iostream>


using namespace std;

class Test
{
		
	public:
		int x;
		int y;
	    int res = 0;	

    	void compute()
		{
			int res=0;
			
			cout<< "Enter a number"<< endl;
			cin >> x;
			cout <<" Enter another number"<<endl;
			cin >> y;
		
		    res = x*y;
			this->res=res;
			
			cout <<" Result = "<< res;	
			
		}
		
		
		void disp()
		{
			
			cout<< " res in disp = "<<res<<endl;
		}

			
		
};
int main()
{
		
	Test t;
	t.compute();
	t.disp();
	//cout<< " res in main = "<<t.res;
	
}
