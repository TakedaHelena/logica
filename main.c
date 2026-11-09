#include<stdio.h>
#include<stdlib.h>

#define TAM_ARVORE 10000
#define TAM_NOME 100


// Inicializa a árvore limpando as strings (colocando vazio)
void inicializarArvore(char arvore[TAM_ARVORE][TAM_NOME]) {
    for (int i = 0; i < TAM_ARVORE; i++) {
        arvore[i][0] = '\0';
    }
}

//carrega dados da struct no arquivo
int storeStruct(struct aluno *p, int n){
    FILE *fp;
    fp = fopen("exemplo.txt", "a");
    if(fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        fclose(fp);
        fp = fopen("exemplo.txt", "a");
        fclose(fp);
        return 1;

    }
    
    fclose(fp);
    return 0;
}

//carrega dados da struct no arquivo
int storeStructH(struct aluno *p, int n){
    FILE *fp;
    fp = fopen("Hist.txt", "r");
    if(fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        fclose(fp);
        fp = fopen("Hist.txt", "a");
        fclose(fp);
        return 1;

    }
    
    fclose(fp);
    return 0;
}
     /*
        //*carrega dados do arquivo na struct
        int loadStruct(struct aluno *p, int n){
            FILE *fp;
            fp = fopen("exemplo.txt", "r");
            if(fp == NULL){
                printf("Erro na abertura do arquivo.\n");
                fclose(fp);
                fp = fopen("exemplo.txt", "a");
                fclose(fp);
                return 0;
            }
            for(int i = 0; i < n; i++){
                if(fscanf(fp,"%d\\n", &p[i].mat, &p[i].n1, &p[i].n2, &p[i].n3, &p[i].media) == EOF){
                    break;
                }
            }
            return 0;
        }
    */
    
// Adiciona um nome em uma posição específica
void adicionarNome(char arvore[TAM_ARVORE][TAM_NOME], int indice, const char *nome) {
    if (indice >= TAM_ARVORE) {
        printf("Erro: Índice %d fora dos limites da árvore!\n", indice);
        return;
    }


    strncpy(arvore[indice], nome, TAM_NOME - 1);
    arvore[indice][TAM_NOME - 1] = '\0'; // Garante o caractere nulo no fim
    printf("'%s' adicionado na posição %d\n", nome, indice);
}

    
// Exibe a árvore de forma sequencial
void exibirArvore(char arvore[TAM_ARVORE][TAM_NOME]) {
    printf("\n--- Estrutura do Vetor ---\n");
    for (int i = 0; i < TAM_ARVORE; i++) {
        if (arvore[i][0] != '\0') {
            int esq = 2 * i + 1;
            int dir = 2 * i + 2;


            printf("[%d] Nó: %s", i, arvore[i]);


            if (esq < TAM_ARVORE && arvore[esq][0] != '\0') printf(" | Esq (%d): %s", esq, arvore[esq]);
            if (dir < TAM_ARVORE && arvore[dir][0] != '\0') printf(" | Dir (%d): %s", dir, arvore[dir]);


            printf("\n");
        }
    }
}


int main() 
    //struct aluno vet[1022];
    int opc, quant;
    char ctr, caracteristicaindestinguivel[21];
    printf("Escolha o seu destino: \n")
    printf("1 - Jogar\n");
    printf("2 - Adicionar personagem\n");
    printf("3 - Mostrar arvore binaria\n");
    printf("4 - Historico de partidas\n");
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
                if(ctr==s || ctr==S){
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
                else if(ctr==n || ctr==N){
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
            exibirArvore(arvore);

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
        
        //storeStruct(vet, 3);*/
        //loadStruct(vet,3);
    }
return 0;
