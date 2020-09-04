#include<iostream>
using namespace std;
template<class T>
void swap(T *x,T*y)
{
	T temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	float w,z;
	char s,t;
		int x,y;
		cin>>x>>y;
	           swap(&x,&y);
cout<<x<<" "<<y<<endl;
			cin>>w>>z;
			swap(&w,&z);
cout<<w<<" "<<z<<endl;
		cin>>s>>t;
			swap(&s,&t);
			cout<<s<<" "<<t<<endl;

	return 0;
}
