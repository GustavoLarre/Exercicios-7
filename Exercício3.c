#include<stdio.h>

int main(int argc, char *argv[]){

    /* 3-  Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional).*/

 //variáveis
 int num, contador = 0, rest;

 //entrada dos dados
 printf("Digite um numero:");
 scanf("%d", &num);

 //operações e saída
 contador = 1;
 while(contador <= num){
    printf("\n %d", contador);
    contador += 2;
 }
 return 0;

}