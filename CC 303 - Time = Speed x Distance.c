#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int  adj[1005][1005],v[1005],dist[1005],queue[1005];
int n,m,p,q,t,f=0,r=-1;

void bfs(int s)
{
    if(s==q)
    {
        printf("0"); 
        return;
    }
    v[s]=1; 
    queue[++r]=s; 
    dist[s]=0;
    while(f<=r)
    {
        int x=queue[f++];
        for(int i=1;i<=n;i++)
        {
            if(adj[x][i]==1 && v[i]==0)
            {
                v[i]=1; 
                queue[++r]=i; 
                dist[i]=dist[x]+1;
                if(i==q)
                    break;
            }
        }
    }
    if(dist[q]==0)
        printf("-1");
    else 
        printf("%d",dist[q]*t);
}

int main()
{
    scanf("%d %d %d %d %d",&n,&m,&p,&q,&t);
    for(int i=0;i<m;i++)
    {
        int x,y; 
        scanf("%d%d",&x,&y);
        adj[x][y]=1;
        adj[y][x]=1;
    }
    bfs(p);
    
    return 0;
}
