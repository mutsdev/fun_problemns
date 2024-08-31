// Esse eu ainda não passei no teste

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i <= t; i++) {
        string linha;
        getline(cin, linha);

        if (linha.length() >= 5) {
            char first1 = linha[0];
            char first2 = linha[4];

            linha[0] = first2;
            linha[4] = first1;
        }

        cout << linha << "\n";
    }

    return 0;
}