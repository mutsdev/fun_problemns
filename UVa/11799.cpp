#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, c = 1;

    cin >> t;

    while(t--){
        int v, n, maximo = INT_MIN;
        cin >> n;

        while (n--){
            cin >> v;

            if (v > maximo){
                maximo = v;
            }
        } 
        
        cout << "Case " << c << ": " << maximo << "\n";
        c++;
    }

    return 0;
}