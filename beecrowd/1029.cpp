#include <bits/stdc++.h>
using namespace std;

int result = 0;
int num_calls = 0;

void fib(int n){
    num_calls ++;

    if (n == 0 || n == 1){
        result += n;
    } else {
        fib(n-1);
        fib(n-2);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    while (t--){
        cin >> n;
        result = num_calls = 0;
        fib(n);

        cout << "fib(" << n << ") = " << num_calls -1  << " calls = " << result << "\n";
    }
    return 0;
}