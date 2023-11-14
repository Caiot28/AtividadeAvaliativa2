#include<stdio.h>
#include<stdlib.h>

int classificaSalario(float salario){
    float salarioMinimo = 1400;
    int classificacao;

    if(salario < salarioMinimo){
        classificacao = 0;
        return classificacao;

    } else if(salario == salarioMinimo){
        classificacao = 1;
        return classificacao;

    } else if(salario > salarioMinimo){
        classificacao = 2;
        return classificacao;
    }
}

int mostraClassifica(int classificacao, char sexo, float salario){
    printf("\nSeu salario e de R$%.2f", salario);

    if(classificacao == 0){
        printf("\nSalario abaixo do salaro minimo");
    } else if(classificacao == 1){
        printf("\nSalario igual ao salario minimo");
    } else if(classificacao == 2){
        printf("\nSalario acima do salario minimo");
    }

    if(sexo == 'M'){
        printf("\nSexo Masculino");
    } else if(sexo == 'F'){
        printf("\nSexo Feminino");
    }
    
}

void validaSalario(int salario){
    if(salario < 1){
        printf("\nSalario invalido, tente novamente");
        exit(0);
    } 
}

void validaSexo(char sexo){
    if(sexo != 'M' && sexo != 'F'){
        printf("\nSexo invalido, tente novamente");
        exit(0);
    }
}


main(){

    int opcao, classificacao, contadorAbaixo = 0, contadorAcima = 0;
    float salario;
    char sexo;

    do{

    printf("Digite seu salario: ");
    scanf("%f", &salario);
    fflush(stdin);

    validaSalario(salario);

    printf("\nDigite seu sexo (M ou F): ");
    scanf("%c", &sexo);
    fflush(stdin);

    validaSexo(sexo);

    classificacao = classificaSalario(salario);
    mostraClassifica(classificacao, sexo, salario);

    if(classificacao == 0){
        contadorAbaixo++;
    } else if(classificacao == 2){
        contadorAcima++;
    }

    printf("\nDeseja repetir? 1 - Sim / 0 - Nao: ");
    scanf("%d", &opcao);

    } while (opcao == 1);

    printf("\nTotal de salarios acima: %d", contadorAcima);
    printf("\nTotal de salarios abaixo: %d", contadorAbaixo);
}