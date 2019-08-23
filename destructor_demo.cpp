#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()        // constructor
        {    
            cout<<"Constructor Invoked"<<endl;    
        }    
        ~Employee()       // desctrutor definition
        {    
            cout<<"Destructor Invoked"<<endl;    
        }  
};  
int main(void)   
{  
    Employee e1; //creating an object of Employee   
    Employee e2; //creating an object of Employee  
    return 0;  
}  
