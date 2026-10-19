#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

struct historico{
    char nome[21];
    int perguntas;
    char especifica[30];
};

int main() {
    int opc, quant;
    char ctr, caracteristicaindestinguivel[21];
    printf("Escolha o seu destino: \n")
    printf("1 - Jogar\n");
    printf("2 - Adicionar personagem\n");
    printf("3 - Remover personagem\n");
    printf("4 - Histiorico de partidas\n");
    printf("5 - Sair\n");
    scanf("%d", opc);
    while(opc<5&&opc>0){
        if(opc==1){
            //finalzinho do codigo
            printf("O seu personagem eh o fulano?(s/n)");
            scanf("%c", &ctr)
            if(ctr==s){
                printf("Sabia! Te venci muito facil");
            }else{
                printf("Que pena, mas eu nao perdi, apenas desconehco a sua personagem, gostaria de fazer com que eu a conhecesse? (s/n)");
                scanf("%c", &ctr)
                if(ctr==s){
                    printf("Me fale uma caracteristica indestinguivel");
                    gets(caracteristicaindestinguivel);
                    quant = strlen(caracteristicaindestinguivel);
                    /*
                    algo nesse sentido

                    fopen (arquivo, a);
                    fwrite(*caracteristicaindestinguivel, sizeof(char), quant, arquivo);
                    fclose(arquivo);
                    */

                }
                else if(ctr==n){
                    printf("Infelizmente continuarei a desconhecer sua persogem, obrigado por jogar!");
                }
                else{
                    printf("Erro no input do usuario");
                }
            }
        }
        if(opc==2){

        }
        if(opc==3){

        }
        if(opc==4){

        }
        printf("Escolha o seu destino: \n")
        printf("1 - Jogar\n");
        printf("2 - Adicionar personagem\n");
        printf("3 - Remover personagem\n");
        printf("4 - Histiorico de partidas\n");
        printf("5 - Sair\n");
        scanf("%d", opc);
    }
}