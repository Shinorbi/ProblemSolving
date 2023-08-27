#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int>s;
    int t=0;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if (n==1)
            s.insert(m);
        else if (n==2)
            s.erase(m);
        else
        {
            set<int>::iterator it=s.find(m);
            if (it==s.end())
                cout<<"No"<<endl;
            else
                cout<< "Yes"<<endl;

        }
    }


}