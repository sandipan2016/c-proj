#include<iostream>
using namespace std;
class Array
{
	public:
	char arr[6];
	int i;
	void accept();
	void disp();
};
void Array::accept()
{
	cout<<"Enter 5 characters"<<endl;
	for(i=1;i<=5;i++)
	{
		cin>>arr[i];
	}
}
void Array::disp()
{
	cout<<"The array is"<<endl;
	for(i=1;i<=5;i++)
	{
		cout<<"arr["<<i<<"] ="<<arr[i]<<endl;
	}
}
int main()
{
	Array t;
	t.accept();
	t.disp();
}
