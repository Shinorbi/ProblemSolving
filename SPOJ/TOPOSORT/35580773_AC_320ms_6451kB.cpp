#include<bits/stdc++.h>
using namespace std;
int  indeg[10001];
vector<int>graph[10001];
vector<int>ans;

bool khan(int n){

    priority_queue<int, vector<int> , greater<int> >pq;
    for(int i=1;i<=n;i++)
        if(indeg[i] == 0)pq.push(i);


    while(!pq.empty()){

        int u = pq.top();
        pq.pop();
        ans.push_back(u);


        for(int i=0; i<graph[u].size();i++){
            int v = graph[u][i];
            indeg[v]--;
            if(indeg[v] == 0)
                pq.push(v);
        }

    }

    return ans.size()==n;
}

int main()
{
    int n,m, a,b;

    cin>>n>>m;
    for(int i=0; i<m;i++)
    {
        cin>>a>>b;
        graph[a].push_back(b);
        indeg[b]++;
    }

    if(!khan(n)){
        cout<<"Sandro fails."<<endl;
    }
    else{
        for(int i=0; i<ans.size();i++)
            cout<<ans[i]<<" ";
}

}
