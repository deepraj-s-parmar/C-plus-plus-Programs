#include <iostream>
#include <algorithm>
using namespace std;

class Edge {
public:
    int u, v, w;
};

int parent[100];

int find(int x) {

    if (parent[x] == x)
        return x;

    return parent[x] = find(parent[x]);
}

void unite(int a, int b) {

    int x = find(a);
    int y = find(b);

    parent[x] = y;
}

int main() {

    int vertices, edges;

    cin >> vertices >> edges;

    Edge e[100];

    for (int i = 0; i < edges; i++)
        cin >> e[i].u >> e[i].v >> e[i].w;

    sort(e, e + edges, [](Edge a, Edge b) {
        return a.w < b.w;
    });

    for (int i = 0; i < vertices; i++)
        parent[i] = i;

    int cost = 0;

    cout << "MST Edges:\n";

    for (int i = 0; i < edges; i++) {

        if (find(e[i].u) != find(e[i].v)) {

            unite(e[i].u, e[i].v);

            cout << e[i].u << " - "
                 << e[i].v << " : "
                 << e[i].w << endl;

            cost += e[i].w;
        }
    }

    cout << "Minimum Cost = " << cost;

    return 0;
}
