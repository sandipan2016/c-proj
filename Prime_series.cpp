#include<iostream>
using namespace std;
class Prime
{
	public:
	int i,flag,arr[5];
	Prime()
	{
		i=0;
		flag=0;
	}
	void accept()
	{
		cout<<"Enter 5 numbers"<<endl;
		for(i=0;i<5;i++)
		{
			cin>>arr[i];
		}
	}
	void disp()
	{
		int j=0;
		for(i=0;i<5;i++)
		{
			flag=0;
			for(j=2;j<arr[i];j++)
			{
				if(arr[i]%j==0)
				flag++;
			}
			if(flag==0)
			cout<<"arr["<<i<<"] ="<<arr[i]<<" is prime"<<endl;
		}
	}
};
int main()
{
	Prime t;
	t.accept();
	t.disp();
}
