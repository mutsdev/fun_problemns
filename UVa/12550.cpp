#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    string palavra;
    int c = 1;

    while (cin >> palavra, palavra != "#") {
        if (palavra == "HELLO") cout << "Case " << c << ": ENGLISH\n";
        else if (palavra == "HOLA") cout << "Case " << c << ": SPANISH\n";
        else if (palavra == "HALLO") cout << "Case " << c << ": GERMAN\n";
        else if (palavra == "BONJOUR") cout << "Case " << c << ": FRENCH\n";
        else if (palavra == "CIAO") cout << "Case " << c << ": ITALIAN\n";
        else if (palavra == "ZDRAVSTVUJTE") cout << "Case " << c << ": RUSSIAN\n";
        else cout << "Case " << c << ": UNKNOWN\n";
        
        c++;
    }

    return 0;
}
