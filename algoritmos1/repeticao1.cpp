#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double salario = 1000.00;  
    int ano = 2005; 
    double aumento = 0.015;   

    
    while (ano < 2025){
        if (ano >= 2007) {
            aumento *= 2;   
        }
        salario *= (1 + aumento); 
        ano++;
    }

    cout << fixed << setprecision(2) << "Salario atual: R$ " << salario << "\n";

    return 0;
}
