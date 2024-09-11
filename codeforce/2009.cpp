#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t, a, b, c, minimo, op1, op2, op_final;
    cin >> t;

    while (t--){
        minimo = 10000000;
        cin >> a >> b;

        for (int i = a; i <= b; i++){
            c = i;
            op1 = c - a;
            op2 = b - c;
            op_final = op1 + op2;

            if (op_final <= minimo){
                minimo = op_final;
            }
        }
        cout << minimo << "\n";
    }

    return 0;
}