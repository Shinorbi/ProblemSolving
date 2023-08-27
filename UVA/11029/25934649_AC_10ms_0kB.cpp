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
ll binexp(ll x,ll y,ll n)
{
    if(y==0)return 1;

     if(y==1)
        return x%1000;


    else{
    ll temp=binexp(x,y/2,1000);

    if(y%2==0)
    {
        return (temp*temp)%1000;
    }
    else return ((x%n)*temp*temp)%1000;
}
}
int main()
{
  ll x,y,n;
  int t;
  cin>>t;
  while(t--)
  {
      cin>>x>>y;
      double p=y*(log10(x));
      p=p-(int)p;
      double z=pow(10, p
                   );
      z*=100;
      cout<<(int)z<<"...";


      printf("%03d\n",binexp(x,y,1000));



  }

  return 0;

}
