#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void addEdge(vector<int> adjList[], int u, int v) {
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void BFSComponent(vector<int> adjList[], int start, bool visited[]) {
    queue<int> q;

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

void BFS(vector<int> adjList[], int v) {
    bool visited[v];

    for (int i = 0; i < v; i++)
        visited[i] = false;

    for (int i = 0; i < v; i++)
        if (visited[i] == false)
            BFSComponent(adjList, i, visited);
}

int main() {

    int v = 7;

    vector<int> adjList[v];

    addEdge(adjList, 0, 1);
    addEdge(adjList, 1, 2);

    addEdge(adjList, 3, 4);

    addEdge(adjList, 5, 6);
    
    BFS(adjList, v);

    return 0;
}
