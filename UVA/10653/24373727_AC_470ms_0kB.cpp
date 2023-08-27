#include<bits/stdc++.h>
#define max 1001
using namespace std;
int cost[max][max];
int mat[max][max];
int color[max][max];
int x[4]={1,-1,0,0};
int y[4]={0,0,1,-1};
int m,n;
void bfs(int p,int l)
{
    int ux,uy,vx,vy,k;
    queue<int>q;
    q.push(p);
    q.push(l);
    color[p][l]=1;
    cost[p][l]=0;
    int r=0;
    while(!q.empty())
    {
        ux=q.front();
        q.pop();
        uy=q.front();
        q.pop();
        for(int k=0;k<4;k++)
        {
            vx = ux+x[k];
            vy = uy+y[k];
            if((vx>=0 && vx<=m)&&(vy>=0 && vy<=n) && mat[vx][vy]==0)
            {
                if(!color[vx][vy]&& !cost[vx][vy])
                {
                    color[vx][vy]=1;
                    q.push(vx);
                    q.push(vy);
                    cost[vx][vy]=cost[ux][uy]+1;

                }
            }
        }
    }
}
int main()
{
    int s,s1,e,e1,r;
    while(scanf("%d %d",&m,&n)&&m&&n){
    int row,a,data,b;
    cin>>row;
    memset(color,0,sizeof(color));
    memset(cost,0,sizeof(cost));
    memset(mat,0,sizeof(mat));
    for(int i=0;i<row;i++)
    {
        cin>>r>>data;
        for(int j=1;j<=data;j++)
        {
            cin>>b;
            mat[r][b]=1;
        }

    }
    cin>>s>>s1;
    bfs(s,s1);
    cin>>e>>e1;
    cout<<cost[e][e1]<<endl;

}
   return 0;

}

