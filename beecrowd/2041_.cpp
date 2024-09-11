#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, c, para_while = 40;
    string atual;
    atual = "3";

    char prev, current;

    vector <string> v; 

    while (para_while--){
        v.push_back(atual);
        c = 0;
        for (auto i: atual){
            current = i;
            c++;
            cout << current << " - \n";
        }
    }
    while (cin >> n){

    }
        
    return 0;
}