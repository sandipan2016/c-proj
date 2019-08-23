#include<iostream>

using namespace std;

class TestArray
{
	public:
		
		int rows;
		
		TestArray()
		{
			rows = 0;
		}
		
		void accept()
		{
			cout<<" Enter number of rows in the array"<<endl;
			
			cin>>rows;
			
		}
		
				
		void compute()
		{
			int arr[rows][5];
			int i=0;
			int j=0;
			
			cout<< "Enter elements in 2d array"<<endl;
			
			for(j=0;j<rows;j++)
			{
				for(i=0;i<5;i++)
				{
					
					cin>>arr[j][i];
				}
			}
			
			cout<< "Enter elements in 2d array are "<<endl;
			
			for(j=0;j<rows;j++)
			{
				cout<<endl;
				for(i=0;i<5;i++)
				{
					
					cout << "arr["<<j<<"]["<<i<<"] ="<<arr[j][i];
				}
			}
				
		}
	
};

int main()
{
	TestArray t;
	t.accept();
	t.compute();
	
}

