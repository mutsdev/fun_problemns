// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     cin.tie(0); ios_base::sync_with_stdio(0);

//     while (true) {
//         int qtd_parcelas, meses_juros, mes_des;
//         float parcela, preco_inicial, desva, divida;

//         cin >> qtd_parcelas;
//         if (qtd_parcelas < 0) break; // Condição de parada

//         vector<float> desvalorizacao(101, 0.0); // Assume que não haverá mais de 100 mese
//         cin >> parcela >> preco_inicial >> meses_juros;
//         divida = preco_inicial;
//         float preco_carro = preco_inicial + parcela; // Valor do carro após o pagamento inicial

//         // Lê as depreciações e preenche o vetor
//         while (meses_juros--) {
//             cin >> mes_des >> desva;
//             desvalorizacao[mes_des] = desva;
//         }

//         // Preenche os meses sem taxa de depreciação com o último valor conhecido
//         for (int i = 1; i <= qtd_parcelas; i++) {
//             if (desvalorizacao[i] == 0.0) {
//                 desvalorizacao[i] = desvalorizacao[i - 1];
//             }
//         }

//         preco_carro *= (1 - desvalorizacao[0]);

//         int mes_atual = 0;
//         while (preco_carro < divida) {
//             mes_atual++;
//             divida -= parcela;
//             preco_carro *= (1 - desvalorizacao[mes_atual]);
//         }

//         cout << mes_atual << " month";
//         if (mes_atual != 1) cout << "s";
//         cout << "\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
	int duracaoEmprestimo, numRegistros;
	double entrada, valorEmprestimo, percDec[101];

	while (true) {
		cin >> duracaoEmprestimo >> entrada >> valorEmprestimo >> numRegistros;
		if (duracaoEmprestimo < 0)
			break;

		int mes;
		double percentual;
		while (numRegistros--) {
			cin >> mes >> percentual;
            for(int i = mes; i < 101; i++){
                percDec[i] = percentual;
            }
		}


		int mesesDecorridos = 0;
		double pagamentoMensal = valorEmprestimo / duracaoEmprestimo;
		double valorAtual = (valorEmprestimo + entrada) * (1 - percDec[0]);
		double saldoDevedor = valorEmprestimo;
		while (valorAtual < saldoDevedor) {
			mesesDecorridos++;
			saldoDevedor -= pagamentoMensal;
			valorAtual = valorAtual * (1 - percDec[mesesDecorridos]);
		}

		cout << mesesDecorridos << " month";
		if (mesesDecorridos != 1)
			cout << "s";
		cout << "\n";
	}

	return 0;
}
