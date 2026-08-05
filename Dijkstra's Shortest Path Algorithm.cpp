#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

int main() {
    int vertices, edges;
    cin >> vertices >> edges;

    vector<pair<int,int>> graph[100];

    for (int i = 0; i < edges; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    int source;
    cin >> source;

    vector<int> distance(vertices, INT_MAX);

    priority_queue<pair<int,int>, 
        vector<pair<int,int>>, 
        greater<pair<int,int>>> pq;

    distance[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {

        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto edge : graph[node]) {

            int nextNode = edge.first;
            int weight = edge.second;

            if (dist + weight < distance[nextNode]) {
                distance[nextNode] = dist + weight;
                pq.push({distance[nextNode], nextNode});
            }
        }
    }

    cout << "Shortest Distance:\n";

    for (int i = 0; i < vertices; i++)
        cout << i << " : " << distance[i] << endl;

    return 0;
}
