#include<bits/stdc++.h>
using namespace std;
const int N=100100;
bool p[N]={1,1};
int a[500],b[500],n,m,i,j,x;
int main() {
	for(i=2;i*i<N;++i) if(!p[i])
		for(j=i*i;j<N;j+=i) p[j]=1;
	cin>>n>>m;
	for(i=0;i<n;++i)
		for(j=0;j<m;++j)
		{
			int  k=0;
			for(cin>>x;p[x+k];++k);
			a[i]+=k;
			b[j]+=k;
		}
	cout<<min(*min_element(a,a+n),*min_element(b,b+m))<<endl;
}