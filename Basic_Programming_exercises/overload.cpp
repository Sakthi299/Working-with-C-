#include<iostream>
using namespace std;
class myclass
{
public:
	int a;
void func()
{
	a=1;
	cout<<a<<endl;
}
};
class mineclass: public myclass
{
	public:
		void func()
		{
			a=2;
			cout<<a<<endl;
		}
};
int main
{
	mineclass mc;
	myclass *ptr;
	//c.func();
	ptr=&mc;
	ptr->func();
}