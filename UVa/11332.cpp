#include <bits/stdc++.h>
using namespace std;

int f(int t) {
    int soma = 0;
    while (t > 0) {
        soma += t % 10;
        t = t / 10;
    }
    return soma;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);   
    int t;
    cin >> t;
    while (t != 0) {
        int soma = t;
        while (soma >= 10) {
            soma = f(soma);
        }
        cout << soma << "\n";
        cin >> t;
    }
    return 0;
}
