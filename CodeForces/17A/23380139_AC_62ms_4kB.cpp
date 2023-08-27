#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
	if(n==2||n==3)return 1;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)return 0;
	}
	return 1;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[1000],j=0,m,p=0;
	for(int i=2;i<=n;i++)
	{
		if(prime(i)==1)a[j++]=i;
	}
	for(int i=0;i<j-1;i++)
	{
		m=a[i]+a[i+1]+1;
		if(m<=n&&prime(m))p++;
	}
	if(p>=k)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
