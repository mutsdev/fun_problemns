#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, x;
    cin >> t;

    while (t--){
        cin >> x;
        char primo = 's';
        if (x == 1){
            primo = 'n';
        }
        
        float raiz = sqrt(x);

        for (int i = 2; i <= raiz; i++){
            if (x % i == 0){
                primo = 'n'; 
                break; 
            }
        }

        if (primo == 's'){
            cout << "Prime\n";
        } else {
            cout << "Not Prime\n";
        }
    }
    return 0;
}
