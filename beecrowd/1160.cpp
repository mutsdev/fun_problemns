/*
    Mariazinha quer resolver um problema interessante. Dadas as informações de 
    população e a taxa de crescimento de duas cidades quaisquer (A e B), ela gostaria
    de saber quantos anos levará para que a cidade menor (sempre é a cidade A)
    ultrapasse a cidade B em população. Claro que ela quer saber apenas para as
    cidades cuja taxa de crescimento da cidade A é maior do que a taxa de 
    crescimento da cidade B, portanto, previamente já separou para você apenas os 
    casos de teste que tem a taxa de crescimento maior para a cidade A. Sua tarefa é 
    construir um programa que apresente o tempo em anos para cada caso de teste.

    Porém, em alguns casos o tempo pode ser muito grande, e Mariazinha não se 
    interessa em saber exatamente o tempo para estes casos. Basta que você informe, 
    nesta situação, a mensagem "Mais de 1 seculo.".
*/

#include <bits/stdc++.h>
using namespace std;

void crescimentoPopulacional(int pa, int pb, float g1, float g2) {
    int anos = 0;

    // Convertendo as taxas de crescimento em fatores multiplicativos
    g1 = (g1 / 100) + 1;
    g2 = (g2 / 100) + 1;

    while (pa <= pb && anos <= 100) {  
        pa = static_cast<int>(pa * g1);  
        if (g2 > 1){
        pb = static_cast<int>(pb * g2);  
        };

        anos++;
    }

    if (pa > pb && anos > 100) {
        cout << anos << " anos" << "\n";
    } else {
        cout << "Mais de 1 seculo.\n";
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    crescimentoPopulacional(90000, 120000, 5.5, 3.5);
    crescimentoPopulacional(56700, 72000 , 5.2, 3.0);
    crescimentoPopulacional(123, 2000, 3.0, 2.0);
    crescimentoPopulacional(100000, 110000, 1.5, 0.5);
    crescimentoPopulacional(62422, 484317, 3.1, 1.0);
    return 0;
}