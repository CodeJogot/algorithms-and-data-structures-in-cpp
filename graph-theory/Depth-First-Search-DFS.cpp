#include<bits/stdc++.h>
using namespace std;
/*
1) graph[u][v]=1, if there is an edge between u and v.
2) color[x]=0 means the color of node x is WHITE and we haven't visited the node yet.
3) color[x]=1 means the color of node x is GRAY and this node is Discovered.
   that means we have just visited x, but we haven't visited all descendants of x.
4) color[x]=2 means the color of node x is BLACK and this node is Finished.
   that means we have visited all descendants of x.
5) t means time
6) discovery_time[x]=t1 means the time(t1) when node x is first processed.
7) finishing_time[x]=t1 means the time(t1) when the descendants of node x is finished.
*/
int graph[105][105];
int color[105];
int discovery_time[105];
int finishing_time[105];
int t=0;
int node;

void dfs(int u)
{
    color[u]=1;
    discovery_time[u]=++t;
    for(int v=1;v<=node;v++)
    {
        if(graph[u][v]&&color[v]==0)
            dfs(v);
    }
    color[u]=2;
    finishing_time[u]=++t;
}

int main()
{
    int i,j,k,edge,m,d,x,y;
    while(cin>>node>>edge)
    {
        memset(graph,0,sizeof(graph));
        memset(color,0,sizeof(color));
        t=0;
        for(i=1;i<=edge;i++)
        {
            cin>>x>>y;
            graph[x][y]=1;
        }
        dfs(1);
        for(i=1;i<=node;i++)
            printf("%d %d %d\n",i,discovery_time[i],finishing_time[i]);
    }
    return 0;
}
