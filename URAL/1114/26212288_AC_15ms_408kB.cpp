#include<bits/stdc++.h>
using namespace std;
#define pii pair<long long,long long>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define ll long long
int dp[22][18];
int main()
{
    dp[0][0]=1;
    for(int i=0;i<=15;i++)dp[1][i]=1;

    for(int i=2;i<=20;i++)
    {
        for(int j=0;j<=15;j++)
        {
            for(int k=0;k<=j;k++)
            {
                dp[i][j]+=dp[i-1][k];
            }
        }
    }

    int n,a,b;
    unsigned ll ans1=0,ans2=0;
    cin>>n>>a>>b;

    for(int i=0;i<=a;i++)ans1+=dp[n][i];
    for(int i=0;i<=b;i++)ans2+=dp[n][i];

    cout<<ans1*ans2<<endl;
    return 0;
}
