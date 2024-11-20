#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;

    while (cin >> t, t != 0){
        int x, y;
        cin >> x >> y;
        while (t--){
            int cx, cy;
            cin >> cx >> cy;

            if (cx == x || cy == y) cout << "divisa\n";
            else if (cx > x && cy > y) cout << "NE\n";
            else if (cx < x && cy > y) cout << "NO\n";
            else if (cx > x && cy < y) cout << "SE\n";
            else if (cx < x && cy < y) cout << "SO\n";
        }

    }

    return 0;
}
