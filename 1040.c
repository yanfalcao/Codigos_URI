/*
	Leia quatro n�meros (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente �s quatro notas de um aluno.
	Calcule a m�dia com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre esta m�dia acompanhada pela mensagem "Media: ".
	Se esta m�dia for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a m�dia calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado.".
	Se a m�dia calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.".

	No caso do aluno estar em exame, leia um valor correspondente � nota do exame obtida pelo aluno. 
	Imprima ent�o a mensagem "Nota do exame: " acompanhada pela nota digitada. Recalcule a m�dia (some a pontua��o do exame com a m�dia anteriormente calculada e divida por 2). 
	e imprima a mensagem "Aluno aprovado." (caso a m�dia final seja 5.0 ou mais ) ou "Aluno reprovado.", (caso a m�dia tenha ficado 4.9 ou menos). 
	Para estes dois casos (aprovado ou reprovado ap�s ter pego exame) apresente na �ltima linha uma mensagem "Media final: " seguido da m�dia final para esse aluno.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, n3, n4;
	float media, exame;
	
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
	
	printf("Media: %.1f", media);
	
	if(media >= 7.0)
		printf("\nAluno aprovado.");
	
	else if(media < 5.0)
		printf("\nAluno reprovado.");
	
	else{
		printf("\nAluno em exame.\n");
		scanf("%f", &exame);
		printf("Nota do exame: %.1f", exame);
		
		media = (media + exame) / 2;
		
		if(media > 5.0)
			printf("\nAluno aprovado.");
		
		else
			printf("\nAluno reprovado.");
			
		printf("\nMedia final: %.1f", media);				
	}		
}
