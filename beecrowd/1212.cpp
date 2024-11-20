#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);

    int a, b, soma, carrys, carry;
    string a1, b1;

    while(true){
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        
        carrys = carry = 0;
        while ( a > 0 || b > 0){
            int digitA = a % 10;
            int digitB = b % 10;

            soma = digitA + digitB + carry;

            if (soma > 9){
                carry = 1;
                carrys ++;
            } else carry = 0;
            a /= 10;
            b /= 10;
        }


        if (carrys > 1){
            cout << carrys << " carry operations.\n";
        } else if (carrys){
            cout << carrys << " carry operation.\n";
        } else {
            cout << "No carry operation.\n";
        }

    }

    return 0;
}