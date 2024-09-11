#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t, n, soma_pos, soma_neg, soma_final, valor_atual;
    
    cin >> t;

    while (t--){
        soma_pos = soma_neg = 0;
        cin >> n;
        if (n == 1){
            cin >> valor_atual;
            cout << valor_atual << "\n";
            continue;
        }
        for (int i = 1; i <= n; i++){
            cin >> valor_atual;
            if (i % 2 == 0){
                soma_neg += valor_atual;
            } else{
                soma_pos += valor_atual;
            }
        }
        soma_final = soma_pos - soma_neg;

        cout << soma_final << "\n";
    }

    return 0;
}