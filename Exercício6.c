#include<stdio.h>

main(){

/* 6- Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra. */

//informação inicial
printf("Toten feira de frutas");

//variáveis
int fruta, num, contador, res1, res2, res3, resF;

while(1){
    //entrada dos dados
    printf("\n Menu inicial:");
    printf("\n (10) Abacaxi R$ 5.00 un.");
    printf("\n (11) Maca R$ 1.00 un.");
    printf("\n (12) Pera R$ 4.00 un.");
    fflush(stdin);
    printf("\n Digite a fruta que voce deseja:");
    scanf("%d", &fruta);
    printf("\n Digite quantas unidades voce quer:");
    scanf("%d", &num);

    //operações e saída
    switch(fruta){
        case 10:
        for(int contador = 1; contador <= num; contador ++){
        printf("\n %d un R$ 5.00", contador);
        } for(int contador = 0; contador > -1;){
        res1 = num * 5.00;
        printf("\n %d un = R$ %d", num, res1);
        contador --;
        }
        break;

        case 11:
        for(int contador = 1; contador <= num; contador ++){
        printf("\n %d un R$ 1.00", contador);
        } for(int contador = 0; contador > -1;){
        res2 = num * 1.00;
        printf("\n %d un = R$ %d", num, res2);
        contador --;
        }
        break;

        case 12:
        for(int contador = 1; contador <= num; contador ++){
        printf("\n %d un R$ 4.00", contador);
        } for(int contador = 0; contador > -1;){
        res3 = num * 4.00;
        printf("\n %d un = R$ %d", num, res3);
        contador --;
        }
        break;
    }
    char continuar;
    fflush(stdin);
    printf("\n Deseja continuar? (s/n):");
    scanf("%c", &continuar);
    if(continuar != 's' && continuar != 'S'){
        fflush(stdin);
        resF = res1 + res2 + res3;
        printf("\n Valor total da compra R$: %d", resF);
        break;
    }

}

}