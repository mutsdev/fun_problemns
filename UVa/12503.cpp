#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);


    int t;

    cin >> t;

    while(t--){
        int n, p = 0;
        vector <int> posicoes;
        
        cin >> n;

        while (n--){
            string palavra;
            int i = 1;
            
            cin >> palavra;

            if (palavra == "LEFT"){
                p--;
                posicoes.push_back(-1);
            } else if (palavra == "RIGHT"){
                p++;
                posicoes.push_back(1);
            } else{
                string lixo;
                int pos;
                cin >> lixo >> pos;

                int move = posicoes[pos - 1];  
                p += move;  
                posicoes.push_back(move);  
            }

        }

        cout << p << "\n";
    }


    return 0;
}