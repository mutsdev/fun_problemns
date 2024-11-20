#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, l, c, qtd_char = 0, qtd_linhas = 0, qtd_paginas = 0;
    string palavra;

    while(cin >> n >> l >> c){
        qtd_linhas = qtd_paginas = qtd_char = 0;
        int i = 0;
        while (i < n){
            cin >> palavra;
            qtd_char += palavra.size();
            if(qtd_char + 1 < c){
                qtd_char ++;
            } else if (qtd_char > c) {
                qtd_linhas ++;
                qtd_char = palavra.size();
            } else {
                qtd_linhas++;
                qtd_char = 0;
            }
            i++;
            
        }
        if (qtd_char > 0){
            qtd_linhas++;
        }
        
        int qtd_paginas = ceil((double)qtd_linhas / l);

        cout << qtd_paginas << "\n";
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N, L, C;
    
//     while (cin >> N >> L >> C) {
//         vector<string> palavras(N);
        
//         for (int i = 0; i < N; i++) {
//             cin >> palavras[i];
//         }
        
//         int linhas = 1, caracteres_na_linha = 0;
        
//         for (int i = 0; i < N; i++) {
//             int comprimento_palavra = palavras[i].size();
            
//             if (caracteres_na_linha + comprimento_palavra <= C) {
//                 caracteres_na_linha += comprimento_palavra;
//                 if (caracteres_na_linha != C && i != N - 1) {
//                     caracteres_na_linha++;
//                 }
//             } else {
//                 linhas++;
//                 caracteres_na_linha = comprimento_palavra;
//             }
//         }

//         int paginas = (linhas + L - 1) / L;
        
//         cout << paginas << endl;
//     }

//     return 0;
// }
