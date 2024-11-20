#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);

    long long a, b, diferenca;

    while (cin >> a >> b){
        diferenca = a - b;
        
        if (diferenca < 0){
            diferenca *= -1;
        }

        cout << diferenca << "\n";
    }

    return 0;
}