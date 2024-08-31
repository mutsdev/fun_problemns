#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x, y, soma;

    cin >> t;

    while (t--){
        cin >> x >> y;
        soma = 0;

        if (x != y){
            if (x > y && x > y+1){
                for (int i = x-1; i > y; i--){
                    if (i % 2 != 0){
                        soma += i;
                    }
                }
            } else if (x < y && x < y - 1){
                for (int i = x + 1; i < y; i++){
                    if (i % 2 != 0){
                        soma += i;
                    }
                }

            }
        }
        cout << soma << "\n";
    }
    
    return 0;
}