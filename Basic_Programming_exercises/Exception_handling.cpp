#include<iostream>
using namespace std;
class account
{
	int x,s;string acno;;
	int count=0;
	int bal,amt;
	int op;
	  int bpay=500;
	char name[20];
	public:
		void getdetail()
		{
			cout<<"Enter name: ";
			cin>>name;
		/*	cout<<"Enter account no: ";
			cin>>
			try
			{
				int len=sizeof(acno)/sizeof(int);
				if(len<10)
				{throw(0);
				}
			}
			catch(int s)
			{
				cout<<"Enter account number of 10 digit."
			}*/
			a: 
			cout<<"Deposit amount: ";
			cin>>bal;
			try
			{
				
				if(bal>100000.000000)
				 {
				 	throw(x);
				 }
			}
			catch(int a)
			{
				cout<<"Exception encountered.Enter deposit amount less than 1,00,000.";
			goto a;
			}
		b:	
			cout<<"Enter withdrawal amount: ";
			cin>>amt;
			try
			{
				if((bal-amt)>bpay)
				{
					bal-=amt;
				}
				else if((bal-amt)<bpay)
				{
					throw(9);
				}
			}
			catch(int op)
			{
				cout<<"Exception encountered.Withdrawal limit exceeds.";
				goto b;
			}
		}
		void disp()
		{
			cout<<"Name: "<<name;
			//cout<<"Acc.No: "<<acno;
			cout<<"Balance: "<<bal;
		}
};
int main()
{
account a;
a.getdetail();
a.disp();	
return 0;
}
