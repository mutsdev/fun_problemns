#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int b, d, s;

    cin >> b >> d;
    while(b != 0 && d != 0){

        vector<int> saldo;
        
        for(int i = 0; i < b; i++){
            cin >> s;

            saldo.push_back(s);
        }

        int saida, entrada, valor;

        while(d--){
            cin >> saida >> entrada >> valor;

            saldo[saida-1] -= valor;
            saldo[entrada-1] += valor;
        }

        bool possible = true;
        for(int i = 0; i < b; i++){
            if(saldo[i] < 0){
                possible = false;
                i = b;
            }
        }

        if (possible) cout << "S\n";
        else cout << "N\n";

        cin >> b >> d;
    }


    return 0;
}


// versão chat gpt 
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     int B, D;
//     while (cin >> B >> D, B || D) {
//         vector<int> saldo(B);

//         for (int i = 0; i < B; ++i) {
//             cin >> saldo[i];
//         }

//         for (int i = 0; i < D; ++i) {
//             int debitor, creditor, value;
//             cin >> debitor >> creditor >> value;
//             saldo[debitor - 1] -= value; // Atualiza saldo do devedor
//             saldo[creditor - 1] += value; // Atualiza saldo do credor
//         }

//         // Verifica se algum banco ficou com saldo negativo
//         bool bailout_needed = any_of(saldo.begin(), saldo.end(), [](int x) { return x < 0; });

//         cout << (bailout_needed ? "N\n" : "S\n");
//     }

//     return 0;
// }
