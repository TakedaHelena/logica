#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM_ARVORE 10000
#define TAM_NOME 100

char arvore[TAM_ARVORE][TAM_NOME];

// Inicializa a arvore limpando as strings (colocando vazio)
void inicializarArvore(char arvore[TAM_ARVORE][TAM_NOME]) {
    for (int i = 0; i < TAM_ARVORE; i++) {
        arvore[i][0] = '\0';
    }
}

//carrega dados da struct no arquivo do historico
int guardarHist(char *hist) {
    FILE *fp = fopen("Hist.txt", "a");
    if (fp == NULL) {
        printf("Erro na criacao/abertura do arquivo.\n");
        return 1;
    }
    fprintf(fp, "%s\n", hist);
    fclose(fp);
    return 0; 
}

void mandaHistoria(const char *hist) {
    FILE *fp = fopen(hist, "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", hist);
        return;
    }
    char linha[250]; 
    while (fgets(linha, sizeof(linha), fp) != NULL) {
        printf("%s", linha);
    }
    fclose(fp);
}

/*
//isso aqui eh pra arvore binaria, no comeco e no fim do codigo, respectivamente
    //carrega dados no vetor principal
    int loadStruct(char *arvore){
        FILE *fp;
        fp = fopen("ArvBin.txt", "r");
        if(fp == NULL){
            printf("Erro na abertura do arquivo.\n");
            fclose(fp);
            fp = fopen("ArvBin.txt", "a");
            fclose(fp);
            return 0;
        }
        for(int i = 0; i < TAM_ARVORE; i++){
            if(fscanf(fp,"%d\\n", &p[i]) == EOF){
                break;
            }
        }
        return 0;
    }
    //carrega dados da struct no arquivo
    int storeStruct(char *arvore){
        FILE *fp;
        fp = fopen("ArvBin.txt", "a");
        if(fp == NULL){
            printf("Erro na abertura do arquivo.\n");
            fclose(fp);
            fp = fopen("ArvBin.txt", "a");
            fclose(fp);
            return 1;

        }
        
        fclose(fp);
        return 0;
    }
*/
    
// Adiciona um nome em uma posicao especifica
void adicionarNome(char arvore[TAM_ARVORE][TAM_NOME], int indice, const char *nome) {
    if (indice >= TAM_ARVORE) {
        printf("Erro: Indice %d fora dos limites da arvore!\n", indice);
        return;
    }

    strncpy(arvore[indice], nome, TAM_NOME - 1);
    arvore[indice][TAM_NOME - 1] = '\0'; // Garante o caractere nulo no fim
    printf("'%s' adicionado na posicao %d\n", nome, indice);
}

//loada a arvore inteira do arquivo
void fazerArvore(char arvore[TAM_ARVORE][TAM_NOME]){
    int i=0;
    char guardar, buffer[151];
    FILE *arvbin = fopen("ArvBin.txt", "r");
    while (fscanf(arvbin, "%c", &guardar) != EOF) {
        if (fgets(buffer, sizeof(buffer), arvbin) != NULL) {
            if(i<11){
                char *formatado = buffer + 9;
                int tam = strlen(formatado);
                formatado[tam-2] = '\0';
                adicionarNome(arvore, i, formatado);
            }
            else if(i<101){
                char *formatado = buffer + 10;
                int tam = strlen(formatado);
                formatado[tam-2] = '\0';
                adicionarNome(arvore, i, formatado);
            }
            else if(i<1001){
                char *formatado = buffer + 11;
                int tam = strlen(formatado);
                formatado[tam-2] = '\0';
                adicionarNome(arvore, i, formatado);
            }
            else {
                char *formatado = buffer + 12;
                int tam = strlen(formatado);
                formatado[tam-2] = '\0';
                adicionarNome(arvore, i, formatado);
            }
        }
        i++;
    }
    fclose(arvbin);
}

// Exibe a arvore de forma sequencial
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


