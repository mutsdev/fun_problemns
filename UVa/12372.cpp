#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, caso = 1;

    cin >> t;

    while (t--){
        int a, b, c;

        cin >> a >> b >> c;

        if (a <= 20 && b <= 20 && c <= 20) cout << "Case " << caso << ": good\n";
        else cout << "Case " << caso << ": bad\n";

        caso ++;
    }

    return 0;
}