#include<bits/stdc++.h>
using namespace std;
const int N=1e5+50;
char s[N];
int len,ans;
stack<char>st;
int main()
{
    scanf("%s",s);
    len=strlen(s);


    for(int i=0;i<len;i++){

        if(st.empty()||s[i]!=st.top())
            st.push(s[i]);

        else
            ans++,st.pop();
    }

    if(ans%2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;



    return 0;
}
