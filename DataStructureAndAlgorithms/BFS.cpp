/* Input the number of nodes and the number of edges. The input the connected nodes.Then the root of the bfs
Example:
5 4
1 2
2 3
3 4
4 5
1
*/



#include<bits/stdc++.h>
using namespace std;

vector<int>graph[5001]; /* nodes should be numbered in the range of 1 to 5000 in this case */
int visited[5001];


void bfs(int current_node){
queue<int>q;
q.push(current_node);
while(!q.empty()){
    int x=q.front();
    visited[x]=1;
    q.pop();
    cout<<x<<" ";
    for(int i=0;i<graph[x].size();i++){
        if(visited[graph[x][i]]!=1){
            q.push(graph[x][i]);
        }
    }
}

}



int main(){

int nodes,edge;
cin>>nodes>>edge;
for(int i=0;i<edge;i++){
    int x,y;
    cin>>x>>y;
    graph[x].push_back(y);
    graph[y].push_back(x);
    /*these two lines is for undirected graph...
    for directed graph you should use only 'graph[x].push_back(y);' this statement*/
}
int root;
cin>>root;

cout<<"BFS result:\n"<<endl;
memset(visited,0,sizeof(visited)); /*initialize all the values of the visited array to zero */
bfs(root);
cout<<endl;

}
