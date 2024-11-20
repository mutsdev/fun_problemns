#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0); ios_base::sync_with_stdio(0);
    
    int atual = 1; 
    char c; 
    string texto_final;
    
    while (cin.get(c)) {  
        if (c == '"') {
            if (atual % 2 != 0) 
                texto_final.append("``");  
            else 
                texto_final.append("''");
            atual++;
        } else {
            texto_final.push_back(c);  
        }
    }
    
    cout << texto_final << "\n";
    
    return 0;
}
