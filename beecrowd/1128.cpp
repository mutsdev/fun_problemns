#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>> &graph, vector<bool> &visited) {
    queue<int> fila;
    fila.push(start);
    visited[start] = true;

    while (!fila.empty()) {
        int current = fila.front();
        fila.pop();

        for (int i : graph[current]) {
            if (!visited[i]) {
                visited[i] = true;
                fila.push(i);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;

    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;

        vector<vector<int>> grafo(n);    
        vector<vector<int>> reverso(n);   

        int v, u, p;
        while (m--) {
            cin >> v >> u >> p;
            grafo[v - 1].push_back(u - 1); 
            reverso[u - 1].push_back(v - 1); 
            if (p == 2) {
                grafo[u - 1].push_back(v - 1);  
                reverso[v - 1].push_back(u - 1); 
            }
        }

        vector<bool> visitado_grafo(n, false);
        bfs(0, grafo, visitado_grafo);

        vector<bool> visitado_reverso(n, false);
        bfs(0, reverso, visitado_reverso);

        bool conectado = true;
        for (int i = 0; i < n; i++) {
            if (!visitado_grafo[i] || !visitado_reverso[i]) {
                conectado = false;
                break;
            }
        }

        if (conectado) {
            cout << 1 << "\n";
        } else {
            cout << 0 << "\n"; 
        }
    }

    return 0;
}
