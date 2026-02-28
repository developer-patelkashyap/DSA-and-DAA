#include<iostream>
#include<vector>

using namespace std;

void addEdge(vector<int> adjList[], int u, int v) {
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void DFSRec(vector<int> adjList[], int start, bool visited[]) {
    visited[start] = true;

    cout << start << " ";

    for(int i = 0; i < adjList[start].size(); i++)
        if (visited[adjList[start][i]] == false)
            DFSRec(adjList, adjList[start][i], visited);
}

void DFS(vector<int> adjList[], int v, int start) {
    bool visited[v];

    for(int i = 0; i < v; i++)
        visited[i] = false;

    DFSRec(adjList, start, visited);
}

int main() {

    int v = 5;

    vector<int> adjList[v];

    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 4);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 1, 4);
    addEdge(adjList, 2, 3);
    addEdge(adjList, 3, 4);
    
    DFS(adjList, v, 0);

    return 0;
}
