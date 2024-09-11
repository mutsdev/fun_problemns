#include <bits/stdc++.h>
using namespace std;

int qtd_no = 13;
vector<vector<int>> grafo(qtd_no);
vector<bool> visitado(qtd_no, false);
vector<int> distancia_minima(qtd_no, 0);
vector<int> pai(qtd_no);

queue<int> fila;

void BFS(int no=0){
    fila.push(no);
    visitado[no] = 1;
    while (!fila.empty()){
        int atual = fila.front();
        fila.pop();
        for (auto i: grafo[atual]){
            if (!visitado[i]){
                visitado[i] = 1;
                distancia_minima[i] = distancia_minima[atual] + 1;
                pai[i] = atual;
                fila.push(i);
            }
        }
    }
}


void adj(int base, int saida){
    grafo[base-1].emplace_back(saida-1);
}



int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    pai[0] = 0;
    
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

    BFS();

    for (int i = 0; i < distancia_minima.size(); i++){
        cout << "Ditancia minima para " << i << " -> "<< distancia_minima[i] << "\n";
        cout << "Pai do " << i << " -> " << pai[i] << "\n";   
    }

    return 0;
}