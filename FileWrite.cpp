/*fstream	It is used to create files, write information to files, and read information from files.
ifstream	It is used to read information from files.
ofstream	It is used to create files and write information to the files.*/

#include <iostream>  
#include <fstream>  

using namespace std;  
int main ()
 {  
  ofstream filestream("testout.txt");  
  if (filestream.is_open())  
  {  
    filestream << "Welcome to Hell.\n";  
    filestream << "Java Tutorial.\n";  
    filestream.close();  
  }  
  else cout <<"Failed to open file";  
  return 0;  
}  
