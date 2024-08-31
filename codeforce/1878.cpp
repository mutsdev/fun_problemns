#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    long long n, k, x, min_sum, max_sum; 
    cin >> t;
    while (t--){
        cin >> n >> k >> x;
        min_sum = k * (k+1)/2;
        max_sum = k * (n + n-k+1)/2;

        if (x >= min_sum && x <= max_sum){
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}