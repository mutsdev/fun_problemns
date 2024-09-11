#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t, y;
    unsigned long long int x;
    cin >> t;   
    while (t--){
        cin >> y;
        x = (pow(2, y) - 1)/12000;
        cout << x << " kg\n";
    }
    return 0;
}