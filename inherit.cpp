#include<iostream>
using namespace std;
class Parent
{
	public:
	int x,y,res,z;
	void accept();
	void compute();
	void disp();
};
void Parent::accept()
{
	cout<<"Enter 2 nos."<<endl;
	cin>>x;
	cin>>y;
}
void Parent::compute()
{
	res=0;
	res=x+y;
}
void Parent::disp()
{
	cout<<res;
}
class Child:Parent
{
	public:
	void accept();
	void compute();
	void disp();
};
void Child::accept()
{
	cout<<"Enter 2 nos. in Child class"<<endl;
	cin>>y;
	cin>>z;
}
void Child::compute()
{
	res=0;
	res=y*z;
}
void Child::disp()
{
	cout<<res;
}
main()
{
	Child t;
	t.accept();
	t.compute();
	t.disp();
}
