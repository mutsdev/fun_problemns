#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    string comando;
    int caso = 1;

    while (true){
        cin >> comando;

        if (comando == "*") break;

        if (comando[0] == 'H') cout << "Case " << caso << ": Hajj-e-Akbar\n";
        else cout << "Case " << caso << ": Hajj-e-Asghar\n";

        caso++;
    }


    return 0;
}