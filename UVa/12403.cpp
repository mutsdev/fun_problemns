#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t, total = 0;

    cin >> t;

    while (t--){
        string palavra, report = "report";

        cin >> palavra;

        if (palavra[0] == 'r'){
            cout << total << "\n";
        } else {
            int donate;

            cin >> donate;

            total += donate;
        }

    }

    return 0;
}