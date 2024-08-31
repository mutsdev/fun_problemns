#include <bits/stdc++.h>
using namespace std;

// Essa função da certo, porém ela peca em questão de tempo de processamento
void funcaoCalculo(long long n1){
    long long n2, pos, neg, result;
    n2 = n1 - 1;
    pos = 0;
    neg = 0;
    if (n1%2 != 0){
        while (n1 >= 1){
            neg += n1;
            n1 -= 2;
        } while (n2 > 0){
            pos += n2;
            n2 -= 2;
        } 
    } else {
        while (n2 >= 1){
            neg += n2;
            n2 -= 2;
        } while (n1 > 0){
            pos += n1;
            n1 -= 2;
        }
    }
    result = pos - neg;
    cout << result << "\n";
}

// Analisando melhor, eu reparei em um padrão, quando número é par, a resposta é a metade dele e se o número for ímpar, a resposta é a resposta anterior - o número atual
void funcaoCalculoSacana(long long n){
    long long result;
    if (n%2 == 0){
        result = n/2;
    } else {
        long long prev = n - 1;
        result = (prev/2) - n;
    }
    cout << result << "\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    funcaoCalculo(4);
    funcaoCalculo(5);
    funcaoCalculoSacana(100000000000000000000);
    funcaoCalculoSacana(100000000000000000001);

    return 0;
}