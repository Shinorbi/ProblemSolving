#include<bits/stdc++.h>
using namespace std;
#define pii pair<long long,long long>
#define mp make_pair
#define pb push_back
#define N 1000010
#define F first
#define S second
#define ll long long
#define INF  0x3f3f3f
const ll MOD=1e9+7;
const ll MODE=1e5+7;
vector<pii>e[N];
vector<ll>v;
priority_queue<pii,vector<pii>,greater<pii> >pq;
vector<ll>dis;
vector<ll>dar;
ll n;
ll binexp(ll x,ll y,ll n)
{

     if(y==1)
        return x%n;


    else{
    ll temp=binexp(x,y/2,n);

    if(y%2==0)
    {
        return (temp*temp)%n;
    }
    else return ((x%n)*temp*temp)%n;
}
}
int main()
{
  ll x,y,n,z,p;
  int t;
  cin>>t;
  while(t--)
  {
      cin>>x>>y>>n;
      z=binexp(x,y,n);
      cout<<z<<endl;
  }
  int c;
  cin>>c;
  return 0;

}
