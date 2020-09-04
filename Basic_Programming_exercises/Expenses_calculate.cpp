#include<iostream>
using namespace std;
class employee
{
	int emp_id;
	int b_pay;
	char name[10];
	public:
		static float sal;
		int bpay,da,hra,cca,tax;
		void calc_sal()
		{
		cout<<"Enter the name of the employee: ";
		cin>>name;
		cout<<"Enter the Employee Id: ";
		cin>>emp_id;
		cout<<"Enter basic pay of the employee: ";
		cin>>bpay;
		da=bpay*(10/100);
		hra=bpay*(5/100);
		cca=bpay*(20/100);
		tax=bpay*(25/100);
		sal=bpay+da+hra+cca-tax;	
		}
		void display()
		{
			cout<<"Name of the employee: "<<name;
			cout<<"Employee Id: "<<emp_id;
			cout<<"Salary of the employee: "<<sal;
		}
};
class elecbill:public employee
{
public:
int unit;float bill;
void calc_bill()
{
	cout<<"Enter units consumed: ";
	cin>>unit;
	if(unit<=100)
	{
		bill=1*unit;
	}
	else if(unit<=200&&unit>100)
	{
		bill=100+(unit-100)*2;
	}
	else if(unit<=500&&unit>200)
	{
	    bill=300+(unit-200)*3.75;					
	}
	else if(unit>500)
	{
	    bill=300+(300*3.75)+((unit-500)*5);	
	}
	sal=sal-bill;
	cout<<"The Total electricity bill is "<<bill;
    cout<<"Rem_Sal "<<sal;
}	
};
class grocery:public employee
{
public:
 float cost[10];char name[10][10];
 float amt=0.0;
 void calc_gross()	
 {
 	int n;
 	cout<<"Enter no.of purchased products: ";
 	cin>>n;
	 for(int i=0;i<n;i++)
	 {
	 	cout<<"Product Name: ";
	 	cin>>name[i];
	 	cout<<"Cost :";
	 	cin>>cost[i];
	 }
	for(int i=0;i<n;i++)
	{
		amt+=cost[i];
	}
	sal=sal-amt;
	cout<<"The Grocery Bill is "<<amt;
	cout<<"Rem_Sal "<<sal;
}
};
class mediexpenses:public employee
{
public:
 float medi;
 void disp()
 {
 	medi=5000;
 	sal=sal-medi;
	cout<<"The medical expenses: "<<medi;
    cout<<"Rem_Sal "<<sal; 
 }
};
float employee::sal=0;
int main()
{
	employee e;
	elecbill x;
	grocery y;
	mediexpenses z;
	e.calc_sal();
	e.display();
	x.calc_bill();
	y.calc_gross();
	z.disp();
	return 0;
}
