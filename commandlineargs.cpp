#include <iostream>
#include <string>
#include <sstream> // for std::stringstream
#include <cstdlib> // for exit()


int main(int argc,char *argv[])
{
	int i=1;
	int ctr=0;
	int tar[10];
	int j=0;
	int sum =0;
	
	if (argc <= 1)
	{
					// On some operating systems, argv[0] can end up as an empty string instead of 
					//   the program's name.
		if (argv[0])
			std::cout << "Usage: " << argv[0] << " <number>" << '\n';
		else
			std::cout << "Usage: <program name> <number>" << '\n';
 
		exit(1);
	}
 
    else
    {
    	for(j=0;ctr<argc;i++,j++)
		{
	    
    		tar[j] = atoi(argv[i]);
    		sum = sum + tar[j];
    		std::cout << "tar["<<j<<"] = "<< tar[j]<<std::endl;
    		std::cout<<" sum of argv= "<<sum;
    	}
    	
	}
 
 /*
 
	std::stringstream convert(argv[2],argv[1]); // set up a stringstream variable named convert, initialized with the input from argv[1]
 
	int myint;
	if (!(convert >> myint)) // do the conversion
		myint = 0; // if conversion fails, set myint to a default value
 
	std::cout << "Got integer: " << myint << '\n';
 
	return 0;*/
}
