#include<stdio.h>

main(){

/* 4-  Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.*/

//variáveis
int num = 3, contador, res;

//operações e saída
for(int contador = 1; contador <= 5; contador ++){
    res = num * contador;
    printf("\n %d * %d = %d", num, contador, res);
}

}