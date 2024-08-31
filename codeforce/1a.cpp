#include <bits/stdc++.h>
using namespace std;

long long qtdLajes(long n, long m, long a){  
    long long qtd_lateral, qtd_vertical, qtd_lajes;
    if (n <= a && m <= a){
        qtd_lajes = 1;
    } else {
        qtd_lateral = n/a;
        qtd_vertical = m/a;

        if (n%a != 0){
            qtd_vertical++;
        }
        if (m%a != 0) {
            qtd_lateral++;
        }

        qtd_lajes = qtd_lateral * qtd_vertical;

    }
    cout << qtd_lajes << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    qtdLajes(6, 6, 4);
    qtdLajes(17, 7, 3);
    qtdLajes(15, 14, 4);
    qtdLajes(60, 6, 4);

    return 0;
}
