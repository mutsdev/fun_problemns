#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int codigo, numero_ve, numero_ac, maior_in, menor_in, maior_co, menor_co, media_ve, media_ac, count_co;
    int t = 5;
    media_ve = media_ac = count_co = 0;

    while (t--){
        cin >> codigo >> numero_ve >> numero_ac;
        if (t == 4){
            maior_in = menor_in = numero_ac; 
            maior_co = menor_co = codigo;
        } else {
            if (numero_ac >= maior_in){
                maior_in = numero_ac;
                maior_co = codigo;
            } else if (numero_ac <= menor_in){
                menor_in = numero_ac;
                menor_co = codigo;
            }
        }
        media_ve += numero_ve;
        if (numero_ve < 2000){
            count_co ++;
            media_ac += numero_ac;
        }
    }

    media_ve = media_ve / 5; 
    media_ac = media_ac / count_co;

    cout << "O maior indice de acidentes de transito -> " << maior_in << " e ele pertence a cidade -> " << maior_co << "\n";
    cout << "O menor indice de acidentes de transito -> " << menor_in << " e ele pertence a cidade -> " << menor_co << "\n";
    cout << "A media de veiculos das cinco cidades juntas -> " << media_ve << "\n";
    cout << "A media de acidentes de transito nas cidades com menos de 2000 veiculos de passeio -> " << media_ac << "\n";

    return 0;
}