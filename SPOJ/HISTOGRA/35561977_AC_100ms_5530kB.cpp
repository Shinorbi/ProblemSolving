#include<bits/stdc++.h>
using namespace std;

long long int solve(long long  area[], int t){
    stack<int>st;

    int node , i=0;

    long long int ans =0;
    while(i<t){

        if(st.empty() || area[st.top()] <= area[i]){
            st.push(i++);
        }

        else{
            node = st.top();
            st.pop();
            if(st.empty())
                ans = max(ans, (area[node] * i ));
            else
            ans = max(ans, (area[node] * ( i - st.top() - 1)));
        }
    }

    while(!st.empty()){
        node = st.top();
        st.pop();
        if(st.empty())
                ans = max(ans, (area[node] * i ));
            else
            ans = max(ans, (area[node] * ( i - st.top() - 1)));
    }






    return ans;



}

int main()
{
    long long int area[100000] , t ,j;

    cin>>t;

    while(t!=0)
    {
        for(j =0;j<t;j++)
            cin>>area[j];

        cout<<solve(area,t)<<endl;

        cin>>t;
    }




}
