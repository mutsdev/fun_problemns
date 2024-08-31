#include <bits/stdc++.h>
using namespace std;

bool primo1(int n){
    bool primo = true;
    if (primo == 2){
        primo = true;
    } else {
        for (int i = n - 1; i > 1; i--){
            if (n%i == 0){
                primo = false;
                i = 0;
            }
        }
    }
    return primo;
}


bool primo2 (int n){
    bool primo = true;
    if (n == 2){
        primo = true;
    } else {
        for (int j = 2; j < sqrt(n); j++){
            if (n%j == 0){
                primo = false;
                j = sqrt(n) + 1;
            }
        }
    }
    return primo;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n1 = 103;
    bool n1_primo = primo1(n1);
    if (n1_primo > 0){
        cout << n1 << " e primo" << "\n";
    } else {
        cout << n1 << " nao e primmo" << "\n";
    }
    
    int n2 = 407;
    bool n2_primo = primo2(n2);
    if (n2_primo != 0){
        cout << n2 << " e primo" << "\n";
    } else {
        cout << n2 << " nao e primo" << "\n";
    }





    return 0;
}