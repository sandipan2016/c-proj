//The strcmp() function in C++ compares two null terminating string. 
//The comparison is done lexicographically.


/*strcmp() Return value
The strcmp() function returns a:

positive value if the first differing character in lhs is greater than the corresponding character in rhs.
negative value if the first differing character in lhs is less than the corresponding character in rhs.
0? if hs and rhs are equal.*/

#include <cstring>
#include <iostream>

using namespace std;

void display(char *lhs, char *rhs, int result)
{
    if(result > 0)
        cout << rhs << " precedes " << lhs << endl;
    else if (result < 0)
        cout << lhs << " precedes " << rhs << endl;
    else
        cout << lhs << " and " << rhs << " are same" << endl;
}

int main()
{
    char lhs[] = "Armstrong";
    char rhs[] = "brmy";
    int result;

    result = strcmp(lhs,rhs);
    display(lhs,rhs,result);

    result = strcmp(lhs,lhs);
    display(lhs,lhs,result);

    return 0;
}

