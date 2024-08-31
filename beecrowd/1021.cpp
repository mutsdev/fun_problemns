/* Leia um valor de ponto flutuante com duas casas decimais. Este valor representa 
    um valor monetário. A seguir, calcule o menor número de notas e moedas 
    possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 
    50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir
    mostre a relação de notas necessárias.
*/

#include <bits/stdc++.h>
using namespace std;

// Função que calcula e imprime a quantidade de notas e moedas
void calcularNotasMoedas(float valor) {
    // Convertendo para centavos para evitar problemas com ponto flutuante
    int centavos = round(valor * 100);


    // Vetores que armazenam os valores das notas e moedas
    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    // Vetores que armazenam a quantidade de cada nota e moeda
    int qtdNotas[6] = {0}, qtdMoedas[6] = {0};

    // Calculando a quantidade de notas
    for (int i = 0; i < 6; i++) {
        qtdNotas[i] = centavos / notas[i];
        centavos %= notas[i];
    }

    // Calculando a quantidade de moedas
    for (int i = 0; i < 6; i++) {
        qtdMoedas[i] = centavos / moedas[i];
        centavos %= moedas[i];
    }

    // Imprimindo o resultado
    
    cout << "NOTAS:" << "\n";
    cout << qtdNotas[0] << " nota(s) de R$ 100.00" << "\n";
    cout << qtdNotas[1] << " nota(s) de R$ 50.00" << "\n";
    cout << qtdNotas[2] << " nota(s) de R$ 20.00" << "\n";
    cout << qtdNotas[3] << " nota(s) de R$ 10.00" << "\n";
    cout << qtdNotas[4] << " nota(s) de R$ 5.00" << "\n";
    cout << qtdNotas[5] << " nota(s) de R$ 2.00" << "\n";

    cout << "MOEDAS:" << "\n";
    cout << qtdMoedas[0] << " moeda(s) de R$ 1.00" << "\n";
    cout << qtdMoedas[1] << " moeda(s) de R$ 0.50" << "\n";
    cout << qtdMoedas[2] << " moeda(s) de R$ 0.25" << "\n";
    cout << qtdMoedas[3] << " moeda(s) de R$ 0.10" << "\n";
    cout << qtdMoedas[4] << " moeda(s) de R$ 0.05" << "\n";
    cout << qtdMoedas[5] << " moeda(s) de R$ 0.01" << "\n";
    
}

int main() {
    float valor = 504.3;  // Valor a ser passado para a função
    calcularNotasMoedas(valor);  // Chamando a função com o valor

    return 0;
}