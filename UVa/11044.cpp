#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;

        int qtd_v = ceil((n - 2) / 3.0);  
        int qtd_h = ceil((m - 2) / 3.0); 

        cout << qtd_v * qtd_h << "\n";
    }

    return 0;
}
