#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n1, n2, n3, menor, medio, maior;

    cin >> n1 >> n2 >> n3;
    if (n1 > n2){
        if (n1 > n3){
            maior = n1;
            if (n3 > n2){
                medio = n3;
                menor = n2;
            } else {
                menor = n3;
                medio = n2;
            }
        } else {
            maior = n3;
            medio = n1;
            menor = n2;
        }
    } else {
        if (n2 > n3){
            maior = n2;
            if (n1 > n3){
                medio = n1;
                menor = n3;
            } else {
                medio = n3;
                menor = n1;
            }
        } else {
            maior = n3;
            medio = n2;
            menor = n1;
        }
    }

    cout << menor << "\n" << medio << "\n" << maior << "\n\n" << n1 << "\n" << n2 << "\n" << n3 << "\n";
    return 0;
}