/*
	Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:

	Perimetro = XX.X

	Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem

	Area = XX.X
*/
#include<stdio.h>

int main(){
	
	float a, b, c;
	int triangulo=1;
	
	scanf("%f %f %f", &a, &b, &c);
	
	if((a+b) <= c){
		triangulo=0;
	}	
	else if((a+c) <= b){
		triangulo=0;
	}
	else if((b+c) <= a){
		triangulo=0;
	}
	
	if(triangulo == 1){
		printf("Perimetro = %.1f\n", (a+b+c));
	}
	else{
		printf("Area = %.1f\n", ((a + b) * (c / 2)) );
	}
}
