#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Lógica para receber os valores
    int dia1, hours1, min1, ss1, dia2, hours2, min2, ss2;
    string dia, lixo;

    getline(cin, dia);
    dia1 = stoi(dia.substr(4));
    cin >> hours1 >> lixo >> min1 >> lixo >> ss1;

    getline(cin, lixo); // Captura a quebra de linha após a hora

    getline(cin, dia);
    dia2 = stoi(dia.substr(4));
    cin >> hours2 >> lixo >> min2 >> lixo >> ss2;

    // Lógica para resolver o problema
    int day, hrs, mm, ss; 
    if (ss2 < ss1){
        ss2 += 60; 
        min2--;
    } 
    if (min2 < min1){
        min2 += 60;
        hours2--;
    }
    if (hours2 < hours1){
        hours2 += 24;
        dia2--;
    }
    ss = ss2 - ss1;
    mm = min2 - min1; 
    hrs = hours2 - hours1; 
    day = dia2 - dia1;
    
    cout << day << " dia(s)" << "\n";
    cout << hrs << " hora(s)" << "\n";
    cout << mm << " minuto(s)" << "\n";
    cout << ss << " segundo(s)" << "\n";

    return 0;
}
