#include <bits/stdc++.h>
using namespace std;

int tamanho_grafo = 13;
vector<vector<int>> grafo(tamanho_grafo);
vector<bool> visitados(tamanho_grafo, false);

void adj(int base, int saida){
    grafo[base-1].emplace_back(saida-1);
}

void DFS(int base=0){
    visitados[base] = 1;
    vector<int> conexoes;
    for(auto i: grafo[base]){
        conexoes.emplace_back(i);
        if (!visitados[i]){
            DFS(i);
        }
    }
    cout << "O no " << base << " tem conexao com: ";
    for (int i: conexoes){
        cout << i << " ";
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    adj(1, 2); adj(1, 3); adj(1, 4); adj(1, 8);
    adj(2, 1); adj(2, 7);
    adj(3, 1); adj(3, 4); adj(3, 5);adj(3, 7);
    adj(4, 1); adj(4, 3); adj(4, 6);
    adj(5, 3); adj(5, 6);
    adj(6, 4); adj(6, 5);
    adj(7, 2); adj(7, 3);
    adj(8, 1); adj(8, 9);
    adj(9, 8); adj(9, 10);
    adj(10, 9); adj(10, 11); adj(10, 12);
    adj(11, 10);
    adj(12, 10); adj(12, 13);
    adj(13, 12);

    DFS();


    return 0;
}