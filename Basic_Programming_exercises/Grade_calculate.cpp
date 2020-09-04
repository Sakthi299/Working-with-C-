#include<iostream>
using namespace std;
class aadhar
{
	long int a_no;
	public:
		char name[10],dob[12],add[20];
		void getdetails()
		{
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter aadhar no: ";
			cin>>a_no;
			cout<<"Enter DOB: ";
			cin>>dob;
			cout<<"Enter address: ";
			cin>>add;
		}
		void display()
		{
			cout<<"Name :"<<name<<endl;
			cout<<"DOB: "<<dob<<endl;
			cout<<"Aadhar_Id: "<<a_no<<endl;
			cout<<"Address: "<<add<<endl;
		}
};
class student:public aadhar
{
	long int roll;
	public:
		float m[5],p[5],c[5];
		void getdetail()
		{ 
			cout<<"Enter roll.no: ";
			cin>>roll;
			cout<<"Enter marks in sub_1: ";
			cin>>m[0]>>m[1]>>m[2];
			cout<<"Enter marks in sub_2: ";
			cin>>p[0]>>p[1]>>p[2];
			cout<<"Enter marks in sub_3: ";
			cin>>c[0]>>c[1]>>c[2];
		}
		void total()
		{
			m[3]=(m[0]+m[1])/2+(m[2]/2);
		    p[3]=(p[0]+p[1])/2+(p[2]/2);
			c[3]=(c[0]+c[1])/2+(c[2]/2);
			cout<<"Total marks in Sub_1: ";
			cout<<m[3];
			cout<<"Total  marks in Sub_2: ";
			cout<<p[3];
			cout<<"Total marks in Sub_3: ";
			cout<<c[3];
		}
};
class internal:virtual  public student
{
	public:
		int zzz,yyy,xxx;
		void calc_int()
		{
		zzz=(m[0]+m[1])/2;
	    yyy=(p[0]+p[1])/2;
		xxx=(c[0]+c[1])/2;
			cout<<"******Internal Marks******"<<endl<<"Sub_1: "<<zzz<<endl<<"Sub_2: "<<yyy<<endl<<"Sub_3: "<<xxx<<endl; 
		}
};
class external:virtual  public student
{
	public:
		void calc_extn()
		{
			cout<<"*****External Marks******"<<endl<<"Sub_1: "<<m[2]/2<<endl<<"Sub_2: "<<p[2]/2<<endl<<"Sub_3: "<<c[3]/2<<endl;
		}
};
class result: public internal,public external
{
	public:
		int arr[3],grade[3],sum=0; float cgpa;char x;
		void final()
		{
			int credits[3];
			credits[0]=4;credits[1]=3;credits[2]=3;
			arr[0]=m[3];
			arr[1]=p[3];
			arr[2]=c[3];
			for(int i=0;i<3;i++)
			{
				if(arr[i]>=90)
				    grade[i]=10;
				else if(arr[i]>=80&&arr[i]<90)
				    grade[i]=9;
				else if(arr[i]>=70&&arr[i]<80)
				    grade[i]=8;
				else if(arr[i]>=60&&arr[i]<70)
				    grade[i]=7;
				else if(arr[i]>=50&&arr[i]<60)
				    grade[i]=6;
				else 
				    grade[i]=0;
			sum+=grade[i]*credits[i];	    
		    }
		    cgpa=sum/10.0;
		}
		void res()
		{
			if(cgpa>=9)
			  x='S';
			else if(cgpa>=8&&cgpa<9)
			 x='A';
			else if(cgpa>=7&&cgpa<8)
			 x='B';
			else if(cgpa>=6&&cgpa<7)
			 x='C';
			else if(cgpa>=5.5&&cgpa<6)
			 x='D';
			else if(cgpa>=5&&cgpa<5.4)
			 x='E';
			else
			 x='U';
		}
		void disp()
		{
			cout<<"Calculated Cgpa: "<<cgpa<<endl;
			cout<<"Result: "<<x<<endl;
			
		}
};

int main()
{
	student s;
	//internal in;
	//external ex;
	result r;
	s.getdetails();
	s.getdetail();
	s.display();
	s.total();
	r.calc_int();
	r.calc_extn();
	r.final();
	r.res();
    return 0;
}
