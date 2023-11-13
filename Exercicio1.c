#include<stdio.h>
#include<stdlib.h>

float validaQuantidade(int pecas){
    float adicional;
    if(pecas <= 50){
        printf("\nNao ha adicional de quantidade");
        adicional = 0;
        return adicional;
        
    } else if(pecas > 50 && pecas <= 80){
        adicional = ((float)pecas - 50) * 0.5;
        return adicional;
    } else {
        adicional = (((float)pecas - 81) * 0.75) + 15;
        return adicional;
    }
}

float calculaSalario(float adicional){
    float salario = 600;
    float salarioFinal = salario + validaQuantidade(adicional);
    return salarioFinal;
}

void mostraFinal(float salarioFinal){
    printf("\nSeu salario e de R$%.2f", salarioFinal);
    printf("\n");
}

main(){

    int pecas = 0, continuar;
    float salarioFinal = 0;

    do{

    printf("\nDigite a quantidade de pecas fabricadas: ");
    scanf("%d", &pecas);

    salarioFinal = calculaSalario(pecas);
    mostraFinal(salarioFinal);

    printf("\nDeseja repetir? 1 - Sim / 0 - Nao\n");
    scanf("%d", &continuar);

    }while(continuar == 1);
   

}