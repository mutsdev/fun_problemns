#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int senha;
    while (true){
        cin >> senha;
        if (senha != 2002){
            cout << "Senha Invalida" << "\n";
        } else {
            cout << "Acesso Permitido" << "\n";
            break;
        }      
    }
    return 0;
}