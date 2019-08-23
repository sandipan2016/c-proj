/*  If a function is defined as a friend function in C++, then the protected and 
private data of a class can be accessed using the function.

Characteristics of a Friend function:

1. The function is not in the scope of the class to which it has been declared as a friend.
2. It cannot be called using the object as it is not in the scope of that class.
3. It can be invoked like a normal function without using the object.
4. It cannot access the member names directly and has to use an object name and dot membership
    operator with the member name.
5. It can be declared either in the private or the public part.    */

#include <iostream>    
using namespace std;    




class Box    
{    
    private:    
        int length;    
    public:    
        Box(): length(0) { }    
        friend int printLength(Box); //friend function    
};

    
int printLength(Box b)    
{    
   b.length += 10;    
    return b.length;    
}   

 
int main()    
{    
    Box b;    
    cout<<"Length of box: "<< printLength(b)<<endl;    
    return 0;    
}    
