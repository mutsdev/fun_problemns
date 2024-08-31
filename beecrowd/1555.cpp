#include <bits/stdc++.h>
#include <cmath> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int x, y;
        cin >> x >> y;

        long long r = (3 * x) * (3 * x) + y * y;       
        long long b = 2 * pow(x, 2) + pow((5 * y), 2);  
        long long c = -100 * x + pow(y, 3);            

        map <long long, string> respostas;
        respostas[r] = "Rafael ganhou"; 
        respostas[b] = "Beto ganhou"; 
        respostas[c] = "Carlos ganhou"; 

        long long maior = std::max(r, std::max(b, c)); 
        cout << respostas[maior] << "\n";
    }

    return 0;
}
