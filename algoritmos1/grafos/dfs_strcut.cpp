#include <bits/stdc++.h>
using namespace std;

struct no {
    char name;
    int qtd_adj = 0;
    vector<no*> adj;  
    string cor;  
};

struct grafo {
    vector<no*> nos;  
    no* base;
};

void DFS(no* no_atual){
    no_atual->cor = "cinza";
    vector<string> conexoes;
    for (auto& adj: no_atual->adj){
        conexoes.emplace_back(1, adj->name);
        if (adj->cor == "branco"){
            DFS(adj);
        }
    }
    no_atual->cor = "preto";
    cout << no_atual->name << " tem relacao com: ";
    for (auto lig : conexoes) {
        cout << lig << ' ';  
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

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

    grafo meu_grafo;
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
    
    DFS(no1);

    return 0;
}