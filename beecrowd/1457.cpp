#include <bits/stdc++.h>
using namespace std;
 
// preferi fazer a função fora para ficar mais organizado
long long fatorial(int n, int k){
    long long fat = n;
    while (n-k > 1){ // Aqui é a lógica que eu te expliquei no audio
        fat *= (n-k);
        n -= k;
    }

    return fat;
}

int main() {
    // Essas duas linhas são apenas uma forma de aumentar a performance do teu código
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore(); // ignora o newline após o número de instâncias

    while (t--){
        string nStr;
        getline(cin, nStr); // Exemplo nStr = "10!!!" , obs: utilizei getline pois assim ele lê toda a linha, o que pode evitar algum erro por conta de quebra de linhas

        // Momento de determinar a quantidade de exclamações
        int k = 0;
        int i = nStr.size() - 1; // i é do tamanho da string -1 

        while (i >= 0 && nStr[i] == '!'){ // enquanto i for maior ou igual a 0 e o caracter atual for igual a '!'
            k++; // Adicionamos um a mais em k
            i--; // Decrementamos uma posição na string
        }

        int n = stoi(nStr.substr(0, i+1)); // stoi é uma função que converte string para inteiro, ou pelo menos tenta. substr é apenas uma forma para pegar o primeiro caracter

        // É necessário utilizar long long pois como envolve fatorial pode acontecer de vim um número muito grande e estourar o tamanho do inteiro
        long long result = fatorial(n, k);
        cout << result << "\n";
    }
    return 0;
}

int n, k, i, current;
n = 10;
k = 3;
i = 0;
long long fat = n;

while (n - ((i+1)*k) < 1){
    i++;
    current = n - (i*k);
    fat *= current;
}








