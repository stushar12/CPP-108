int BFSdisconnected(vector<int>g[],int N)
{
    int count=0;
int visited[N];
for(int i=0;i<N;i++)
{
    visited[i]=-1;
}
for(int i=0;i<N;i++)
{
    if(visited[i]==-1)
    {
        bfs(g,i,visited);
        count++;
    }
}
return count;
}


void bfs(vector<int> g[], int N, int visited[] ) 
{
queue<int> q;
visited[0]=1;
q.push(0);

while(q.empty()==false)
{
    int z=q.front();
    q.pop();
    cout<<z<<" "
    for(int j:g[z])
    {
        if(visited[j]==-1)
        {
            visited[j]=1;
            q.push(j);
        }
    }
}
}