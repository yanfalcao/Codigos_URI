//	Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
//a) a área do triângulo retângulo que tem A por base e C por altura.
//b) a área do círculo de raio C. (pi = 3.14159)
//c) a área do trapézio que tem A e B por bases e C por altura.
//d) a área do quadrado que tem lado B.
//e) a área do retângulo que tem lados A e B. 

// 1012

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double A, B, C, pi=3.14159, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    TRIANGULO=(A*C)/2;
    CIRCULO=pi*C*C;
    TRAPEZIO=((A+B)*C)/2;
    QUADRADO=B*B;
    RETANGULO=A*B;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);
}    
