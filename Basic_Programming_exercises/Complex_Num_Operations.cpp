#include<iostream>
using namespace std;
class complex
{
int real,imag;
	public:
complex(int r,int m)
{
real=r;
imag=m;
}
complex()
{
real=0;
imag=0;
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
		c3.imag=real+t.real;
		return c3;
	}
	complex operator -(complex t)
	{
		complex c3;
		c3.real=real-t.real;
		c3.imag=real-t.real;
		return c3;
	}
		complex operator *(complex t)
	{
		complex c3;
		c3.real=real*t.real;
		c3.imag=real*t.real;
		return c3;
	}
		complex operator /(complex t)
	{
		complex c3;
		c3.real=real/t.real;
		c3.imag=real/t.real;
		return c3;
	}
};
int main
{
complex c1(5,2);
complex c2(4,1);
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
