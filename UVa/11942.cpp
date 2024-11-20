#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    cout << "Lumberjacks:\n";

    int t;
    cin >> t;

    while (t--) {
        vector<int> barbas(10);
        for (int i = 0; i < 10; i++) {
            cin >> barbas[i];
        }

        bool crescente = true, decrescente = true;
        for (int i = 1; i < 10; i++) {
            if (barbas[i] > barbas[i - 1]) {
                decrescente = false;
            } else if (barbas[i] < barbas[i - 1]) {
                crescente = false;
            }
        }

        if (crescente || decrescente) {
            cout << "Ordered\n";
        } else {
            cout << "Unordered\n";
        }
    }

    return 0;
}
