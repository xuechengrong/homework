#include <iostream>
using namespace std;
double zhouchang(int n)
{
	return 2*3.14*n;
}
double mianji(int n)
{
	return n*n*3.14;
}
int main()
{
	int n,d;
	double h,m;
	cin>>n;
	cout<<2*n;
	cout<<'\n';
	cout<<zhouchang(n);
	cout<<'\n';
	cout<<mianji(n);
	return 0;
}
