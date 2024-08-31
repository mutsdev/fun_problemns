#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, horas, minutos, m; 
    cin >> t;


    while (t--){
        cin >> horas >> minutos;
        m = (60 - minutos) + ((23 - horas) * 60); 
        cout << m << "\n";
    }
    return 0;
}