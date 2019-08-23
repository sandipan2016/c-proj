/*The static storage class instructs the compiler to keep a local variable in existence during 
the life-time of the program instead of creating and destroying it each time it comes into and
 goes out of scope. Therefore, making local variables static allows them to maintain their values
  between function calls.

The static modifier may also be applied to global variables. When this is done, it causes that
 variable's scope to be restricted to the file in which it is declared.

In C++, when static is used on a class data member, it causes only one copy of that member 
to be shared by all objects of its class. */




#include <iostream>
 
// Function declaration
void func(void);
 
static int count = 10;             /* Global variable */
 
main() {
   while(count--) {
      func();
   }
   
   return 0;
}

// Function definition
void func( void ) {
   static int i = 5; // local static variable
   i++;
   std::cout << "i is " << i ;
   std::cout << " and count is " << count << std::endl;
}


