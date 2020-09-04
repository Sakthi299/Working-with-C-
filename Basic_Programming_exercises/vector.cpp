#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	vector <int>vec;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		vec.push_back(x);
		
	}
	sort(vec.begin()+3,vec.end());
		for(int i=0;i<n;i++)
	{
	cout<< vec[i]	<<" ";
	}
	
	return 0;
}
