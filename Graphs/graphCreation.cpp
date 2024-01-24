#include <iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph {

public:
    unordered_map<int, list<int>> adjList; //adjacency list

    void addEdge(int u, int v, bool direction) {
        //direction = 0 ->undirected greaph , 1-> directed graph

        //create an edge from u to v
        adjList[u].push_back(v); //u -----> v

        if(direction == 0) //undirected hai
            adjList[v].push_back(u); // v ------->u
    }

    void printAdjList() {
        for(auto i:adjList) {
            cout << i.first << "--> ";
            for(auto  j:i.second) {
                cout << j <<", ";
            }
            cout << endl;
        }
    }

};

int main() {

    int n;
    cout << "Enter the number of nodes" <<endl;
    cin>>n;

    int m;
    cout<< "Enter the number of edges" <<endl;
    cin>>m;

    graph g;

    for(int i=0; i<m; i++) {
        int u, v;
        cin>>u>>v;
        //creating an undirected graph
        g.addEdge(u,v,0);
    }

    //printing graph
    g.printAdjList();


    return 0;
}