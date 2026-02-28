#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void addEdge(vector<int> adjList[], int u, int v) {
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void BFS(vector<int> adjList[], int v) {
    bool visited[v];
    // vector<bool> visited(v, false);

    for(int i = 0; i < v; i++)
        visited[i] = false;

    queue<int> q;

    int start = 0;

    visited[start] = true;
    q.push(start);

    while(q.empty() == false) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for(int i = 0; i < adjList[node].size(); i++) {
            if (visited[adjList[node][i]] == false) {
                visited[adjList[node][i]] = true;
                q.push(adjList[node][i]);
            }
        }
    }
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
    
    BFS(adjList, v);

    return 0;
}
