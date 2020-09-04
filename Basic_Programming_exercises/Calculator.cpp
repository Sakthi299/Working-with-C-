#include<iostream>
using namespace std;
class calculator
{
	int a,b;
	public:
		calculator()
		{
			cout<<"Constructor called.\n";
			a=0;b=0;
		}
		void get_details()
		{
			cout<<"Enter two numbers";
			cin>>a>>b;
		}
		void sum()
		{
	    	cout<<"Sum="<<a+b;
		}
		void diff()
		{
			cout<<"Difference="<<a-b;
		}
		void mul()
		{
			cout<<"Product="<<a*b;
		}
		void div()
		{
			cout<<"Quotient="<<a/b;
		}
};
int main()
{
	int ch;char op;
	calculator cal;
	cal.get_details();
	do
	{
	cout<<"Enter choice";
	cin>>ch;
	switch(ch)
	{
		case 1:cal.sum(); break;
		case 2:cal.diff(); break;
		case 3:cal.mul(); break;
		case 4:cal.div(); break;
	}	
		cout<<"Whether continue(y/n):";
		cin>>op;
}
while(op == 'y');
return 0;
}
