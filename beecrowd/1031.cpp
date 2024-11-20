#include <bits/stdc++.h>
using namespace std;
int i = 1;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t, pos, passo, passos_reais;
    map<int, bool> central_eletrica;
    
    t = 7;
    pos = 0;
    passos_reais = 0;

    central_eletrica[0] = 1;
    while (i <= 7){
        passos_reais += 1;
        if (pos + i > t){
            
        }
        if (!central_eletrica[pos+i]){
            i++;
        }
    } 
    pos += passos_reais;
    if (pos > t){
        pos -= t;
    }
    
    return 0;
}


    // while (t != 0){
    //     cin >> t;
    //     if (t == 13){
    //         cout << 1 << "\n";
    //         continue;
    //     }

    //     vector<bool> ce(t, false);
    //     ce[12] = 1;
    //     passo = 5;
    //     pos = 0;
    //     while (true){
    //         pos += passo;
    //         while(pos > 0){
    //             for (auto i: ce){
    //                 if (!i){
    //                     pos--;
    //                     cout << "Valor do pos " << pos << " ";
                        
    //                 }
    //             }
    //         }
    //         cout << "\n";

    //         break;
    //         // if (ce[pos] == 13){
    //         //     break;
    //         // }

    //     }

    //     for (auto i: ce){
    //         cout << i << " ";
    //     }
    // }