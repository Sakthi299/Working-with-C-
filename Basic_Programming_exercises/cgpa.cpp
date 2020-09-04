#include<iostream>
using namespace std;
class student
{
	int roll;
	string name;
public:
	student()
	{
	}
	void getdetails()
	{	cout<<"Enter student name and rollno:";
		cin>>name>>roll;	}
	void calculatecgpa()
	{ 
	int i,j,q,k;
	float credit[q];
	float point[q];
	cout<<"No.of subjects: ";
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cout<<"Enter credit for subject "<<i+1<<":";
		cin>>credit[i];
		cout<<"Enter point for subject "<<i+1<<":";
		cin>>point[i]; }
	float sum=0;	float total;
	for(j=0;j<q;j++)
	{
		total=credit[j]*point[j];
		sum=sum+total;
	}float totcr=0;
	for(k=0;k<q;k++)
	{	totcr=totcr+credit[k]; }
	cout<<"Name"<<name<<"RollNo"<<roll<<"Total points: "<<sum<<
	"Total credits: "<<totcr<<"Total cgpa: "<<sum/totcr;
}
};
int main()
{
	student stud;
	char op;
	do{
		stud.getdetails();
		stud.calculatecgpa();
		cout<<"Whether continue(y/n):";
		cin>>op;
	}while(op == 'y');
	return 0;
}
