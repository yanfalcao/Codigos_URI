/*Flavinho sabe que a chance de ganhar na loteria é bem pequena. Ele gosta muito de estudar probabilidade! Mas, justamente por entender de probabilidades, Flavinho segue o ditado, “quem não arrisca, não petisca!”, e faz um jogo toda semana.

Na loteria preferida dele, o jogador aposta seis números entre 1 e 99. No sorteio, também são escolhidos seis números ganhadores entre 1 e 99. Quem acerta 3, 4, 5 ou 6 números ganha como prêmio, respectivamente, um “terno”, uma “quadra”, uma “quina” ou uma “sena”.

Nesta tarefa, você deve escrever um programa que diga qual foi o prêmio que Flavinho ganhou, dados os seis números que ele apostou e os seis números que foram sorteados.
Entrada

A entrada consiste de duas linhas apenas. Na primeira linha são dados seis números inteiros distintos entre 1 e 99, representando a aposta do Flavinho. A segunda linha contém os seis números inteiros distintos sorteados.
Saída

Seu programa deve imprimir uma linha contendo uma palavra: “terno”, “quadra”, “quina” ou “sena”; caso Flavinho tenha acertado, respectivamente, 3, 4, 5, ou 6 números. Caso ele tenha acertado menos do que 3 números, imprima a palavra “azar”.*/

#include <iostream>

using std::cout;
using std::cin;

int main()
{
	int escolhido[6];
	int sorteado[6];
	int acertos = 0;

	cin >> escolhido[0] >> escolhido[1] >> escolhido[2] >> escolhido[3] >> escolhido[4] >> escolhido[5];
	cin >> sorteado[0] >> sorteado[1] >> sorteado[2] >> sorteado[3] >> sorteado[4] >> sorteado[5];

	for (int i = 0; i < 6; ++i)
	{
		if(escolhido[i] < 1 || escolhido[i] > 99)
			return 0;
	}

	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			if(escolhido[i] == sorteado[j])
				++acertos;
		}
	}

	if(acertos < 3)
		cout << "azar\n";
	else if(acertos == 3)
		cout << "terno\n";
	else if(acertos == 4)
		cout << "quadra\n";
	else if(acertos == 5)
		cout << "quina\n";
	else
		cout << "sena\n";

	return 0;
}