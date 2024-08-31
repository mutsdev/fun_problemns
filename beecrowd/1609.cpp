#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, c;

    cin >> t;

    while (t--){
        set<int> id_carneiro;
        cin >> n;
        while (n--){
            cin >> c;
            id_carneiro.insert(c);
        }
        cout << id_carneiro.size() << "\n";
    }

    return 0;
}