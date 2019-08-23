/*A C++ virtual function is a member function in the base class that you redefine in a derived class.
 It is declared using the virtual keyword.
It is used to tell the compiler to perform dynamic linkage or late binding on the function.

Rules of Virtual Function

1.Virtual functions must be members of some class.
2. Virtual functions cannot be static members.
3.They are accessed through object pointers.
4. They can be a friend of another class.
5. A virtual function must be defined in the base class, even though it is not used.
6.The prototypes of a virtual function of the base class and all the derived classes must be identical. 
If the two functions with the same name but different prototypes, C++ will consider them as 
the overloaded functions.
We cannot have a virtual constructor, but we can have a virtual destructor*/


#include <iostream> 


using namespace std;

class A   
{    
 public:    
 
 void display()  
 {    
  cout << "Base class is invoked"<<endl;    
 }    
};    
class B:public A    
{    
 public:    
 void display()    
 {    
  cout << "Derived Class is invoked"<<endl;    
 }    
};    
int main()    
{    
 A* a;    //pointer of base class    
 B b;     //object of derived class    
 a = &b;    
 a->display();   //Late Binding occurs    
}    
