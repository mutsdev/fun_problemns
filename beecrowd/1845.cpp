#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    char a, aux;
    aux = '-'; 
    string n = "xpzjvsb";
    string m = "XPZJVSB";
    a = getchar();
    while(a != EOF){
        if (a != aux){
            if (n.find(a) != string::npos){
                if (a != aux){
                    cout << 'f';
                }
            } else if (m.find(a) != string::npos){
                if (a != aux){
                    cout << 'F';
                }
            } else {
                cout << a;
            }
        } else if (!(n.find(a) != string::npos || m.find(a) != string::npos)) {
            cout << a;
        }
        aux = a;
        a = getchar();
    }
    return 0;
}
           