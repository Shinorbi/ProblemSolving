#include<bits/stdc++.h>
using namespace std;
vector<int> graph[100001];
int a[100001];

int n,m,ans=0;


void bfs(int root,int d, int cnt){
	if(a[d])
	    cnt++;
	else
        cnt=0;
	if(cnt>m)
        return ;

	if(graph[d].size()==1 && d!=1)ans++;
	for(int i;i<graph[d].size();i++)
	              if(graph[d][i]!=root)bfs(d,graph[d][i],cnt);
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<n;i++){
        int x,y;
	    cin>>x>>y;
	    graph[x].push_back(y);
	    graph[y].push_back(x);
}

bfs(0,1,0);
cout<<ans<<"\n";
}
