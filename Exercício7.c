#include<stdio.h>

main(){

/* 7- Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes dados, referentes a cada habitante.*/

//informação inicial
printf("Pesquisa IBGE");

//variáveis
char sexo, olhos, cabelos;
int totalHabitantes = 0, totalEspecifico = 0, totalM = 0, totalF = 0, idade, opcao;
float salario, porcentagem;

//entrada, operação e saída dos dados
do{
    //contagem de cada habitante
    //preencher e validar campo sexo

    do{
        fflush(stdin);
        printf("\n Digite o seu sexo: (m ou f)");
        scanf("%c", &sexo);
        if(sexo != 'm' && sexo != 'f'){
            printf("\n Opcao invalida");
        }
        if(sexo == 'm'){
            totalM++;
        }else if(sexo == 'f'){
            totalF++;
        }

    }while(sexo != 'm' && sexo != 'f');

    //preencher e validar o campo olhos
    do{
        fflush(stdin);
        printf("\n Digite a cor dos seus olhos: a (azuis), v (verdes), c (castanhos), p (pretos)");
        scanf("%c", &olhos);
        if(olhos != 'a' && olhos != 'p' && olhos != 'c' && olhos != 'v'){
            printf("\n Opcao invalida");
        }

    }while(olhos != 'a' && olhos != 'p' && olhos != 'c' && olhos != 'v');

    //preencher e validar o campo cabelo
    do{
        fflush(stdin);
        printf("\nDigite a cor dos seus cabelos:");
        scanf("%c", &cabelos);
        if(cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r'){
            printf("\n Opcao invalida");
        }

    }while(cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r');

    //preencher e validar o campo idade
    do{
        fflush(stdin);
        printf("\n Informe a sua idade:");
        scanf("%d", &idade);
        if(idade < 10 || idade > 100){
            printf("\n Opcao invalida");
        }

    }while(idade < 10 || idade > 100);

    //preencher e validar o campo salario
    do{
        fflush(stdin);
        printf("\n Informe o seu salario:");
        scanf("%f", &salario);
        if(salario < 0){
            printf("\n Opcao invalida");
        }

    }while(salario < 0);

    if(sexo == 'f' && olhos == 'c' && cabelos == 'c' && (idade > 18 && idade < 35)){
        totalEspecifico++;
    }

    totalHabitantes++;

    printf("\n Deseja cadastrar um novo habitante: 1 SIM - 1 NAO:");
    scanf("%d", &opcao);
}while(opcao != -1);

porcentagem = (float)totalEspecifico/totalHabitantes * 100;

printf("\n Total de habitantes cadastrados: %d", totalHabitantes);
printf("\n Total de homens cadastrados: %d", totalM);
printf("\n Total de mulheres cadastradas: %d", totalF);
printf("\n Porcentagem de pessoas com caracteristicas especificas: %.2f", porcentagem);

}