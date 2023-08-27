#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100000],n,i=0;
    while(cin>>n)
    {
        a[i]=n;
        sort(a,a+i+1);
        if (i%2==0)
            cout<<a[i/2]<<endl;
        else
            cout<<(a[i/2]+a[i/2+1])/2<<endl;
        i++;
    }
    return 0;
}

