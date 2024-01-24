#include<iostream>
#include<unordered_map>
#include<queue>
#include<list>
#include<set> //sored way me ans chie kb use krte
using namespace std;
// babbar kcode me edges di thi lekin idhr to direct adj listdi hai
void prepareAdjList(unordered_map<int, list<int> > &adjList, vector<int, int>> &edges) {
    for(int i=0; i<edges.size(); i++ ) {
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v); //u pe v ki value dali connect kri
        adjList[v].push_back(u); //undirected
    }
}

void bfs(vector<vector<int>> &adj, unordered_map<int, bool> &visited, vector<int> &ans, int node) {

    queue<int>q;
    q.push(node);
    visited[node] = 1;

    while(!q.empty()) {
        int frontNode = q.front();
        q.pop();

        //store frontNode in ans
        ans.push_back(frontNode);

        //traverse all neighbours of frontNode
        for(auto i: adj[frontNode]) { //neighbours of front
            if(!visited[i])
                q.push(i);
                visited[i] = 1;
        }

    }
}


vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    //adjacency list
    //unordered_map<int, list<int> > adjList;

    vector<int> ans;

    unordered_map<int, bool> visited;

    //prepareAdjList(adjList, edges);

    //traverse all component of a grpah
    for(int i=0; i<n; i++ ) {
        if(!visited[i]) {
            bfs(adj, visited,ans,i);
        }
    }
    return ans;
}

//ye code waha chal nhi islie yha store kia