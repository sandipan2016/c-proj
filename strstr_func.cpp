//The strstr() function in C++ finds the first occurrence of a substring in a string.

//The strstr() function takes two arguments: str and target. It searches for the first 
//occurrence of target in the string pointed to by str .The terminating null characters are ignored.

#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char str[] = "Use your brain and heart";
    char target[] = "heart";
    char *p = strstr(str, target);
    
    if (p)
        cout << "'" << target << "' is present in \"" << str << "\" at position " << p-str;
    else
        cout << target << " is not present \"" << str << "\"";

    return 0;
}
