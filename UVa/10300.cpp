#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;

    while (t--){
        int f, metros, qtd, e, ganho_total = 0;

        cin >> f;
        while (f--){
            cin >> metros >> qtd >> e;
            
            ganho_total += metros * e;
        }

        cout << ganho_total << "\n";
    }

    return 0;
}