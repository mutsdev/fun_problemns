#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        string atual;
        cin >> atual;

        if (atual.size() == 3) {

            int one = (atual[0] == 'o') + (atual[1] == 'n') + (atual[2] == 'e');
            int two = (atual[0] == 't') + (atual[1] == 'w') + (atual[2] == 'o');
            
            if (one >= 2) {
                cout << "1\n";
            } else if (two >= 2) {
                cout << "2\n";
            }
        } else if (atual.size() == 5) {
            cout << "3\n";
        }
    }

    return 0;
}
