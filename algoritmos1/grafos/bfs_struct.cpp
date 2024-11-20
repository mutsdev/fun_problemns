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

    no* no1 = new no(); 
    no* no2 = new no(); 
    no* no3 = new no(); 
    no* no4 = new no();
    no* no5 = new no();
    no* no6 = new no();
    no* no7 = new no();
    no* no8 = new no();
    no* no9 = new no();
    no* no10 = new no();
    no* no11 = new no();
    no* no12 = new no();
    no* no13 = new no();

    no1->name = 'a'; no1->adj.push_back(no2); no1->adj.push_back(no3); no1->adj.push_back(no4); no1->adj.push_back(no8); no1->qtd_adj = 3;
    no2->name = 'b'; no2->adj.push_back(no1); no2->adj.push_back(no7);no2->qtd_adj = 2;
    no3->name = 'c'; no3->adj.push_back(no1); no3->adj.push_back(no4); no3->adj.push_back(no5); no3->adj.push_back(no7);no3->qtd_adj = 4;
    no4->name = 'd'; no4->adj.push_back(no1); no4->adj.push_back(no3); no4->adj.push_back(no6); no4->qtd_adj = 3;
    no5->name = 'e'; no5->adj.push_back(no3); no5->adj.push_back(no6); no5->qtd_adj = 2;
    no6->name = 'f'; no6->adj.push_back(no4); no6->adj.push_back(no5); no6->qtd_adj = 2;
    no7->name = 'g'; no7->adj.push_back(no2); no7->adj.push_back(no3); no7->qtd_adj = 2;
    no8->name = 'h'; no8->adj.push_back(no1); no8->adj.push_back(no9); no8->qtd_adj = 2;
    no9->name = 'i'; no9->adj.push_back(no8); no9->adj.push_back(no10); no9->qtd_adj = 2;
    no10->name = 'j'; no10->adj.push_back(no9);no10->adj.push_back(no11); no10->adj.push_back(no12); no10->qtd_adj = 3;
    no11->name = 'k'; no11->adj.push_back(no10); no11->qtd_adj = 1;
    no12->name = 'l'; no12->adj.push_back(no10); no12->adj.push_back(no13); no12->qtd_adj = 2;
    no13->name = 'm'; no13->adj.push_back(no12); no13->qtd_adj = 1;

    meu_grafo.base = no1;
    meu_grafo.nos.push_back(no1); 
    meu_grafo.nos.push_back(no2); 
    meu_grafo.nos.push_back(no3); 
    meu_grafo.nos.push_back(no4);
    meu_grafo.nos.push_back(no5);
    meu_grafo.nos.push_back(no6);
    meu_grafo.nos.push_back(no7);
    meu_grafo.nos.push_back(no8);
    meu_grafo.nos.push_back(no9);
    meu_grafo.nos.push_back(no10);
    meu_grafo.nos.push_back(no11);
    meu_grafo.nos.push_back(no12);
    meu_grafo.nos.push_back(no13);

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
