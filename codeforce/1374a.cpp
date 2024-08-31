#include <bits/stdc++.h>
using namespace std;

void maximoNonNegative(long long x, long long y, long long n){
    long long current, result;
    if (x > n && y == 0){
        result = 0;
    } else {
        for (long long i = n; i > 0; i--){
            current = i - y;

            if (current % x == 0){
                result = i;
                i = -1; // Forçar parada da repetição
            }
        } 
    }

    cout << result << "\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    maximoNonNegative(7, 5, 12345);
    maximoNonNegative(17, 8, 54321);
    maximoNonNegative(10, 5, 15);
    maximoNonNegative(5, 0, 4);
    maximoNonNegative(2, 0, 99999);


    return 0;    
}  