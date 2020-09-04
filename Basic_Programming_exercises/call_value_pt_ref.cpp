#include<iostream>
using namespace std;
void value(int,int);
void ptr(int*,int*);
void ref(int &,int &);
int main()
{
	int x,a,b; char op;
	do
	{
	cout<<"1.Pass by value / 2.Pass by pointers /3.Pass by reference:";
	cin>>x;
	switch(x)
	{
		case 1: 
		cout<<"Enter two nos: ";
		cin>>a>>b;
		cout<<"Before Pass: a="<<a<<" b="<<b<<endl;
		value(a,b);
		cout<<"After Pass: a="<<a<<" b="<<b<<endl;
		break;
		
		case 2:
		cout<<"Enter two nos: ";
		cin>>a>>b;
		cout<<"Before Pass: a="<<a<<" b="<<b<<endl;
		ptr(&a,&b);
		cout<<"After Pass: a="<<a<<" b="<<b<<endl;
		break;
		
		case 3:
		cout<<"Enter two nos: ";
		cin>>a>>b;
		cout<<"Before Pass: a="<<a<<" b="<<b<<endl;
		ref(a,b);
		cout<<"After Pass: a="<<a<<" b="<<b<<endl;
		break;
	}
	cout <<"Whether continue(y/n):";
	cin>>op;
}while(op =='y');
}
void value(int x,int y)
{
	int t;
	t=x; x=y; y=t;
	cout <<"At pass: a="<<x<<" b="<<y<<endl;
}
void ptr(int*x,int*y)
{
	int t;
	t=*x; *x=*y; *y=t;
	cout <<"At pass: a="<<*x<<" b="<<*y<<endl;
}
void ref(int &x,int &y)
{
	int t;
	t=x; x=y; y=t;
	cout <<"At pass: a="<<x<<" b="<<y<<endl;
}
