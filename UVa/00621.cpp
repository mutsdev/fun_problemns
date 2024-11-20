#include <bits\stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;

    cin >> t;

    while (t--){
        string numero; 

        cin >> numero;

        if (numero == "1" || numero == "4" || numero == "78") cout << "+\n";
        else {
            int length = numero.length();

            if (numero[length - 1] == '5' && numero[length - 2] == '3') cout << "-\n";
            else if (numero[0] == '9' && numero [length - 1] == '4') cout << "*\n";
            else if (numero[0] == '1' && numero[1] == '9' && numero[2] == '0') cout << "?\n";
        } 
    }
    return 0;
}