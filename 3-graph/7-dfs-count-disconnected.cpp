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

int DFS(vector<int> adjList[], int v) {
    bool visited[v];
    int count = 0;

    for(int i = 0; i < v; i++)
        visited[i] = false;

    for(int i = 0; i < v; i++)
        if(visited[i] == false) {
            DFSRec(adjList, i, visited);
            count ++;
        }
    
    return count;
}

int main() {

    int v = 7;

    vector<int> adjList[v];

    addEdge(adjList, 0, 1);
    addEdge(adjList, 1, 2);

    addEdge(adjList, 3, 4);

    addEdge(adjList, 5, 6);
    
    int components = DFS(adjList, v);

    cout << endl << components;

    return 0;
}
