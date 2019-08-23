#include<iostream>
using namespace std;
class Array
{
	public:
	char arr[6];
	char arr1[6];
	int i;
	int j;
	int flag;
	public:
	void accept();
	void reverse();
	void pallin();
};
void Array::accept()
{
	cout<<"Enter 5 characters"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
}
void Array::reverse()
{
	for(i=0,j=5;i<5&&j>=0;i++,j--)
	{
		arr1[j]=arr[i];
	}
}
void Array::pallin()
{
	
	for(i=0;i<5;i++)
	{
		if(arr1[i]==arr[i])
		{
				continue;
		}
		else
		{
			flag =1;
			break;
		}
	}
		if(flag==1)
		cout<<"Not pallindrome"<<endl;
		else
		cout<<"palindrome";
	
}
int main()
{
	Array t;
	t.accept();
	t.reverse();
	t.pallin();
}
