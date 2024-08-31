#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y, media_casa, total_populacao, total_consumo, cidade_atual;
    float media_total;

    cidade_atual = 0;
    bool first_case = true;

    while (true){
        cin >> n;
        if (n == 0){
            break;
        }

        cidade_atual += 1;
        total_populacao = total_consumo = 0;

        map<int, int> media_consumo;

        while (n--){
            cin >> x >> y;

            media_casa = y / x; 
            media_consumo[media_casa] += x; 

            total_populacao += x;
            total_consumo += y;
        }  
        float auxiliar1 = total_consumo;
        

        media_total = floor((auxiliar1 / total_populacao) * 100)/100;
        

        if (!first_case) {
            cout << "\n\n";
        }
        first_case = false;

        cout << "Cidade# " << cidade_atual << ":\n";
        for (const auto& valor : media_consumo){
            cout << valor.second << "-" << valor.first << " ";
        }
        cout << "\nConsumo medio: " << fixed << setprecision(2) << media_total << " m3.";
    }
    return 0;
}