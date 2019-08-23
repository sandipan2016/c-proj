/*Public Inheritance - When deriving a class from a public base class, public members of the 
base class become public members of the derived class and protected members of the base class
 become protected members of the derived class. A base class's private members are never accessible
  directly from a derived class, but can be accessed through calls to the public and protected members
   of the base class.

Protected Inheritance - When deriving from a protected base class, public and protected members of
 the base class become protected members of the derived class.

Private Inheritance - When deriving from a private base class, public and protected members of the
 base class become private members of the derived class.
 
 
A derived class inherits all base class methods with the following exceptions -

Constructors, destructors and copy constructors of the base class.
Overloaded operators of the base class.
The friend functions of the base class.*/

#include <iostream>
 
using namespace std;

// Base class Shape
class Shape 
{
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Base class PaintCost
class PaintCost {
   public:
      int getCost(int area) {
         return area * 70;
      }
};

// Derived class
class Rectangle: public Shape, public PaintCost {
   public:
      int getArea() {
         return (width * height); 
      }
};

int main(void) {
   Rectangle Rect;
   int area;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   area = Rect.getArea();
   
   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   // Print the total cost of painting
   cout << "Total paint cost: $" << Rect.getCost(area) << endl;

   return 0;
}

