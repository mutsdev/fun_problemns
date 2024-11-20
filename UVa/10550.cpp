#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); 

    int start, first, second, third;

    while (cin >> start >> first >> second >> third, start || first || second || third) {
        int total = 1080;  

        total += ((40 + start - first) % 40) * 9;

        total += ((40 + second - first) % 40) * 9;

        total += ((40 + second - third) % 40) * 9;

        cout << total << "\n";
    }

    return 0;
}
