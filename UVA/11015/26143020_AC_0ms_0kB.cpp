#include<bits/stdc++.h>
using namespace std;
#define pii pair<long long,long long>
#define mop make_pair
#define pb push_back
#define N 200010
#define F first
#define S second
#define ll long long
#define INF 0x3f3f3f3f
map<int,string>mp;
string s;
int arr[232][232];
int main()
{
   int n,m,cs=1;
   while(1)
   {
       cin>>n>>m;

       if(n==0 && m==0)
        break;
       for(int i=1;i<=n;i++)
       {
           cin>>s;
           mp[i]=s;
       }

       for(int i=1;i<=m;i++)
       {
           int u,v,w;
           cin>>u>>v>>w;
           arr[u][v]=arr[v][u]=w;
       }
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=n;j++)
           {
               if(!arr[i][j])
                  arr[i][j]=INF;
       }
       }
      for(int i=1;i<=n;i++)
        arr[i][i]=0;

        for(int k=1;k<=n;k++)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
                }
            }
        }
        int p=INF;
        int ans=0;

        for(int i=1;i<=n;i++)
        {
            int sum=0;
            for(int j=1;j<=n;j++)
            {
                sum+=arr[i][j];
            }
            if(p>sum)
            {
                p=sum;
                ans=i;
            }
            

        }

         cout<<"Case #"<<cs++<<" : "<<mp[ans]<<endl;

        }
}
