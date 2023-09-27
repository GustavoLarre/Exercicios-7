#include<stdio.h>

main(){

/* 1- Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.*/

//variáveis
int num, contador;

//entrada dos dados
printf("\n Digite um numero inteiro:");
scanf("%d", &num);

//operação e saída
for(int contador = 0; contador <= num; contador ++){
    printf("\n %d", contador);
}

}