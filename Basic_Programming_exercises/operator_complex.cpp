#include<iostream>
using namespace std;
class complex
{	
float real,imag;
	public:
complex(float r,float m)
{
real=r;
imag=m;	
}
complex()
{

}
	void display()
	{
		if(imag<0)
		{
			cout<<"Complex number:"<<real<<imag<<"i";
		}
		else
		{
			cout<<"Complex number:"<<real<<"+"<<imag<<"i";			
		}
	}
	complex operator +(complex t)
	{
		complex c3;
		c3.real=real+t.real;
		c3.imag=imag+t.imag;
		return c3;
	}
	complex operator -(complex t)
	{
		complex c3;
		c3.real=real-t.real;
		c3.imag=imag-t.imag;
		return c3;
	}
		complex operator *(complex t)
	{
		complex c3;
		c3.real=(real*t.real)-(imag*t.imag);
		c3.imag=(imag*t.real)+(real*t.imag);
		return c3;
	}
		complex operator /(complex t)
	{
		complex c3;
		c3.real=((real*t.real)+(imag*t.imag))/((t.real*t.real)+(t.imag*t.imag));
		c3.imag=((imag*t.real)-(real*t.imag))/((t.real*t.real)+(t.imag*t.imag));
		return c3;
	}	
};
int main()
{
 float a,b,x,y;
 cout<<"Enter real and imag parts of first complex number: ";
 cin>>a>>b;
 cout<<"Enter real and imag parts of second complex number: ";
 cin>>x>>y;  
 complex c1(a,b);
 complex c2(x,y);
 complex c3;
	c3=c1+c2;
	c3.display();
	c3=c1-c2;
	c3.display();
	c3=c1*c2;
	c3.display();
	c3=c1/c2;
	c3.display();
	return 0;
}
