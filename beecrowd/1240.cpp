#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t, tamanho;
    string a, b;
    string x;

    cin >> t;

    while (t--){
        cin >> a >> b;
        tamanho = log10(b) + 1;
        
        a -= b;
        ta = pow(10, tamanho);
        if (a % ta == 0){
            cout << "encaixa\n";
        } else {
            cout << "nao encaixa\n";
        }
    }
    return 0;
}


