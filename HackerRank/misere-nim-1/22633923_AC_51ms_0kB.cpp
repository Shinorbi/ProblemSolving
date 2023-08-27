#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i,l=1;
    cin>>t;
    while (t--)
    {
        cin>>n;
        long x, k=0, m=0;
        for (i=0;i<n;i++)
        {
            cin>>x;
            if(x==1)
                m++;
            k^=x;

        }
        if(m!=n)
        {
            if(k!=0)
            cout<<"First"<<endl;

            else
                cout<<"Second"<<endl;
        }
        else{
            if(n%2==0)
            {
                cout<<"First"<<endl;
            }
            else
            {
                cout<<"Second"<<endl;
        }
            }
        }
    }

