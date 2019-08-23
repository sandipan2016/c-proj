#include <iostream>  
#include <iomanip>  
using namespace std;  
  
  
void compute();

class Test
{
	public:
		
	void disp(int x, int y)
		{
			int res=0;
			res = x+y;
			
			cout << "disp = "<< res;
			 
		}
};
 
int main(void)  
{    
    Test t;            //object declaration and creation statement

    int  a,b;  
    a = 200;  
    b = 300;  
   cout << setw (3) << a << setw (3) << b << endl;  
   cout << setw (5) << a << setw (5) << b << endl;  
   cout << setw (6) << a << setw (6) << b << endl;  
   cout << setw (7) << a << setw (7) << b << endl;  
   cout << setw (8) << a << setw (8) << b << endl; 
  
   t.disp(10,20);      //  function call with an object
   
}  