int main() {
    char interrogacao[2]="?";
    int opc, quant, tama, lenght, i=0, ie, j, esq, dir;
    char ctr, vef='?', buffer, carac[212], nome[21], nomeCerto[21];
    char hist[151];
    printf("Escolha o seu destino: \n");
    printf("1 - Jogar\n");
    printf("2 - Adicionar personagem\n");
    printf("3 - Mostrar arvore binaria\n");
    printf("4 - Historico geral de partidas\n");
    printf("5 - Sair\n");
    scanf("%d", &opc);
    while(opc<5&&opc>0){
        if(opc==1){
            i=0;
            vef='?';
            fazerArvore(arvore);
            printf("Entao jogaremos, mero mortal");
            while(vef=='?'){
                tama = strlen(arvore[i])-1;
                vef = arvore[i][tama];
                printf("%s (s/n)", arvore[i]);
                scanf(" %c", &ctr);
                if(ctr=='s'||ctr=='S'){
                    int esq = 2 * i + 1;
                    i = esq;
                }
                else if(ctr=='n'||ctr=='N'){
                    int dir = 2 * i + 2;
                    i = dir;
                }
                else printf("Erro na leitura da opcao");
                tama = strlen(arvore[i]) - 1;
                vef = arvore[i][tama];
                if(vef!='?'){
                    printf("Seu personagem eh %s? (s/n)", arvore[i]);
                    strcpy(nomeCerto, arvore[i]);
                    scanf(" %c", &ctr);
                    if(ctr=='s'||ctr=='S'){
                        printf("Sabia! Te venci muito facil");
                        sprintf(hist, "Pessoa: %s - Acertada", arvore[i]);
                        guardarHist(hist);    
                    }
                    else if(ctr=='n'||ctr=='N'){
                        printf("Que pena, mas eu nao perdi, apenas desconheco a sua personagem, gostaria de fazer com que eu a conhecesse? (s/n)");
                        scanf(" %c", &ctr);
                        if(ctr=='s' || ctr=='S'){
                            char arrvore[151]="arvore";
                            j=0;
                            printf("Qual o nome da sua pessoa? ");
                            gets(nome);
                            sprintf(hist, "Pessoa: %s - Errada", nome);
                            guardarHist(hist);
                            printf("Me fale uma caracteristica indestinguivel de sua pessoa: ");
                            gets(carac);
                            strcat(carac, interrogacao);
                            quant = strlen(carac);
                            sprintf(arrvore, "arvore %d %s?\n", i, carac);
                            lenght = strlen(arrvore);
                            FILE *arvbin = fopen("ArvBin.txt", "a");
                            fwrite(arrvore, sizeof(char), lenght, arvbin);
                            esq = 2 * i + 1;
                            sprintf(arrvore, "arvore %d %s\n", esq, nome);
                            lenght = strlen(arrvore);
                            fwrite(arrvore, sizeof(char), lenght, arvbin);
                            dir = 2 * i + 2;
                            sprintf(arrvore, "arvore %d %s\n", dir, nomeCerto);
                            lenght = strlen(arrvore);
                            fwrite(arrvore, sizeof(char), lenght, arvbin);
                            printf("Pronto, agora eu conheco %s \n", nome);
                            fclose(arvbin);
                        }
                        else if(ctr=='n' || ctr=='N') {
                            printf("Infelizmente continuarei a desconhecer sua persogem, obrigado por jogar!");
                            strcpy(hist, "Pessoa desconhecida - Errada");
                            guardarHist(hist);
                        }  
                        else printf("Erro no input do usuario");
                    }
                }
            }
        }
        if(opc==2){
        }
        if(opc==3){
            printf("Aqui esta a arvore binaria neste exato momento \n \n");
            exibirArvore(arvore);
        }
        if(opc==4){
            printf("Aqui esta todo o meu historico de partidas: \n");
            mandaHistoria("Hist.txt");
        }
        printf("Escolha o seu destino: \n");
        printf("1 - Jogar\n");
        printf("2 - Adicionar personagem\n");
        printf("3 - Mostrar arvore binaria\n");
        printf("4 - Histiorico geral de partidas\n");
        printf("5 - Sair\n");
        scanf("%d", &opc);
        
        //storeStruct(vet, 3);
        //loadStruct(vet,3);
    }
return 0;
}
