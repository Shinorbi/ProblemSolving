#include<bits/stdc++.h>
using namespace std;
int main(){


    int n,ans,cnt;
    ans=0;
    cnt =0;

    cin>>n;
    int v[n+9];

    for(int i=0;i<n;i++)
        cin>>v[i];

    for(int i=0;i<n;i++)
    {

        cnt =0;
        int a = v[i];
        while(a != -1)
        {
            a = v[a-1];
            cnt++;
        }

        ans = max(ans,cnt);
    }


    cout<<ans+1;

    return 0;

}
