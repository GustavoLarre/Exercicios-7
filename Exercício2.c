#include<stdio.h>

main(){

/* 2- Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. */

//variáveis
int num, contador;

//entrada dos dados
printf("\n Digite um numero inteiro:");
scanf("%d", &num);

//operções e saída
for(int contador = num; contador >= 0; contador --){
    printf("\n %d", contador);
}

}