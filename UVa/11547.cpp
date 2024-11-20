#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;

    cin >> t;
    while (t--){
        int a, b;

        cin >> a;

        b = ((((((a * 567)/9) + 7492) * 235) / 47) - 498);

        b = abs((b/10) % 10);

        cout << b << "\n";

    }
    return 0;
}