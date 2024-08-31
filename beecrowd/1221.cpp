#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, p;
    bool primo;
    cin >> t;

    while(t--){
        primo = false;
        cin >> p;
        if (p == 2 || p == 3 || p == 5 || p == 7){
            primo = true;
        } else if ((p % 2 != 0 && p % 3 > 0) && (p % 5 != 0 && p % 7 != 0)){
            primo = true;
        }

        if (primo){
            cout << "Prime" << "\n";
        } else{
            cout << "Not Prime" << "\n";
        }

    }
    return 0;
}