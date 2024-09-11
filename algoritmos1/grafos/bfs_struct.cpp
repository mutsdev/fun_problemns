#include <bits/stdc++.h>
using namespace std;

struct no {
    char name;
    int distancia_minima = 10000;
    int qtd_adj = 0;
    vector<no*> adj;  
    string cor;
    no* pai;  
};

struct grafo {
    int tamanho = 0;
    vector<no*> nos;  
    no* base;
};

queue <no*> q;
grafo meu_grafo;

void BFS(no* no_atual=meu_grafo.base){
    q.push(no_atual);
    while (!q.empty()) {
        no* atual = q.front();
        q.pop();

        cout << atual->name << " tem relacao com: ";
        for (auto& adj: atual->adj) {
            cout << adj->name << " ";  
            if (adj->cor == "branco") {
                adj->distancia_minima = atual->distancia_minima + 1;
                adj->pai = atual;
                adj->cor = "cinza";
                q.push(adj);
            }
        }
        cout << "\n";
        atual->cor = "preto";  

        if (atual->distancia_minima >= meu_grafo.tamanho) meu_grafo.tamanho = atual->distancia_minima;
    
    }    
}


int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);



    for (auto& i : meu_grafo.nos) {
        i->cor = "branco";
    }

    meu_grafo.base->cor = "cinza";
    meu_grafo.base->pai = nullptr;
    meu_grafo.base->distancia_minima = 0;

    BFS();

    cout << "O no mais longe da base esta a " << meu_grafo.tamanho << " nos de distancia\n";

    return 0;
}
