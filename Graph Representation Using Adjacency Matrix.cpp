#include <iostream>
using namespace std;

int main() {

    int vertices, edges;

    cin >> vertices >> edges;

    int graph[10][10] = {0};

    for (int i = 0; i < edges; i++) {

        int u, v;
        cin >> u >> v;

        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    cout << "Adjacency Matrix:\n";

    for (int i = 0; i < vertices; i++) {

        for (int j = 0; j < vertices; j++)
            cout << graph[i][j] << " ";

        cout << endl;
    }

    return 0;
}
