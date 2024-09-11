#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int a, b;
    long long soma = 0;

    cin >> a >> b;

    for (int i = a; i <= b; i++){
        soma += i;
    }
    cout << soma << "\n";
    return 0;
}