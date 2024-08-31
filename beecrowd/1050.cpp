#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, string> ddd = {
        {61, "Brasilia"},
        {71, "Salvador"},
        {11, "Sao Paulo"},
        {21, "Rio de Janeiro"},
        {32, "Juiz de Fora"},
        {19, "Campinas"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"}
    };

    int n;
    cin >> n;

    if (ddd.find(n) != ddd.end()) {
        cout << ddd[n] << "\n";
    } else {
        cout << "DDD nao cadastrado\n";
    }

    return 0;
}
