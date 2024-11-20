#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;

    while (t--){
        int lojas;
        cin >> lojas;

        vector <int> pos;

        while (lojas--){
            int p;
            cin >> p;
            pos.push_back(p);
        }

        int total = 0, prev, d;

        sort(pos.begin(), pos.end());

        prev = pos.front();
        for (int i = 1; i < pos.size(); i++){
            d = pos[i] - prev;
            if (d < 0){
                d *= -1;
            }

            total += d;

            prev = pos[i];
        }

        total *= 2;

        cout << total << "\n";

    }

    return 0;
}

// poderia resolver apenas pegando a  diferença entre uma extremidade e outra e multiplicando por 2


