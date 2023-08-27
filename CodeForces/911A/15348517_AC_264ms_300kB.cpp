
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,Min=1e20,p,ans=1e20;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>t;
        if(t<Min)
        {
            Min=t;
            p=i;
            ans=1e20;
        }
        else if(t==Min)
        {
            ans=min(ans,i-p);
            p=i;
        }
    }
    cout<<ans;
}