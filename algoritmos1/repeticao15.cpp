#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int idade, peso, altura, qtd_menor = 0, qtd_gordo = 0;  // Estou considerando que o peso vai ser valores inteiros e a altura vai vim em cm
    int media_id1 = 0, media_id2 = 0, media_id3 = 0, media_id4 = 0, media_id5 = 0;
    int soma_altura = 0;

    int i = 5;
    while (i--){
        int j = 11; 
        while (j--){
            cin >> idade >> peso >> altura;
            soma_altura += altura;
            
            if (idade < 18){
                qtd_menor++;
            } 
            if (peso > 80){
                qtd_gordo++; 
            }
            
            switch(i){
                case 4:
                    media_id1 += idade;
                    break;
                case 3:
                    media_id2 += idade;
                    break;
                case 2:
                    media_id3 += idade;
                    break;
                case 1:
                    media_id4 += idade;
                    break;
                default:
                    media_id5 += idade;
                    break;
            }
        }
    }

    media_id1 /= 11;
    media_id2 /= 11;
    media_id3 /= 11;
    media_id4 /= 11;
    media_id5 /= 11;

    float porcentagem = (float(qtd_gordo) / 55) * 100; 

    cout << "A quantidade de jogadores com idade inferior a 18 anos -> " << qtd_menor << "\n";
    cout << "A media das idades dos jogadores do time 1 -> " << media_id1 << "\n";
    cout << "A media das idades dos jogadores do time 2 -> " << media_id2 << "\n";
    cout << "A media das idades dos jogadores do time 3 -> " << media_id3 << "\n";
    cout << "A media das idades dos jogadores do time 4 -> " << media_id4 << "\n";
    cout << "A media das idades dos jogadores do time 5 -> " << media_id5 << "\n";
    cout  << "A media das alturas de todos os jogadores do campeonato -> " << soma_altura/55 << "cm\n";
    cout  << std::fixed << std::setprecision(2) << "A porcentagem de jogadores com mais de 80kg entre todos os jogadores do campeonato -> " << porcentagem << "%\n";

    return 0;
}
