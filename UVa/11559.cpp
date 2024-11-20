#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int participantes, orcamento, hoteis, semanas, preco;
    
    while (cin >> participantes >> orcamento >> hoteis >> semanas) {

        int min_custo = INT_MAX; 

        for (int j = 0; j < hoteis; j++) {
            cin >> preco; 

            for (int i = 0; i < semanas; i++) {
                int pessoas;
                cin >> pessoas;

                if (pessoas >= participantes) {
                    int total_custo = preco * participantes;
                    if (total_custo <= orcamento) {
                        min_custo = min(min_custo, total_custo);
                    }
                }
            }
        }

        if (min_custo == INT_MAX) {
            cout << "stay home\n"; 
        } else {
            cout << min_custo << "\n"; 
        }
    }

    return 0;
}
