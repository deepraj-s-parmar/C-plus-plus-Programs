#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> graph[100];
bool visited[100];

void dfs(int node, stack<int>& st) {

    visited[node] = true;

    for (int neighbour : graph[node]) {
        if (!visited[neighbour])
            dfs(neighbour, st);
    }

    st.push(node);
}

int main() {

    int vertices, edges;
    cin >> vertices >> edges;

    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
    }

    stack<int> st;

    for (int i = 0; i < vertices; i++) {
        if (!visited[i])
            dfs(i, st);
    }

    cout << "Topological Order: ";

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
