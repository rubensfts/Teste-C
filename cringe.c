//Teste para ver se você é CRINGE, de acordo com sua idade.
//Feito por @rubensfts.

#include <stdio.h>
int main (){
    int dia, mes, ano, idade, calulo_idade;
    char nome[20];

    printf("Qual seu nome?\n");
    scanf("%s", &nome);
    printf("Entao %s, vamos ver se voce e C R I N G E. \n", nome);
    printf("Em qual dia voce nasceu?\n");
    scanf("%d", &dia);

    if(dia >= 32){
        printf("Se voce tem a capacidade de errar isso, entao eh C R I N G E!!\n\n");
        return 0;
    }

    printf("Dia %d, beleza. Agora em qual mes? (O numero do mes)\n", dia);
    scanf("%d", &mes);
    
    if(mes == 1){
        printf("Janeiro, hmmm, mas em qual ano?\n");
    }
    if(mes == 2){
        printf("Fevereiro, hmmm, mas em qual ano?\n");
    }
    if(mes == 3){
        printf("Marco, hmmm, mas em qual ano?\n");
    }
    if(mes == 4){
        printf("Abril, hmmm, mas em qual ano?\n");
    }
    if(mes == 5){
        printf("Maio, hmmm, mas em qual ano?\n");
    }
    if(mes == 6){
        printf("Junho, hmmm, mas em qual ano?\n");
    }
    if(mes == 7){
        printf("Julho, hmmm, mas em qual ano?\n");
    }
    if(mes == 8){
        printf("Agosto, hmmm, mas em qual ano?\n");
    }
    if(mes == 9){
        printf("Setembro, hmmm, mas em qual ano?\n");
    }
    if(mes == 10){
        printf("Outubro, hmmm, mas em qual ano?\n");
    }
    if(mes == 11){
        printf("Novembro, hmmm, mas em qual ano?\n");
    }
    if(mes == 12){
        printf("Dezembro, hmmm, mas em qual ano?\n");
    }

    if(mes >= 13){
        printf("O ano tem 12 meses, e voce erra isso... MUITO C R I N G E!!!\n\n");
        return 0;
    }

    scanf("%d", &ano);

    calulo_idade = 2021 - ano;

    printf("\n");

    if (calulo_idade >= 99){
        printf("Caramba, eh um milagre voce esta aqui ainda. Isso que eh ser cringe\n");
        return 0;
    }

    if (calulo_idade >= 60){
        printf("Voce eh grige, MUITO CRINGE!\n");
        return 0;
    }
    if (calulo_idade >= 40){
        printf("Preciso nem falar, cringe!\n");
        return 0;
    }
    if (calulo_idade >= 25){
        printf("Ta se livrando, mas cuidado que a hora vem\n");
        return 0;
    }
    if (calulo_idade >= 11){
        printf("O tal da geracao Z, nao eh gringe... por enquato\n");
        return 0;
    }
    if (calulo_idade <= 10){
        printf("O que tu ta fazendo aqui, tu nasceu quase agora. Nao eh.\n");
        return 0;
    }


    return 0;
}