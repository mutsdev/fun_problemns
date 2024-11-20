#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int t, c = 1;

    while (cin >> t, t != 0){
        int atual, sem_mimo = 0, com_mimo = 0;

        for (int i = 0; i < t; i++){
            cin >> atual;
            if (atual == 0) 
                com_mimo++;
            else 
                sem_mimo++;
        } 

        int fim = sem_mimo - com_mimo;
        cout << "Case " << c << ": " << fim << "\n";
        c++; 
    }

    return 0;
}
