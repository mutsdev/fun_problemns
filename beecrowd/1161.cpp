#include <bits/stdc++.h>
using namespace std;
 
long long fat(long long n){
    long long n_fat = 1;
    for (long long i = n; i > 0; i--){
        n_fat *= i;
    }
    return n_fat;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x, y;
    while(cin >> x){
        cin >> y;
        long long n_fat = fat(x) + fat(y);
        cout << n_fat << "\n";
    }
    return 0;
}