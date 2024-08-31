#include <bits/stdc++.h>
using namespace std;

void qtdPassos(long long distancia){
    long long distancia_atual = distancia;
    int passos = 0;

    while (distancia > 0){
        passos++;
        if (distancia >= 5){
            distancia -= 5;
            continue;
        } else {
            distancia = 0;
        }
    }

    cout << passos << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    qtdPassos(5);
    qtdPassos(12);
    qtdPassos(16);

    return 0;
}