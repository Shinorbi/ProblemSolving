#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>graph[10005];
int dis[10005];

void bfs(int x){


    memset(dis, -1, sizeof(dis));
    queue<int>q;
    q.push(x);
    dis[x]=0;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int i=0;i<graph[node].size();i++)
        {
            int v = graph[node][i];
            if(dis[v] == -1)
            {
                dis[v] = dis[node]+1;
                q.push(v);
            }
        }
    }




}

int main(){


    int n;

    cin>>n;

    for(int i=0;i<n-1;i++){
        int a,b;

        cin>>a>>b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    bfs(1);



     int ans =0, index;
     for(int i=1;i<=n;i++){
            if(ans < dis[i]){
                ans = dis[i];
                index =i;
            }
        }

      bfs(index);
      int res =0;
      for(int i=1;i<=n;i++){
            if(res < dis[i]){
                res = dis[i];

            }
        }





     cout<<res<<endl;




}
