#include <iostream>
using namespace std;
void dfs(char a,char b,char c,int n)
{
	int i=1;
	if(n==1)
	{
		cout<<"step"<<i<<":move disk"<<n<<"from"<<a<<"to"<<c<<endl;
		i++;
	}
	else {
		dfs(a,c,b,n-1);
		cout<<"step"<<i<<":move disk"<<n<<"from"<<a<<"to"<<c<<endl;
		i++;
		dfs(b,a,c,n-1);
	}
 } 
 int main()
 {
 	int n;
 	cin>>n;
 	dfs('A','B','C',n);
 	
 }
