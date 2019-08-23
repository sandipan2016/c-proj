#include<iostream>


using namespace std;


int main()
{
	char arr[6]={'a','b','c','d','e','\0'};
	int i =1;
	char inp = 'a';
	char inp1 = ' ';
	
	for(;i<5;i++)
	{
		cout << "arr[i]= "<< arr[i]<<endl;	
	}	
	
    cin>>inp;
	for(i=0;i<5;i++)
	{
		if(inp==arr[i])
		{
			cin>>inp1;
			arr[i]=inp1;
			
		}
	}
	
	
	for(i=0;i<5;i++)
	{
		cout << "arr[i]= "<< arr[i]<<endl;	
	}
	 	
	
	
}






