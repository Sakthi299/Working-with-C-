#include<iostream>
using namespace std;
class verify
{
	int a;
	public:
		verify()
		{
			a=0;
		}
		void get_details()
		{
			cout<<"Enter number:";
			cin>>a;
		}
		void palin()
		{
		  int rev=0; int num;
		  num=a;
		  while(num!=0)
		  {
		  	rev=(rev*10)+(num%10);
		  	num=num/10;
		  }
		  if(rev == a)
		  {
		  	cout<<"It is a Palindrome.";
		  }
		  if(rev!= a)
		  {
		  	cout<<"It is not a Palindrome.";
		  }
		}
		void arms()
		{
		int num,r,sum=0;
		num=a;
		while(num!=0)
		{
		r=num%10;	
		sum+=r*r*r;
		num/=10;
		}	
		if(sum == a)
		{
			cout<<"It is armstrong number.";
		}
		if(sum!=a)
		{
			cout<<"It is not armstrong number.";
		}
		}
		void prime()
		{
		int i;
		bool isprime=true;
		for(i=2;i<=a/2;++i)
		{
		if(a%i==0)
		 {
		 	isprime=false;
		 	break;
		 }
		}	
		if(isprime==true)
		{
			cout<<"It is a Prime.";
		}
		else
		{
			cout<<"It is not prime.";
		}
		}
};
int main()
{
	int op;char x;
	verify sel;
	sel.get_details();
	do
	{
	cout<<"Enter choice:";
	cin>>op;
	switch(op)
	{
		case 1:sel.palin(); break;
		case 2:sel.arms(); break;
		case 3:sel.prime(); break;
	}
	cout<<"Whether continue(y/n):";
	cin>>x;
    }while(x == 'y');
}
