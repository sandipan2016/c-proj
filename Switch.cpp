#include<iostream>

using namespace std;


class SwitchTest
{
	public :
	int choice=0;
	
	
	void compute()
	{
			
		cout<<" Main menu ..."<<endl;
		cout<<"1: Play Game"<<endl;
		cout<<"2: View Instructions "<<endl;
		cout<<"3: View score "<<endl;
		cout<<"4: Exit Game" <<endl;
		cout <<"Enter choice(1-4)"<<endl;
		
		cin>>choice;
		
		switch(choice)
		{
				case 1: cout<<"Play about to start"<<endl;
						break;
				case 2: cout <<"View instructions"<<endl;
						break;
				case 3: cout <<"View Score"<<endl;
						break;
				case 4: break;
				default: cout<<" Invalid choice!!";
		|
	
				
		}
			
	
	
	
};

int main()
{
	SwitchTest t;
	t.compute();
	
	
}
