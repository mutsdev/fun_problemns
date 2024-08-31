#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string nome, nomemaiusculo;
    map<string, string> valores;
    vector<string> nomes;

    while (getline(cin, nome)) {
        nomemaiusculo = nome;
        // Convertendo para maiúsculas
        for (char &letra: nomemaiusculo) letra = toupper(letra);
        nomes.push_back(nomemaiusculo);
        valores[nomemaiusculo] = nome;
    }

    // Ordenando os nomes em ordem alfabética
    sort(nomes.begin(), nomes.end());

    cout << valores[nomes.back()];  
    return 0;
}

// Aprendizado do dia, o set e o dicionário ordenam automaticante os elementos. O 
