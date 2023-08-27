#include<bits/stdc++.h>
using namespace std;
string number[10005];
bool call(string a,string b)
{
    if(a.size()>b.size())
        return false;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>number[i];
        sort(number,number+n);
        bool flag=true;

        for(int i=0;i<=n-1;i++)
        {
            if(call(number[i],number[i+1]))
            {
                flag=false;
                break;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
