#include <bits/stdc++.h>
using namespace std;

int getDigit(char a){
    return (int)(a - '0');
}


int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    string a;
    int b;

    cin >> a >> b;
    long long ans = 0;

    for (int i = 0; i < a.size(); i++){
        ans = (ans * 10 + getDigit(a[i])) % b;
    }

    cout << ans << "\n";

    return 0;
}