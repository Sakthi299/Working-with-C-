#include<iostream>
using namespace std;
class banking
{
	int ac,bal;
	string name;
	public:
		banking()
		{
			bal=0;
		}
		void getdetails()
		{
			cout<<"Enter account no. and balance:";
			cin>>ac>>bal;
			cout<<"Enter account holder name:";
			cin>>name;
		}
		void deposit()
		{   int amt;
			cout<<"Enter amount to be deposited:";
			cin>>amt;
			cout<<"Amount deposited successfully";
			bal=bal+amt;
		}
		void withdraw()
		{   int amt;
			cout<<"Enter withdrawal amount:";
			cin>>amt;
			if(amt<=bal)
			{
				bal=bal-amt;
				cout<<"Amount withdrawed is "<<amt;
			}
			else
			{
			cout<<"Not sufficient balance.";	
			}
		}
		void display()
		{ cout <<"Account No"<<ac<<endl<<"AccountHolderName"<<name<<endl<<"Balance"<<bal<<endl;
		}
};
int main()
{
	char s;int op;
	banking bk;
	bk.getdetails();
	cout<<"1:To deposit\n2:To withdraw\n3:To display\n ";
	do
	{
	cout<<"Enter choice:";
	cin>>op;
	switch(op)
	{
		case 1:bk.deposit(); break;
		case 2:bk.withdraw(); break;
		case 3:bk.display(); break;
	}
	cout<<"CONTINUE(y/n):";
	cin>>s;
}while(s=='y');
return 0;
}
