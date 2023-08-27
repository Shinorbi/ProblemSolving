#include<bits/stdc++.h>
using namespace std;
#define pii pair<long long,long long>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define ll long long
int power(vector<int> &v,int m)
{
    ll sum=0;
    for(int msk=1;msk<(1<<v.size());msk++)
    {
        int bits=0;
        ll lcm=1;
        for(int i=0;i<v.size();i++)
        {
            if(msk & (1<<i))
            {
                bits++;
                lcm=lcm*(v[i]/__gcd(lcm,(ll)v[i]));
            }
        }
        if(bits & 1)sum+=m/lcm;
        else
            sum-=m/lcm;
    }
    return sum;
}
int main()
{
    int n,m;
    while(cin>>m>>n)
    {
        vector<int>v(n);
        for(int &i:v)
            cin>>i;

        cout<<m-power(v,m)<<endl;;
    }
    return 0;
}
