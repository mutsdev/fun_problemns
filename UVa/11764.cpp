#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t, c = 1;
    cin >> t;

    while(t--){
        int p, prev, current, sb = 0, sa = 0;

        cin >> p;
        p--; 
        cin >> prev;
    
        while (p--){
            cin >> current;
            if (prev > current) sb++;
            else if (prev < current) sa++;

            prev = current;
        }
        cout << "Case " << c << ": " << sa << " " << sb << "\n";
        c++;

    }

    return 0;
}