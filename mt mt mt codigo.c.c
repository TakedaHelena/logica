#include <stdio.h>
#include <string.h>


#define TAM_ARVORE 10000
#define TAM_NOME 100


// Inicializa a árvore limpando as strings (colocando vazio)
void inicializarArvore(char arvore[TAM_ARVORE][TAM_NOME]) {
    for (int i = 0; i < TAM_ARVORE; i++) {
        arvore[i][0] = '\0';
    }
}


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


int main() {
    // Matriz de caracteres para simular o vetor de strings
    char arvore[TAM_ARVORE][TAM_NOME];


    inicializarArvore(arvore);


    // Inserindo elementos manualmente simulando uma árvore
    // Raiz (Posição 0)
    adicionarNome(arvore, 0, "Eh aluno?");


    // Filhos da Raiz (Posições 1 e 2)
    adicionarNome(arvore, 1, "Eh do sexo Masculino?");       // Aluno
    adicionarNome(arvore, 2, "Eh do sexo Masculino?");   // Professor


    //alunos
    // Filhos 1(Posições 3 e 4)
    adicionarNome(arvore, 3, "Usa oculos?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 4, "Usa oculos?");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 5 e 6)
    adicionarNome(arvore, 5, "Usa Oculos?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 6, "Usa Oculos?");   // Filho direito de Ana
    //----------------------------------------------------------//
/*
                             hhhh
                            hhhhhh
                             hhh




                hhhh                    hhhh
              hhhhhhh                  hhhhhh
                hhh                      hhh




         hh        hh            hh         hh
       hhhhh     hhhhhh       hhhhhhh      hhhhhh
         hh        hh            hh         hhhh
*/




     //alunos
    // Filhos 1(Posições 7 e 8)
    adicionarNome(arvore, 7, "Possui Cabelo Cacheado?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 8, "Fez o trabalho de artes com a musica Hear me Now? (bonequinhos brilhantes no escuro)");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 9 e 10)
    adicionarNome(arvore, 9, "Tem Descendencia Japonesa?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 10, "Tem Descendencia Japonesa?");   // Filho direito de Ana








    //professor
    // Filhos 1(Posições 11 e 12)
    adicionarNome(arvore, 11, "Da aula de Tecnico?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 12, "Da aula de Tcnico?");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 13 e 14)
    adicionarNome(arvore, 13, "Da aula de Tcnico?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 14, "Possui cabelo curto (impossível de prender)?");   // Filho direito de Ana
     //----------------------------------------------------------//
/*
                                 hhhh
                                hhhhhh
                                 hhh




                    hhhh                    hhhh
                  hhhhhhh                  hhhhhh
                    hhh                      hhh




             hh        hh            hh         hh
           hhhhh     hhhhhh       hhhhhhh      hhhhhh
             hh        hh            hh         hhhh


      hhh    hhh    hhh   hhh   / hhh    hhh     hhh    hhh




*/
















     //alunos
    // Filhos 1(Posições 15 e 16)
    adicionarNome(arvore, 15, "Eh repreentante de classe?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 16, "Possui descendencia asiatica?");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 17 e 18)
    adicionarNome(arvore, 17, "Possui cabelo claro?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 18, "Tem a letra E no nome?");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 19 e 20)
    adicionarNome(arvore, 19, "Aiko");     // Filho esquerdo de Ana
    adicionarNome(arvore, 20, "Possui cabelo cacheado?");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 21 e 22)
    adicionarNome(arvore, 21, "Helena");     // Filho esquerdo de Ana
    adicionarNome(arvore, 22, "Possui cabelo pintado aparente (até 05/10)?");   // Filho direito de Ana






     //professo
    // Filhos 1(Posições 23 e 24)
    adicionarNome(arvore, 23, "Eh canhoto?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 24, "Eh de humanas?");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 25 e 26)
    adicionarNome(arvore, 25, "Julio");     // Filho esquerdo de Ana
    adicionarNome(arvore, 26, "Ricardo");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 27 e 28)
    adicionarNome(arvore, 27, "Bianca");     // Filho esquerdo de Ana
    adicionarNome(arvore, 28, "Eh de humanas?");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 29 e 30)
    adicionarNome(arvore, 29, "Andrea");     // Filho esquerdo de Ana
    adicionarNome(arvore, 30, "Rosane");   // Filho direito de Ana


    /*
                                 hhhh
                                hhhhhh
                                 hhh




                    hhhh                    hhhh
                  hhhhhhh                  hhhhhh
                    hhh                      hhh




             hh        hh            hh         hh
           hhhhh     hhhhhh       hhhhhhh      hhhhhh
             hh        hh            hh         hhhh


      hhh    hhh    hhh   hhh   / hhh    hhh     hhh    hhh


    hh hh  hh hh  hh hh  hh hh   hh hh   hh hh  hh hh  hh hh
*/
    //alunos
    // Filhos 1(Posições 31 e 32)
    adicionarNome(arvore, 31, "Miguel Santana");     // Filho esquerdo de Ana
    adicionarNome(arvore, 32, "Sabe fazer barulho de gota?");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 33 e 34)
    adicionarNome(arvore, 33, "Eh representante do CONCAN?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 34, "Eh canhoto?");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 35 e 36)
    adicionarNome(arvore, 35, "Tocou flauta na aula?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 36, "Kaiky");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 37 e 38)
    adicionarNome(arvore, 37, "Nao tem cabelo cacheado?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 38, "Veio de escola com ensino Valdurf?");   // Filho direito de Ana


    // Filhos 1(Posições 39 e 40)
    adicionarNome(arvore, 39, "Aiko");     // Filho esquerdo de Ana
    adicionarNome(arvore, 40, "Aiko");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 41 e 42)
    adicionarNome(arvore, 41, "Senta na primeira fileira?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 42, "Fez kpop no trabalho de artes?");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 43 e 44)
    adicionarNome(arvore, 43, "Helena");     // Filho esquerdo de Ana
    adicionarNome(arvore, 44, "Helena");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 45 e 46)
    adicionarNome(arvore, 45, "Possui duas letras repetidas em sequencia dentro do próprio nome?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 46, "Estudou anteriormente com o Gilberto?");   // Filho direito de Ana






     //professor
    // Filhos 1(Posições 47 e 48)
    adicionarNome(arvore, 47, "Diego");     // Filho esquerdo de Ana
    adicionarNome(arvore, 48, "Danilo");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 49 e 50)
    adicionarNome(arvore, 49, "Vem de moto pra escola?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 50, "Da mais de duas aulas na semana?");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 51 e 52)
    adicionarNome(arvore, 51, "Julio");     // Filho esquerdo de Ana
    adicionarNome(arvore, 52, "Julio");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 53 e 54)
    adicionarNome(arvore, 53, "Ricardo");     // Filho esquerdo de Ana
    adicionarNome(arvore, 54, "Ricardo");   // Filho direito de Ana


    // Filhos 1(Posições 55 e 56)
    adicionarNome(arvore, 55, "Bianca");     // Filho esquerdo de Ana
    adicionarNome(arvore, 56, "Bianca");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 57 e 58)
    adicionarNome(arvore, 57, "Da mais de duas aulas na semana?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 58, "Tem filho (Fantoche)?");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 59 e 60)
    adicionarNome(arvore, 59, "Andrea");     // Filho esquerdo de Ana
    adicionarNome(arvore, 60, "Andrea");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 61 e 62)
    adicionarNome(arvore, 61, "Rosane");     // Filho esquerdo de Ana
    adicionarNome(arvore, 62, "Rosane");   // Filho direito de Ana
    /*
                                                                   hhhh
                                                                  hhhhhh
                                                                    hhh




                      hhhh                                                                        hhhh
                    hhhhhhh                                                                      hhhhhh
                      hhh                                                                         hhh




             hh           hh                                                                   hh         hh
           hhhhh        hhhhhh                                                              hhhhhhh      hhhhhh
             hh           hh                                                                   hh         hhhh


                       hhh    hhh    hhh   hhh                       /                       hhh    hhh     hhh    hhh


    hh hh  hh hh  hh hh  hh hh                                                             hh hh   hh hh  hh hh  hh hh
h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h                h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h
*/




     //alunos
    // Filhos 1(Posições 63 e 64)
    adicionarNome(arvore, 63, "Miguel Santana");     // Filho esquerdo de Ana
    adicionarNome(arvore, 64, "Miguel Santana");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 65 e 66)
    adicionarNome(arvore, 65, "Gabriel Teodoro");     // Filho esquerdo de Ana
    adicionarNome(arvore, 66, "Tem namoro publico?");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 67 e 68)
    adicionarNome(arvore, 67, "Lucas Miura");     // Filho esquerdo de Ana
    adicionarNome(arvore, 68, "Rafael Toshio");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 69 e 70)
    adicionarNome(arvore, 69, "Miguel Nunes");     // Filho esquerdo de Ana
    adicionarNome(arvore, 70, "Eh a pessoa mais alta do 1 info?");   // Filho direito de Ana


    // Filhos 1(Posições 71 e 72)
    adicionarNome(arvore, 71, "Felipe");     // Filho esquerdo de Ana
    adicionarNome(arvore, 72, "Lucas Clevelaro");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 73 e 74)
    adicionarNome(arvore, 73, "Kaiky");     // Filho esquerdo de Ana
    adicionarNome(arvore, 74, "Kaiky");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 75 e 76)
    adicionarNome(arvore, 75, "Breno");     // Filho esquerdo de Ana
    adicionarNome(arvore, 76, "O nome comeca com G?");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 77 e 78)
    adicionarNome(arvore, 77, "Ravi");     // Filho esquerdo de Ana
    adicionarNome(arvore, 78, "Normalmente senta na frente?");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 79 e 80)
    adicionarNome(arvore, 79, "Aiko");     // Filho esquerdo de Ana
    adicionarNome(arvore, 80, "Aiko");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 81 e 82)
    adicionarNome(arvore, 81, "Aiko");     // Filho esquerdo de Ana
    adicionarNome(arvore, 82, "Aiko");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 83 e 84)
    adicionarNome(arvore, 83, "Micaela");     // Filho esquerdo de Ana
    adicionarNome(arvore, 84, "Iara");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 85 e 86)
    adicionarNome(arvore, 85, "Alice vilarvas");     // Filho esquerdo de Ana
    adicionarNome(arvore, 86, "Alice vitória");   // Filho direito de Ana


    // Filhos 1(Posições 87 e 88)
    adicionarNome(arvore, 87, "Helena");     // Filho esquerdo de Ana
    adicionarNome(arvore, 88, "Helena");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 89 e 90)
    adicionarNome(arvore, 89, "Helena");     // Filho esquerdo de Ana
    adicionarNome(arvore, 90, "Helena");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 91 e 92)
    adicionarNome(arvore, 91, "Toca baixo?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 92, "Tem botton na bolsa?");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 93 e 94)
    adicionarNome(arvore, 93, "Yasmin");     // Filho esquerdo de Ana
    adicionarNome(arvore, 94, "Beatriz");   // Filho direito de Ana












     //professor
    // Filhos 1(Posições 95 e 96)
    adicionarNome(arvore, 95, "Diego");     // Filho esquerdo de Ana
    adicionarNome(arvore, 96, "Diego");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 97 e 98)
    adicionarNome(arvore, 97, "Danilo");     // Filho esquerdo de Ana
    adicionarNome(arvore, 98, "Danilo");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 99 e 100)
    adicionarNome(arvore, 99, "Matheus");     // Filho esquerdo de Ana
    adicionarNome(arvore, 100, "Ivo");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 101 e 102)
    adicionarNome(arvore, 101, "Carlos");     // Filho esquerdo de Ana
    adicionarNome(arvore, 102, "Clewton");   // Filho direito de Ana


    // Filhos 1(Posições 103 e 104)
    adicionarNome(arvore, 103, "Julio");     // Filho esquerdo de Ana
    adicionarNome(arvore, 104, "Julio");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 105 e 106)
    adicionarNome(arvore, 105, "Julio");     // Filho esquerdo de Ana
    adicionarNome(arvore, 106, "Julio");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 107 e 108)
    adicionarNome(arvore, 107, "Ricardo");     // Filho esquerdo de Ana
    adicionarNome(arvore, 108, "Ricardo");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 109 e 110)
    adicionarNome(arvore, 109, "Ricardo");     // Filho esquerdo de Ana
    adicionarNome(arvore, 110, "Ricardo");   // Filho direito de Ana




     //professor
    // Filhos 1(Posições 111 e 112)
    adicionarNome(arvore, 111, "Bianca");     // Filho esquerdo de Ana
    adicionarNome(arvore, 112, "Bianca");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 113 e 114)
    adicionarNome(arvore, 113, "Bianca");     // Filho esquerdo de Ana
    adicionarNome(arvore, 114, "Bianca");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 115 e 116)
    adicionarNome(arvore, 115, "Gluacia");     // Filho esquerdo de Ana
    adicionarNome(arvore, 116, "Fez pesca na aula?");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 117 e 118)
    adicionarNome(arvore, 117, "Milena");     // Filho esquerdo de Ana
    adicionarNome(arvore, 118, "Noemy");   // Filho direito de Ana


    // Filhos 1(Posições 119 e 120)
    adicionarNome(arvore, 119, "Andrea");     // Filho esquerdo de Ana
    adicionarNome(arvore, 120, "Andrea");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 121 e 122)
    adicionarNome(arvore, 121, "Andrea");     // Filho esquerdo de Ana
    adicionarNome(arvore, 122, "Andrea");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 123 e 124)
    adicionarNome(arvore, 123, "Rosana");     // Filho esquerdo de Ana
    adicionarNome(arvore, 124, "Rosana");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 125 e 126)
    adicionarNome(arvore, 125, "Rosane");     // Filho esquerdo de Ana
    adicionarNome(arvore, 126, "Rosane");   // Filho direito de Ana


    /*
                                                                                                                       hhhh
                                                                                                                      hhhhhh
                                                                                                                        hhh




                      hhhh                                                                        hhhh
                    hhhhhhh                                                                      hhhhhh
                      hhh                                                                         hhh




             hh           hh                                                                                                                                                                                            hh         hh
           hhhhh        hhhhhh                                                                                                                                                                                      hh hhhhh      hhhhhh
             hh           hh                                                                                                                                                                                     hh         hhhh


                       hhh    hhh    hhh   hhh                       /                                                                                                                     hhh    hhh     hhh    hhh


    hh hh  hh hh  hh hh  hh hh                                                                                                                                                          hh hh   hh hh  hh hh  hh hh
h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h                                                                                                           h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h
h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h / h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h
*/
//alunos
    // Filhos 1(Posições 127 e 128)
    adicionarNome(arvore, 127, "Miguel Santana");     // Filho esquerdo de Ana
    adicionarNome(arvore, 128, "Miguel Santana");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 129 e 130)
    adicionarNome(arvore, 129, "Miguel Santana");     // Filho esquerdo de Ana
    adicionarNome(arvore, 130, "Miguel Santana");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 131 e 132)
    adicionarNome(arvore, 131, "Gabriel Teodoro");     // Filho esquerdo de Ana
    adicionarNome(arvore, 132, "Gabriel Teodoro");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 133 e 134)
    adicionarNome(arvore, 133, "Enzo");     // Filho esquerdo de Ana
    adicionarNome(arvore, 134, "Ezequiel");   // Filho direito de Ana


    // Filhos 1(Posições 135 e 136)
    adicionarNome(arvore, 135, "Lucas Miura");     // Filho esquerdo de Ana
    adicionarNome(arvore, 136, "Lucas Miura");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 137 e 138)
    adicionarNome(arvore, 137, "Rafael Toshio");     // Filho esquerdo de Ana
    adicionarNome(arvore, 138, "Rafael Toshio");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 139 e 140)
    adicionarNome(arvore, 139, "Pedro");     // Filho esquerdo de Ana
    adicionarNome(arvore, 140, "Eh um nome extremamente comum?");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 141 e 142)
    adicionarNome(arvore, 141, "Miguel Nunes");     // Filho esquerdo de Ana
    adicionarNome(arvore, 142, "Miguel Nunes");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 143 e 144)
    adicionarNome(arvore, 143, "Felipe");     // Filho esquerdo de Ana
    adicionarNome(arvore, 144, "Felipe");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 145 e 146)
    adicionarNome(arvore, 145, "Lucas Clevelaro");     // Filho esquerdo de Ana
    adicionarNome(arvore, 146, "Lucas Clevelaro");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 147 e 148)
    adicionarNome(arvore, 147, "Kaiky");     // Filho esquerdo de Ana
    adicionarNome(arvore, 148, "Kaiky");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 149 e 150)
    adicionarNome(arvore, 149, "Kaiky");     // Filho esquerdo de Ana
    adicionarNome(arvore, 150, "Kaiky");   // Filho direito de Ana


    // Filhos 1(Posições 151 e 152)
    adicionarNome(arvore, 151, "Breno");     // Filho esquerdo de Ana
    adicionarNome(arvore, 152, "Breno");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 153 e 154)
    adicionarNome(arvore, 153, "Tem o mesmo sobrenome de outro aluno da sala?");     // Filho esquerdo de Ana
    adicionarNome(arvore, 154, "O nome tem tres silabas?");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 155 e 156)
    adicionarNome(arvore, 155, "Ravi");     // Filho esquerdo de Ana
    adicionarNome(arvore, 156, "Ravi");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 157 e 158)
    adicionarNome(arvore, 157, "Pablo");     // Filho esquerdo de Ana
    adicionarNome(arvore, 158, "Luis");   // Filho direito de Ana


    // Filhos 1(Posições 159 e 160)
    adicionarNome(arvore, 159, "Aiko");     // Filho esquerdo de Ana
    adicionarNome(arvore, 160, "Aiko");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 161 e 162)
    adicionarNome(arvore, 161, "Aiko");     // Filho esquerdo de Ana
    adicionarNome(arvore, 162, "Aiko");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 163 e 164)
    adicionarNome(arvore, 163, "Aiko");     // Filho esquerdo de Ana
    adicionarNome(arvore, 164, "Aiko");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 165 e 166)
    adicionarNome(arvore, 165, "Aiko");     // Filho esquerdo de Ana
    adicionarNome(arvore, 166, "Aiko");   // Filho direito de Ana


    // Filhos 1(Posições 167 e 168)
    adicionarNome(arvore, 167, "Micaela");     // Filho esquerdo de Ana
    adicionarNome(arvore, 168, "Micaela");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 169 e 170)
    adicionarNome(arvore, 169, "Iara");     // Filho esquerdo de Ana
    adicionarNome(arvore, 170, "Iara");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 171 e 172)
    adicionarNome(arvore, 171, "Alice Vilarvas");     // Filho esquerdo de Ana
    adicionarNome(arvore, 172, "Alice Vilarvas");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 173 e 174)
    adicionarNome(arvore, 173, "Alice Vitoria");     // Filho esquerdo de Ana
    adicionarNome(arvore, 174, "Alice Vitoria");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 175 e 176)
    adicionarNome(arvore, 175, "Helena");     // Filho esquerdo de Ana
    adicionarNome(arvore, 176, "Helena");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 177 e 178)
    adicionarNome(arvore, 177, "Helena");     // Filho esquerdo de Ana
    adicionarNome(arvore, 178, "Helena");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 179 e 180)
    adicionarNome(arvore, 179, "Helena");     // Filho esquerdo de Ana
    adicionarNome(arvore, 180, "Helena");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 181 e 182)
    adicionarNome(arvore, 181, "Helena");     // Filho esquerdo de Ana
    adicionarNome(arvore, 182, "Helena");   // Filho direito de Ana


    // Filhos 1(Posições 183 e 184)
    adicionarNome(arvore, 183, "Isabella");     // Filho esquerdo de Ana
    adicionarNome(arvore, 184, "Gabrielle");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 185 e 186)
    adicionarNome(arvore, 185, "Sofia");     // Filho esquerdo de Ana
    adicionarNome(arvore, 186, "Isadora");   // Filho direito de Ana


     //alunos
    // Filhos 1(Posições 187 e 188)
    adicionarNome(arvore, 187, "Yasmin");     // Filho esquerdo de Ana
    adicionarNome(arvore, 188, "Yasmin");   // Filho direito de Ana


    //aluno
    // Filhos 2 (Posições 189 e 190)
    adicionarNome(arvore, 189, "Beatriz");     // Filho esquerdo de Ana
    adicionarNome(arvore, 190, "Beatriz");   // Filho direito de Ana










     //professor
    // Filhos 1(Posições 191 e 192)
    adicionarNome(arvore, 191, "Diego");     // Filho esquerdo de Ana
    adicionarNome(arvore, 192, "Diego");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 193 e 194)
    adicionarNome(arvore, 193, "Diego");     // Filho esquerdo de Ana
    adicionarNome(arvore, 194, "Diego");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 195 e 196)
    adicionarNome(arvore, 195, "Danilo");     // Filho esquerdo de Ana
    adicionarNome(arvore, 196, "Danilo");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 197 e 198)
    adicionarNome(arvore, 197, "Danilo");     // Filho esquerdo de Ana
    adicionarNome(arvore, 198, "Danilo");   // Filho direito de Ana


    // Filhos 1(Posições 199 e 200)
    adicionarNome(arvore, 199, "Matheus");     // Filho esquerdo de Ana
    adicionarNome(arvore, 200, "Matheus");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 201 e 202)
    adicionarNome(arvore, 201, "Ivo");     // Filho esquerdo de Ana
    adicionarNome(arvore, 202, "Ivo");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 203 e 204)
    adicionarNome(arvore, 203, "Carlos");     // Filho esquerdo de Ana
    adicionarNome(arvore, 204, "Carlos");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 205 e 206)
    adicionarNome(arvore, 205, "Clewton");     // Filho esquerdo de Ana
    adicionarNome(arvore, 206, "Clewton");   // Filho direito de Ana




     //professor
    // Filhos 1(Posições 207 e 208)
    adicionarNome(arvore, 207, "Julio");     // Filho esquerdo de Ana
    adicionarNome(arvore, 208, "Julio");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 209 e 210)
    adicionarNome(arvore, 209, "Julio");     // Filho esquerdo de Ana
    adicionarNome(arvore, 210, "Julio");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 211 e 212)
    adicionarNome(arvore, 211, "Julio");     // Filho esquerdo de Ana
    adicionarNome(arvore, 212, "Julio");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 213 e 214)
    adicionarNome(arvore, 213, "Julio");     // Filho esquerdo de Ana
    adicionarNome(arvore, 214, "Julio");   // Filho direito de Ana


    // Filhos 1(Posições 215 e 216)
    adicionarNome(arvore, 215, "Ricardo");     // Filho esquerdo de Ana
    adicionarNome(arvore, 216, "Ricardo");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 217 e 218)
    adicionarNome(arvore, 217, "Ricardo");     // Filho esquerdo de Ana
    adicionarNome(arvore, 218, "Ricardo");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 219 e 220)
    adicionarNome(arvore, 219, "Ricardo");     // Filho esquerdo de Ana
    adicionarNome(arvore, 220, "Ricardo");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 221 e 222)
    adicionarNome(arvore, 221, "Ricardo");     // Filho esquerdo de Ana
    adicionarNome(arvore, 222, "Ricardo");   // Filho direito de Ana


    //professor
    // Filhos 1(Posições 223 e 224)
    adicionarNome(arvore, 223, "Bianca");     // Filho esquerdo de Ana
    adicionarNome(arvore, 224, "Bianca");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 225 e 226)
    adicionarNome(arvore, 225, "Bianca");     // Filho esquerdo de Ana
    adicionarNome(arvore, 226, "Bianca");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 227 e 228)
    adicionarNome(arvore, 227, "Bianca");     // Filho esquerdo de Ana
    adicionarNome(arvore, 228, "Bianca");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 229 e 230)
    adicionarNome(arvore, 229, "Bianca");     // Filho esquerdo de Ana
    adicionarNome(arvore, 230, "Bianca");   // Filho direito de Ana


    // Filhos 1(Posições 231 e 232)
    adicionarNome(arvore, 231, "Glaucia");     // Filho esquerdo de Ana
    adicionarNome(arvore, 232, "Glaucia");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 233 e 234)
    adicionarNome(arvore, 233, "Solange");     // Filho esquerdo de Ana
    adicionarNome(arvore, 234, "Stella");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 235 e 236)
    adicionarNome(arvore, 235, "Milena");     // Filho esquerdo de Ana
    adicionarNome(arvore, 236, "Milena");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 237 e 238)
    adicionarNome(arvore, 237, "Noemy");     // Filho esquerdo de Ana
    adicionarNome(arvore, 238, "Noemy");   // Filho direito de Ana




     //professor
    // Filhos 1(Posições 239 e 240)
    adicionarNome(arvore, 239, "Andrea");     // Filho esquerdo de Ana
    adicionarNome(arvore, 240, "Andrea");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 241 e 242)
    adicionarNome(arvore, 241, "Andrea");     // Filho esquerdo de Ana
    adicionarNome(arvore, 242, "Andrea");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 243 e 244)
    adicionarNome(arvore, 243, "Andrea");     // Filho esquerdo de Ana
    adicionarNome(arvore, 244, "Andrea");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 245 e 246)
    adicionarNome(arvore, 245, "Andrea");     // Filho esquerdo de Ana
    adicionarNome(arvore, 246, "Andrea");   // Filho direito de Ana


    // Filhos 1(Posições 247 e 248)
    adicionarNome(arvore, 247, "Rosane");     // Filho esquerdo de Ana
    adicionarNome(arvore, 248, "Rosane");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 249 e 250)
    adicionarNome(arvore, 249, "Rosane");     // Filho esquerdo de Ana
    adicionarNome(arvore, 250, "Rosane");   // Filho direito de Ana


     //professo
    // Filhos 1(Posições 251 e 252)
    adicionarNome(arvore, 251, "Rosane");     // Filho esquerdo de Ana
    adicionarNome(arvore, 252, "Rosane");   // Filho direito de Ana


    //professores
    // Filhos 2 (Posições 253 e 254)
    adicionarNome(arvore, 253, "Rosane");     // Filho esquerdo de Ana
    adicionarNome(arvore, 254, "Rosane");   // Filho direito de Ana
    // Exibe o resultado


    /*
                                                                                                                       hhhh
                                                                                                                      hhhhhh
                                                                                                                        hhh




                      hhhh                                                                        hhhh
                    hhhhhhh                                                                      hhhhhh
                      hhh                                                                         hhh




             hh           hh                                                                                                                                                                                            hh         hh
           hhhhh        hhhhhh                                                                                                                                                                                      hh hhhhh      hhhhhh
             hh           hh                                                                                                                                                                                     hh         hhhh


                       hhh    hhh    hhh   hhh                       /                                                                                                                     hhh    hhh     hhh    hhh


    hh hh  hh hh  hh hh  hh hh                                                                                                                                                          hh hh   hh hh  hh hh  hh hh
h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h                                                                                                           h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h
h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h / h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h
h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h / h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h
*/
    //alunos
        // Filhos 1(Posições 255 e 256)
        adicionarNome(arvore, 255, "Miguel Santana");     // Filho esquerdo de Ana
        adicionarNome(arvore, 256, "Miguel Santana");   // Filho direito de Ana


        //aluno
        // Filhos 2 (Posições 257 e 258)
        adicionarNome(arvore, 257, "Miguel Santana");     // Filho esquerdo de Ana
        adicionarNome(arvore, 258, "Miguel Santana");   // Filho direito de Ana


        //alunos
        // Filhos 1(Posições 259 e 260)
        adicionarNome(arvore, 259, "Miguel Santana");     // Filho esquerdo de Ana
        adicionarNome(arvore, 260, "Miguel Santana");   // Filho direito de Ana


        //aluno
        // Filhos 2 (Posições 261 e 262)
        adicionarNome(arvore, 261, "Miguel Santana");     // Filho esquerdo de Ana
        adicionarNome(arvore, 262, "Miguel Santana");   // Filho direito de Ana


        // Filhos 1(Posições 263 e 264)
        adicionarNome(arvore, 263, "Gabriel Teodoro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 264, "Gabriel Teodoro");   // Filho direito de Ana


        //aluno
        // Filhos 2 (Posições 265 e 266)
        adicionarNome(arvore, 265, "Gabriel Teodoro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 266, "Gabriel Teodoro");   // Filho direito de Ana


        //alunos
        // Filhos 1(Posições 267 e 268)
        adicionarNome(arvore, 267, "Enzo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 268, "Enzo");   // Filho direito de Ana


        //aluno
        // Filhos 2 (Posições 269 e 270)
        adicionarNome(arvore, 269, "Ezequiel");     // Filho esquerdo de Ana
        adicionarNome(arvore, 270, "Ezequiel");   // Filho direito de Ana


        //alunos
        // Filhos 1(Posições 271 e 272)
        adicionarNome(arvore, 271, "Lucas Miura");     // Filho esquerdo de Ana
        adicionarNome(arvore, 272, "Lucas Miura");   // Filho direito de Ana


        //aluno
        // Filhos 2 (Posições 273 e 274)
        adicionarNome(arvore, 273, "Lucas Miura");     // Filho esquerdo de Ana
        adicionarNome(arvore, 274, "Lucas Miura");   // Filho direito de Ana


        //alunos
        // Filhos 1(Posições 275 e 276)
        adicionarNome(arvore, 275, "Rafael Toshio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 276, "Rafael Toshio");   // Filho direito de Ana


        //aluno
        // Filhos 2 (Posições 277 e 278)
        adicionarNome(arvore, 277, "Rafael Toshio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 278, "Rafael Toshio");   // Filho direito de Ana


        // Filhos 1 (Posições 279 e 280) - Deixados em branco
        adicionarNome(arvore, 279, "Pedro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 280, "Pedro");     // Filho direito de Ana


        // Filhos 2 (Posições 281 e 282)
        adicionarNome(arvore, 281, "Joao");     // Filho esquerdo de Ana
        adicionarNome(arvore, 282, "Esta sempre de Bone?");   // Filho direito de Ana


        // Filhos 1 (Posições 283 e 284)
        adicionarNome(arvore, 283, "Miguel Nunes");     // Filho esquerdo de Ana
        adicionarNome(arvore, 284, "Miguel Nunes");   // Filho direito de Ana


        // Filhos 2 (Posições 285 e 286)
        adicionarNome(arvore, 285, "Miguel Nunes");     // Filho esquerdo de Ana
        adicionarNome(arvore, 286, "Miguel Nunes");   // Filho direito de Ana


        // Filhos 1 (Posições 287 e 288)
        adicionarNome(arvore, 287, "Felipe");     // Filho esquerdo de Ana
        adicionarNome(arvore, 288, "Felipe");   // Filho direito de Ana


        // Filhos 2 (Posições 289 e 290)
        adicionarNome(arvore, 289, "Felipe");     // Filho esquerdo de Ana
        adicionarNome(arvore, 290, "Felipe");   // Filho direito de Ana


        // Filhos 1 (Posições 291 e 292)
        adicionarNome(arvore, 291, "Lucas Clevelaro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 292, "Lucas Clevelaro");   // Filho direito de Ana


        // Filhos 2 (Posições 293 e 294)
        adicionarNome(arvore, 293, "Lucas Clevelaro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 294, "Lucas Clevelaro");   // Filho direito de Ana


        // Filhos 1 (Posições 295 e 296)
        adicionarNome(arvore, 295, "Kaiky");     // Filho esquerdo de Ana
        adicionarNome(arvore, 296, "Kaiky");   // Filho direito de Ana


        // Filhos 2 (Posições 297 e 298)
        adicionarNome(arvore, 297, "Kaiky");     // Filho esquerdo de Ana
        adicionarNome(arvore, 298, "Kaiky");   // Filho direito de Ana


        // Filhos 1 (Posições 299 e 300)
        adicionarNome(arvore, 299, "Kaiky");     // Filho esquerdo de Ana
        adicionarNome(arvore, 300, "Kaiky");   // Filho direito de Ana


        // Filhos 2 (Posições 301 e 302)
        adicionarNome(arvore, 301, "Kaiky");     // Filho esquerdo de Ana
        adicionarNome(arvore, 302, "Kaiky");   // Filho direito de Ana


        // Filhos 1 (Posições 303 e 304)
        adicionarNome(arvore, 303, "Breno");     // Filho esquerdo de Ana
        adicionarNome(arvore, 304, "Breno");   // Filho direito de Ana


        // Filhos 2 (Posições 305 e 306)
        adicionarNome(arvore, 305, "Breno");     // Filho esquerdo de Ana
        adicionarNome(arvore, 306, "Breno");   // Filho direito de Ana


        // Filhos 1 (Posições 307 e 308)
        adicionarNome(arvore, 307, "Gabriel Nunes");     // Filho esquerdo de Ana
        adicionarNome(arvore, 308, "Guilherme");   // Filho direito de Ana


        // Filhos 2 (Posições 309 e 310)
        adicionarNome(arvore, 309, "Hélio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 310, "Theo");   // Filho direito de Ana


        // Filhos 1 (Posições 311 e 312)
        adicionarNome(arvore, 311, "Ravi");     // Filho esquerdo de Ana
        adicionarNome(arvore, 312, "Ravi");   // Filho direito de Ana


        // Filhos 2 (Posições 313 e 314)
        adicionarNome(arvore, 313, "Ravi");     // Filho esquerdo de Ana
        adicionarNome(arvore, 314, "Ravi");   // Filho direito de Ana


        // Filhos 1 (Posições 315 e 316)
        adicionarNome(arvore, 315, "Pablo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 316, "Pablo");   // Filho direito de Ana


        // Filhos 2 (Posições 317 e 318)
        adicionarNome(arvore, 317, "Luis");     // Filho esquerdo de Ana
        adicionarNome(arvore, 318, "Luis");   // Filho direito de Ana


        // Filhos 1 (Posições 319 e 320)
        adicionarNome(arvore, 319, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 320, "Aiko");   // Filho direito de Ana


        // Filhos 2 (Posições 321 e 322)
        adicionarNome(arvore, 321, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 322, "Aiko");   // Filho direito de Ana


        // Filhos 1 (Posições 323 e 324)
        adicionarNome(arvore, 323, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 324, "Aiko");   // Filho direito de Ana


        // Filhos 2 (Posições 325 e 326)
        adicionarNome(arvore, 325, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 326, "Aiko");   // Filho direito de Ana


        // Filhos 1 (Posições 327 e 328)
        adicionarNome(arvore, 327, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 328, "Aiko");   // Filho direito de Ana


        // Filhos 2 (Posições 329 e 330)
        adicionarNome(arvore, 329, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 330, "Aiko");   // Filho direito de Ana


        // Filhos 1 (Posições 331 e 332)
        adicionarNome(arvore, 331, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 332, "Aiko");   // Filho direito de Ana


        // Filhos 2 (Posições 333 e 334)
        adicionarNome(arvore, 333, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 334, "Aiko");   // Filho direito de Ana


        // Filhos 1 (Posições 335 e 336)
        adicionarNome(arvore, 335, "Micaela");     // Filho esquerdo de Ana
        adicionarNome(arvore, 336, "Micaela");   // Filho direito de Ana


        // Filhos 2 (Posições 337 e 338)
        adicionarNome(arvore, 337, "Micaela");     // Filho esquerdo de Ana
        adicionarNome(arvore, 338, "Micaela");   // Filho direito de Ana


        // Filhos 1 (Posições 339 e 340)
        adicionarNome(arvore, 339, "Iara");     // Filho esquerdo de Ana
        adicionarNome(arvore, 340, "Iara");   // Filho direito de Ana


        // Filhos 2 (Posições 341 e 342)
        adicionarNome(arvore, 341, "Iara");     // Filho esquerdo de Ana
        adicionarNome(arvore, 342, "Iara");   // Filho direito de Ana


        // Filhos 1 (Posições 343 e 344)
        adicionarNome(arvore, 343, "Alice Vilarvas");     // Filho esquerdo de Ana
        adicionarNome(arvore, 344, "Alice Vilarvas");   // Filho direito de Ana


        // Filhos 2 (Posições 345 e 346)
        adicionarNome(arvore, 345, "Alice Vilarvas");     // Filho esquerdo de Ana
        adicionarNome(arvore, 346, "Alice Vilarvas");   // Filho direito de Ana


        // Filhos 1 (Posições 347 e 348)
        adicionarNome(arvore, 347, "Alice Vitória");     // Filho esquerdo de Ana
        adicionarNome(arvore, 348, "Alice Vitória");   // Filho direito de Ana


        // Filhos 2 (Posições 349 e 350)
        adicionarNome(arvore, 349, "Alice Vitória");     // Filho esquerdo de Ana
        adicionarNome(arvore, 350, "Alice Vitória");   // Filho direito de Ana


        // Filhos 1 (Posições 351 e 352)
        adicionarNome(arvore, 351, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 352, "Helena");   // Filho direito de Ana


        // Filhos 2 (Posições 353 e 354)
        adicionarNome(arvore, 353, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 354, "Helena");   // Filho direito de Ana


        // Filhos 1 (Posições 355 e 356)
        adicionarNome(arvore, 355, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 356, "Helena");   // Filho direito de Ana


        // Filhos 2 (Posições 357 e 358)
        adicionarNome(arvore, 357, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 358, "Helena");   // Filho direito de Ana


        // Filhos 1 (Posições 359 e 360)
        adicionarNome(arvore, 359, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 360, "Helena");   // Filho direito de Ana


        // Filhos 2 (Posições 361 e 362)
        adicionarNome(arvore, 361, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 362, "Helena");   // Filho direito de Ana


        // Filhos 1 (Posições 363 e 364)
        adicionarNome(arvore, 363, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 364, "Helena");   // Filho direito de Ana


        // Filhos 2 (Posições 365 e 366)
        adicionarNome(arvore, 365, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 366, "Helena");   // Filho direito de Ana


        // Filhos 1 (Posições 367 e 368)
        adicionarNome(arvore, 367, "Isabella");     // Filho esquerdo de Ana
        adicionarNome(arvore, 368, "Isabella");   // Filho direito de Ana


        // Filhos 2 (Posições 369 e 370)
        adicionarNome(arvore, 369, "Gabrielle");     // Filho esquerdo de Ana
        adicionarNome(arvore, 370, "Gabrielle");   // Filho direito de Ana


        // Filhos 1 (Posições 371 e 372)
        adicionarNome(arvore, 371, "Sofia");     // Filho esquerdo de Ana
        adicionarNome(arvore, 372, "Sofia");   // Filho direito de Ana


        // Filhos 2 (Posições 373 e 374)
        adicionarNome(arvore, 373, "Isadora");     // Filho esquerdo de Ana
        adicionarNome(arvore, 374, "Isadora");   // Filho direito de Ana


        // Filhos 1 (Posições 375 e 376)
        adicionarNome(arvore, 375, "Yasmin");     // Filho esquerdo de Ana
        adicionarNome(arvore, 376, "Yasmin");   // Filho direito de Ana


        // Filhos 2 (Posições 377 e 378)
        adicionarNome(arvore, 377, "Yasmin");     // Filho esquerdo de Ana
        adicionarNome(arvore, 378, "Yasmin");   // Filho direito de Ana


        // Filhos 1 (Posições 379 e 380)
        adicionarNome(arvore, 379, "Beatriz");     // Filho esquerdo de Ana
        adicionarNome(arvore, 380, "Beatriz");   // Filho direito de Ana


        // Filhos 2 (Posições 381 e 382)
        adicionarNome(arvore, 381, "Beatriz");     // Filho esquerdo de Ana
        adicionarNome(arvore, 382, "Beatriz");   // Filho direito de Ana










        //professor
        // Filhos 1(Posições 383 e 384)
        adicionarNome(arvore, 383, "Diego");     // Filho esquerdo de Ana
        adicionarNome(arvore, 384, "Diego");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 385 e 386)
        adicionarNome(arvore, 385, "Diego");     // Filho esquerdo de Ana
        adicionarNome(arvore, 386, "Diego");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 387 e 388)
        adicionarNome(arvore, 387, "Diego");     // Filho esquerdo de Ana
        adicionarNome(arvore, 388, "Diego");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 389 e 390)
        adicionarNome(arvore, 389, "Diego");     // Filho esquerdo de Ana
        adicionarNome(arvore, 390, "Diego");   // Filho direito de Ana


        // Filhos 1(Posições 391 e 392)
        adicionarNome(arvore, 391, "Danilo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 392, "Danilo");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 393 e 394)
        adicionarNome(arvore, 393, "Danilo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 394, "Danilo");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 395 e 396)
        adicionarNome(arvore, 395, "Danilo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 396, "Danilo");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 397 e 398)
        adicionarNome(arvore, 397, "Danilo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 398, "Danilo");   // Filho direito de Ana


        //professor
        // Filhos 1(Posições 399 e 400)
        adicionarNome(arvore, 399, "Matheus");     // Filho esquerdo de Ana
        adicionarNome(arvore, 400, "Matheus");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 401 e 402)
        adicionarNome(arvore, 401, "Matheus");     // Filho esquerdo de Ana
        adicionarNome(arvore, 402, "Matheus");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 403 e 404)
        adicionarNome(arvore, 403, "Ivo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 404, "Ivo");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 405 e 406)
        adicionarNome(arvore, 405, "Ivo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 406, "Ivo");   // Filho direito de Ana


        // Filhos 1(Posições 407 e 408)
        adicionarNome(arvore, 407, "Carlos");     // Filho esquerdo de Ana
        adicionarNome(arvore, 408, "Carlos");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 409 e 410)
        adicionarNome(arvore, 409, "Carlos");     // Filho esquerdo de Ana
        adicionarNome(arvore, 410, "Carlos");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 411 e 412)
        adicionarNome(arvore, 411, "Clewton");     // Filho esquerdo de Ana
        adicionarNome(arvore, 412, "Clewton");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 413 e 414)
        adicionarNome(arvore, 413, "Clewton");     // Filho esquerdo de Ana
        adicionarNome(arvore, 414, "Clewton");   // Filho direito de Ana


        //professor
        // Filhos 1(Posições 415 e 416)
        adicionarNome(arvore, 415, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 416, "Julio");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 417 e 418)
        adicionarNome(arvore, 417, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 418, "Julio");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 419 e 420)
        adicionarNome(arvore, 419, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 420, "Julio");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 421 e 422)
        adicionarNome(arvore, 421, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 422, "Julio");   // Filho direito de Ana


        // Filhos 1(Posições 423 e 424)
        adicionarNome(arvore, 423, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 424, "Julio");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 425 e 426)
        adicionarNome(arvore, 425, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 426, "Julio");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 427 e 428)
        adicionarNome(arvore, 427, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 428, "Julio");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 429 e 430)
        adicionarNome(arvore, 429, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 430, "Julio");   // Filho direito de Ana




        //professor
        // Filhos 1(Posições 431 e 432)
        adicionarNome(arvore, 431, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 432, "Ricardo");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 433 e 434)
        adicionarNome(arvore, 433, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 434, "Ricardo");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 435 e 436)
        adicionarNome(arvore, 435, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 436, "Ricardo");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 437 e 438)
        adicionarNome(arvore, 437, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 438, "Ricardo");   // Filho direito de Ana


        // Filhos 1(Posições 439 e 440)
        adicionarNome(arvore, 439, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 440, "Ricardo");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 441 e 442)
        adicionarNome(arvore, 441, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 442, "Ricardo");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 443 e 444)
        adicionarNome(arvore, 443, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 444, "Ricardo");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 445 e 446)
        adicionarNome(arvore, 445, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 446, "Ricardo");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 447 e 448)
        adicionarNome(arvore, 447, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 448, "Bianca");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 449 e 450)
        adicionarNome(arvore, 449, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 450, "Bianca");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 451 e 452)
        adicionarNome(arvore, 451, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 452, "Bianca");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 453 e 454)
        adicionarNome(arvore, 453, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 454, "Bianca");   // Filho direito de Ana


        // Filhos 1(Posições 455 e 456)
        adicionarNome(arvore, 455, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 456, "Bianca");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 457 e 458)
        adicionarNome(arvore, 457, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 458, "Bianca");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 459 e 460)
        adicionarNome(arvore, 459, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 460, "Bianca");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 461 e 462)
        adicionarNome(arvore, 461, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 462, "Bianca");   // Filho direito de Ana


        //professor
        // Filhos 1(Posições 463 e 464)
        adicionarNome(arvore, 463, "Glaucia");     // Filho esquerdo de Ana
        adicionarNome(arvore, 464, "Glaucia");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 465 e 466)
        adicionarNome(arvore, 465, "Glaucia");     // Filho esquerdo de Ana
        adicionarNome(arvore, 466, "Glaucia");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 467 e 468)
        adicionarNome(arvore, 467, "Solange");     // Filho esquerdo de Ana
        adicionarNome(arvore, 468, "Solange");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 469 e 470)
        adicionarNome(arvore, 469, "Stella");     // Filho esquerdo de Ana
        adicionarNome(arvore, 470, "Stella");   // Filho direito de Ana


        // Filhos 1(Posições 471 e 472)
        adicionarNome(arvore, 471, "Milena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 472, "Milena");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 473 e 474)
        adicionarNome(arvore, 473, "Milena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 474, "Milena");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 475 e 476)
        adicionarNome(arvore, 475, "Noemy");     // Filho esquerdo de Ana
        adicionarNome(arvore, 476, "Noemy");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 477 e 478)
        adicionarNome(arvore, 477, "Noemy");     // Filho esquerdo de Ana
        adicionarNome(arvore, 478, "Noemy");   // Filho direito de Ana


        //professor
        // Filhos 1(Posições 479 e 480)
        adicionarNome(arvore, 479, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 480, "Andrea");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 481 e 482)
        adicionarNome(arvore, 481, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 482, "Andrea");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 483 e 484)
        adicionarNome(arvore, 483, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 484, "Andrea");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 485 e 486)
        adicionarNome(arvore, 485, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 486, "Andrea");   // Filho direito de Ana


        // Filhos 1(Posições 487 e 488)
        adicionarNome(arvore, 487, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 488, "Andrea");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 489 e 490)
        adicionarNome(arvore, 489, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 490, "Andrea");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 491 e 492)
        adicionarNome(arvore, 491, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 492, "Andrea");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 493 e 494)
        adicionarNome(arvore, 493, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 494, "Andrea");   // Filho direito de Ana


        //professor
        // Filhos 1(Posições 495 e 496)
        adicionarNome(arvore, 495, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 496, "Rosane");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 497 e 498)
        adicionarNome(arvore, 497, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 498, "Rosane");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 499 e 500)
        adicionarNome(arvore, 499, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 500, "Rosane");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 501 e 502)
        adicionarNome(arvore, 501, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 502, "Rosane");   // Filho direito de Ana


        // Filhos 1(Posições 503 e 504)
        adicionarNome(arvore, 503, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 504, "Rosane");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 505 e 506)
        adicionarNome(arvore, 505, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 506, "Rosane");   // Filho direito de Ana


        //professo
        // Filhos 1(Posições 507 e 508)
        adicionarNome(arvore, 507, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 508, "Rosane");   // Filho direito de Ana


        //professores
        // Filhos 2 (Posições 509 e 510)
        adicionarNome(arvore, 509, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 510, "Rosane");   // Filho direito de Ana






      /*
                                                                                                                       hhhh
                                                                                                                      hhhhhh
                                                                                                                        hhh




                      hhhh                                                                        hhhh
                    hhhhhhh                                                                      hhhhhh
                      hhh                                                                         hhh




             hh           hh                                                                                                                                                                                            hh         hh
           hhhhh        hhhhhh                                                                                                                                                                                      hh hhhhh      hhhhhh
             hh           hh                                                                                                                                                                                     hh         hhhh


                       hhh    hhh    hhh   hhh                       /                                                                                                                     hhh    hhh     hhh    hhh


    hh hh  hh hh  hh hh  hh hh                                                                                                                                                          hh hh   hh hh  hh hh  hh hh
h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h                                                                                                           h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h
h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h / h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h h
    sei lá que fileira é essa acho q a útima, tomara que acaabe logo
    */









     //alunos
        // Filhos 1(Posições 511 e 512)
        adicionarNome(arvore, 511, "Miguel Santana");     // Filho esquerdo de Ana
        adicionarNome(arvore, 512, "Miguel Santana");   // Filho direito de Ana


        //aluno
        // Filhos 2 (Posições 513 e 514)
        adicionarNome(arvore, 513, "Miguel Santana");     // Filho esquerdo de Ana
        adicionarNome(arvore, 514, "Miguel Santana");   // Filho direito de Ana


        //alunos
        // Filhos 1(Posições 515 e 516)
        adicionarNome(arvore, 515, "Miguel Santana");     // Filho esquerdo de Ana
        adicionarNome(arvore, 516, "Miguel Santana");   // Filho direito de Ana


        //aluno
        // Filhos 2 (Posições 517 e 518)
        adicionarNome(arvore, 517, "Miguel Santana");     // Filho esquerdo de Ana
        adicionarNome(arvore, 518, "Miguel Santana");   // Filho direito de Ana


        // Filhos 1(Posições 519 e 520)
        adicionarNome(arvore, 519, "Miguel Santana");     // Filho esquerdo de Ana
        adicionarNome(arvore, 520, "Miguel Santana");   // Filho direito de Ana


        //aluno
        // Filhos 2 (Posições 521 e 522)
        adicionarNome(arvore, 521, "Miguel Santana");     // Filho esquerdo de Ana
        adicionarNome(arvore, 522, "Miguel Santana");   // Filho direito de Ana


        //alunos
        // Filhos 1(Posições 523 e 524)
        adicionarNome(arvore, 523, "Miguel Santana");     // Filho esquerdo de Ana
        adicionarNome(arvore, 524, "Miguel Santana");   // Filho direito de Ana


        //aluno
        // Filhos 2 (Posições 525 e 526)
        adicionarNome(arvore, 525, "Miguel Santana");     // Filho esquerdo de Ana
        adicionarNome(arvore, 526, "Miguel Santana");   // Filho direito de Ana


      // Filhos 1 (Posições 527 e 528) - Deixados em branco
        adicionarNome(arvore, 527, "Gabriel Teodoro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 528, "Gabriel Teodoro");     // Filho direito de Ana


        // Filhos 2 (Posições 529 e 530)
        adicionarNome(arvore, 529, "Gabriel Teodoro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 530, "Gabriel Teodoro");   // Filho direito de Ana


        // Filhos 1 (Posições 531 e 532)
        adicionarNome(arvore, 531, "Gabriel Teodoro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 532, "Gabriel Teodoro");   // Filho direito de Ana


        // Filhos 2 (Posições 533 e 534)
        adicionarNome(arvore, 533, "Gabriel Teodoro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 534, "Gabriel Teodoro");   // Filho direito de Ana


        // Filhos 1 (Posições 535 e 536)
        adicionarNome(arvore, 535, "Enzo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 536, "Enzo");   // Filho direito de Ana


        // Filhos 2 (Posições 537 e 538)
        adicionarNome(arvore, 537, "Enzo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 538, "Enzo");   // Filho direito de Ana


        // Filhos 1 (Posições 539 e 540)
        adicionarNome(arvore, 539, "Ezequiel");     // Filho esquerdo de Ana
        adicionarNome(arvore, 540, "Ezequiel");   // Filho direito de Ana


        // Filhos 2 (Posições 541 e 542)
        adicionarNome(arvore, 541, "Ezequiel");     // Filho esquerdo de Ana
        adicionarNome(arvore, 542, "Ezequiel");   // Filho direito de Ana


        // Filhos 1 (Posições 543 e 544)
        adicionarNome(arvore, 543, "Luca Miura");     // Filho esquerdo de Ana
        adicionarNome(arvore, 544, "Luca Miura");   // Filho direito de Ana


        // Filhos 2 (Posições 545 e 546)
        adicionarNome(arvore, 545, "Luca Miura");     // Filho esquerdo de Ana
        adicionarNome(arvore, 546, "Luca Miura");   // Filho direito de Ana


        // Filhos 1 (Posições 547 e 548)
        adicionarNome(arvore, 547, "Luca Miura");     // Filho esquerdo de Ana
        adicionarNome(arvore, 548, "Luca Miura");   // Filho direito de Ana


        // Filhos 2 (Posições 549 e 550)
        adicionarNome(arvore, 549, "Luca Miura");     // Filho esquerdo de Ana
        adicionarNome(arvore, 550, "Luca Miura");   // Filho direito de Ana


        // Filhos 1 (Posições 551 e 552)
        adicionarNome(arvore, 551, "Rafael Toshio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 552, "Rafael Toshio");   // Filho direito de Ana


        // Filhos 2 (Posições 553 e 554)
        adicionarNome(arvore, 553, "Rafael Toshio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 554, "Rafael Toshio");   // Filho direito de Ana


        // Filhos 1 (Posições 555 e 556)
        adicionarNome(arvore, 555, "Rafael Toshio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 556, "Rafael Toshio");   // Filho direito de Ana


        // Filhos 2 (Posições 557 e 558)
        adicionarNome(arvore, 557, "Rafael Toshio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 558, "Rafael Toshio");   // Filho direito de Ana


        // Filhos 1 (Posições 559 e 560)
        adicionarNome(arvore, 559, "Pedro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 560, "Pedro");   // Filho direito de Ana


        // Filhos 2 (Posições 561 e 562)
        adicionarNome(arvore, 561, "Pedro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 562, "Pedro");   // Filho direito de Ana


        // Filhos 1 (Posições 563 e 564)
        adicionarNome(arvore, 563, "Joao");     // Filho esquerdo de Ana
        adicionarNome(arvore, 564, "Joao");   // Filho direito de Ana


        // Filhos 2 (Posições 565 e 566)
        adicionarNome(arvore, 565, "Rafael Mota");     // Filho esquerdo de Ana
        adicionarNome(arvore, 566, "Efrain");   // Filho direito de Ana


        // Filhos 1 (Posições 567 e 568)
        adicionarNome(arvore, 567, "Miguel Nunes");     // Filho esquerdo de Ana
        adicionarNome(arvore, 568, "Miguel Nunes");   // Filho direito de Ana


        // Filhos 2 (Posições 569 e 570)
        adicionarNome(arvore, 569, "Miguel Nunes");     // Filho esquerdo de Ana
        adicionarNome(arvore, 570, "Miguel Nunes");   // Filho direito de Ana


        // Filhos 1 (Posições 571 e 572)
        adicionarNome(arvore, 571, "Miguel Nunes");     // Filho esquerdo de Ana
        adicionarNome(arvore, 572, "Miguel Nunes");   // Filho direito de Ana


        // Filhos 2 (Posições 573 e 574) - Deixados em branco
        adicionarNome(arvore, 573, "Miguel Nunes");     // Filho esquerdo de Ana
        adicionarNome(arvore, 574, "Miguel Nunes");     // Filho direito de Ana


        // Filhos 1 (Posições 575 e 576) - Deixados em branco
        adicionarNome(arvore, 575, "Felipe");     // Filho esquerdo de Ana
        adicionarNome(arvore, 576, "Felipe");     // Filho direito de Ana


        // Filhos 2 (Posições 577 e 578)
        adicionarNome(arvore, 577, "Felipe");     // Filho esquerdo de Ana
        adicionarNome(arvore, 578, "Felipe");   // Filho direito de Ana


        // Filhos 1 (Posições 579 e 580)
        adicionarNome(arvore, 579, "Felipe");     // Filho esquerdo de Ana
        adicionarNome(arvore, 580, "Felipe");   // Filho direito de Ana


        // Filhos 2 (Posições 581 e 582)
        adicionarNome(arvore, 581, "Felipe");     // Filho esquerdo de Ana
        adicionarNome(arvore, 582, "Felipe");   // Filho direito de Ana


        // Filhos 1 (Posições 583 e 584)
        adicionarNome(arvore, 583, "Lucas Clevelaro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 584, "Lucas Clevelaro");   // Filho direito de Ana


        // Filhos 2 (Posições 585 e 586)
        adicionarNome(arvore, 585, "Lucas Clevelaro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 586, "Lucas Clevelaro");   // Filho direito de Ana


        // Filhos 1 (Posições 587 e 588)
        adicionarNome(arvore, 587, "Lucas Clevelaro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 588, "Lucas Clevelaro");   // Filho direito de Ana


        // Filhos 2 (Posições 589 e 590)
        adicionarNome(arvore, 589, "Lucas Clevelaro");     // Filho esquerdo de Ana
        adicionarNome(arvore, 590, "Lucas Clevelaro");   // Filho direito de Ana


        // Filhos 1 (Posições 591 e 592)
        adicionarNome(arvore, 591, "Kaiky");     // Filho esquerdo de Ana
        adicionarNome(arvore, 592, "Kaiky");   // Filho direito de Ana


        // Filhos 2 (Posições 593 e 594)
        adicionarNome(arvore, 593, "Kaiky");     // Filho esquerdo de Ana
        adicionarNome(arvore, 594, "Kaiky");   // Filho direito de Ana


        // Filhos 1 (Posições 595 e 596)
        adicionarNome(arvore, 595, "Kaiky");     // Filho esquerdo de Ana
        adicionarNome(arvore, 596, "Kaiky");   // Filho direito de Ana


        // Filhos 2 (Posições 597 e 598)
        adicionarNome(arvore, 597, "Kaiky");     // Filho esquerdo de Ana
        adicionarNome(arvore, 598, "Kaiky");   // Filho direito de Ana


        // Filhos 1 (Posições 599 e 600)
        adicionarNome(arvore, 599, "Kaiky");     // Filho esquerdo de Ana
        adicionarNome(arvore, 600, "Kaiky");   // Filho direito de Ana


        // Filhos 2 (Posições 601 e 602)
        adicionarNome(arvore, 601, "Kaiky");     // Filho esquerdo de Ana
        adicionarNome(arvore, 602, "Kaiky");   // Filho direito de Ana


        // Filhos 1 (Posições 603 e 604)
        adicionarNome(arvore, 603, "Kaiky");     // Filho esquerdo de Ana
        adicionarNome(arvore, 604, "Kaiky");   // Filho direito de Ana


        // Filhos 2 (Posições 605 e 606)
        adicionarNome(arvore, 605, "Kaiky");     // Filho esquerdo de Ana
        adicionarNome(arvore, 606, "Kaiky");   // Filho direito de Ana


        // Filhos 1 (Posições 607 e 608)
        adicionarNome(arvore, 607, "Breno");     // Filho esquerdo de Ana
        adicionarNome(arvore, 608, "Breno");   // Filho direito de Ana


        // Filhos 2 (Posições 609 e 610)
        adicionarNome(arvore, 609, "Breno");     // Filho esquerdo de Ana
        adicionarNome(arvore, 610, "Breno");   // Filho direito de Ana


        // Filhos 1 (Posições 611 e 612)
        adicionarNome(arvore, 611, "Breno");     // Filho esquerdo de Ana
        adicionarNome(arvore, 612, "Breno");   // Filho direito de Ana


        // Filhos 2 (Posições 613 e 614)
        adicionarNome(arvore, 613, "Breno");     // Filho esquerdo de Ana
        adicionarNome(arvore, 614, "Breno");   // Filho direito de Ana


        // Filhos 1 (Posições 615 e 616)
        adicionarNome(arvore, 615, "Gabriel Nunes");     // Filho esquerdo de Ana
        adicionarNome(arvore, 616, "Gabriel Nunes");   // Filho direito de Ana


        // Filhos 2 (Posições 617 e 618)
        adicionarNome(arvore, 617, "Guilherme");     // Filho esquerdo de Ana
        adicionarNome(arvore, 618, "Guilherme");   // Filho direito de Ana


        // Filhos 1 (Posições 619 e 620)
        adicionarNome(arvore, 619, "Helio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 620, "Helio");   // Filho direito de Ana


        // Filhos 2 (Posições 621 e 622)
        adicionarNome(arvore, 621, "Theo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 622, "Theo");   // Filho direito de Ana


        // Filhos 1 (Posições 623 e 624) - Deixados em branco
        adicionarNome(arvore, 623, "Ravi");     // Filho esquerdo de Ana
        adicionarNome(arvore, 624, "Ravi");     // Filho direito de Ana


        // Filhos 2 (Posições 625 e 626)
        adicionarNome(arvore, 625, "Ravi");     // Filho esquerdo de Ana
        adicionarNome(arvore, 626, "Ravi");   // Filho direito de Ana


        // Filhos 1 (Posições 627 e 628)
        adicionarNome(arvore, 627, "Ravi");     // Filho esquerdo de Ana
        adicionarNome(arvore, 628, "Ravi");   // Filho direito de Ana


        // Filhos 2 (Posições 629 e 630)
        adicionarNome(arvore, 629, "Ravi");     // Filho esquerdo de Ana
        adicionarNome(arvore, 630, "Ravi");   // Filho direito de Ana


        // Filhos 1 (Posições 631 e 632)
        adicionarNome(arvore, 631, "Pablo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 632, "Pablo");   // Filho direito de Ana


        // Filhos 2 (Posições 633 e 634)
        adicionarNome(arvore, 633, "Pablo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 634, "Pablo");   // Filho direito de Ana


        // Filhos 1 (Posições 635 e 636)
        adicionarNome(arvore, 635, "Luis");     // Filho esquerdo de Ana
        adicionarNome(arvore, 636, "Luis");   // Filho direito de Ana


        // Filhos 2 (Posições 637 e 638)
        adicionarNome(arvore, 637, "Luis");     // Filho esquerdo de Ana
        adicionarNome(arvore, 638, "Luis");   // Filho direito de Ana


        // Filhos 1 (Posições 639 e 640)
        adicionarNome(arvore, 639, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 640, "Aiko");   // Filho direito de Ana


        // Filhos 2 (Posições 641 e 642)
        adicionarNome(arvore, 641, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 642, "Aiko");   // Filho direito de Ana


        // Filhos 1 (Posições 643 e 644)
        adicionarNome(arvore, 643, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 644, "Aiko");   // Filho direito de Ana


        // Filhos 2 (Posições 645 e 646)
        adicionarNome(arvore, 645, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 646, "Aiko");   // Filho direito de Ana


        // Filhos 1 (Posições 647 e 648)
        adicionarNome(arvore, 647, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 648, "Aiko");   // Filho direito de Ana


        // Filhos 2 (Posições 649 e 650)
        adicionarNome(arvore, 649, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 650, "Aiko");   // Filho direito de Ana


        // Filhos 1 (Posições 651 e 652)
        adicionarNome(arvore, 651, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 652, "Aiko");   // Filho direito de Ana


        // Filhos 2 (Posições 653 e 654)
        adicionarNome(arvore, 653, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 654, "Aiko");   // Filho direito de Ana


        // Filhos 1 (Posições 655 e 656)
        adicionarNome(arvore, 655, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 656, "Aiko");   // Filho direito de Ana


        // Filhos 2 (Posições 657 e 658)
        adicionarNome(arvore, 657, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 658, "Aiko");   // Filho direito de Ana


        // Filhos 1 (Posições 659 e 660)
        adicionarNome(arvore, 659, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 660, "Aiko");   // Filho direito de Ana


        // Filhos 2 (Posições 661 e 662)
        adicionarNome(arvore, 661, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 662, "Aiko");   // Filho direito de Ana


        // Filhos 1 (Posições 663 e 664)
        adicionarNome(arvore, 663, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 664, "Aiko");   // Filho direito de Ana


        // Filhos 2 (Posições 665 e 666)
        adicionarNome(arvore, 665, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 666, "Aiko");   // Filho direito de Ana


        // Filhos 1 (Posições 667 e 668)
        adicionarNome(arvore, 667, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 668, "Aiko");   // Filho direito de Ana


        // Filhos 2 (Posições 669 e 670) - Deixados em branco
        adicionarNome(arvore, 669, "Aiko");     // Filho esquerdo de Ana
        adicionarNome(arvore, 670, "Aiko");     // Filho direito de Ana


        // Filhos 1 (Posições 671 e 672)
        adicionarNome(arvore, 671, "Micaela");     // Filho esquerdo de Ana
        adicionarNome(arvore, 672, "Micaela");   // Filho direito de Ana


        // Filhos 2 (Posições 673 e 674)
        adicionarNome(arvore, 673, "Micaela");     // Filho esquerdo de Ana
        adicionarNome(arvore, 674, "Micaela");   // Filho direito de Ana


        // Filhos 1 (Posições 675 e 676)
        adicionarNome(arvore, 675, "Micaela");     // Filho esquerdo de Ana
        adicionarNome(arvore, 676, "Micaela");   // Filho direito de Ana


        // Filhos 2 (Posições 677 e 678)
        adicionarNome(arvore, 677, "Micaela");     // Filho esquerdo de Ana
        adicionarNome(arvore, 678, "Micaela");   // Filho direito de Ana


        // Filhos 1 (Posições 679 e 680)
        adicionarNome(arvore, 679, "Iara");     // Filho esquerdo de Ana
        adicionarNome(arvore, 680, "Iara");   // Filho direito de Ana


        // Filhos 2 (Posições 681 e 682)
        adicionarNome(arvore, 681, "Iara");     // Filho esquerdo de Ana
        adicionarNome(arvore, 682, "Iara");   // Filho direito de Ana


        // Filhos 1 (Posições 683 e 684)
        adicionarNome(arvore, 683, "Iara");     // Filho esquerdo de Ana
        adicionarNome(arvore, 684, "Iara");   // Filho direito de Ana


        // Filhos 2 (Posições 685 e 686)
        adicionarNome(arvore, 685, "Iara");     // Filho esquerdo de Ana
        adicionarNome(arvore, 686, "Iara");   // Filho direito de Ana


        // Filhos 1 (Posições 687 e 688)
        adicionarNome(arvore, 687, "Alice Vilarvas");     // Filho esquerdo de Ana
        adicionarNome(arvore, 688, "Alice Vilarvas");   // Filho direito de Ana


        // Filhos 2 (Posições 689 e 690)
        adicionarNome(arvore, 689, "Alice Vilarvas");     // Filho esquerdo de Ana
        adicionarNome(arvore, 690, "Alice Vilarvas");   // Filho direito de Ana


        // Filhos 1 (Posições 691 e 692)
        adicionarNome(arvore, 691, "Alice Vilarvas");     // Filho esquerdo de Ana
        adicionarNome(arvore, 692, "Alice Vilarvas");   // Filho direito de Ana


        // Filhos 2 (Posições 693 e 694)
        adicionarNome(arvore, 693, "Alice Vilarvas");     // Filho esquerdo de Ana
        adicionarNome(arvore, 694, "Alice Vilarvas");   // Filho direito de Ana


        // Filhos 1 (Posições 695 e 696)
        adicionarNome(arvore, 695, "Alice Vitoria");     // Filho esquerdo de Ana
        adicionarNome(arvore, 696, "Alice Vitoria");   // Filho direito de Ana


        // Filhos 2 (Posições 697 e 698)
        adicionarNome(arvore, 697, "Alice Vitoria");     // Filho esquerdo de Ana
        adicionarNome(arvore, 698, "Alice Vitoria");   // Filho direito de Ana


        // Filhos 1 (Posições 699 e 700)
        adicionarNome(arvore, 699, "Alice Vitoria");     // Filho esquerdo de Ana
        adicionarNome(arvore, 700, "Alice Vitoria");   // Filho direito de Ana


        // Filhos 2 (Posições 701 e 702)
        adicionarNome(arvore, 701, "Alice Vitoria");     // Filho esquerdo de Ana
        adicionarNome(arvore, 702, "Alice Vitoria");   // Filho direito de Ana


        // Filhos 1 (Posições 703 e 704)
        adicionarNome(arvore, 703, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 704, "Helena");   // Filho direito de Ana


        // Filhos 2 (Posições 705 e 706)
        adicionarNome(arvore, 705, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 706, "Helena");   // Filho direito de Ana


        // Filhos 1 (Posições 707 e 708)
        adicionarNome(arvore, 707, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 708, "Helena");   // Filho direito de Ana


        // Filhos 2 (Posições 709 e 710)
        adicionarNome(arvore, 709, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 710, "Helena");   // Filho direito de Ana


        // Filhos 1 (Posições 711 e 712)
        adicionarNome(arvore, 711, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 712, "Helena");   // Filho direito de Ana


        // Filhos 2 (Posições 713 e 714)
        adicionarNome(arvore, 713, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 714, "Helena");   // Filho direito de Ana


        // Filhos 1 (Posições 715 e 716)
        adicionarNome(arvore, 715, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 716, "Helena");   // Filho direito de Ana


        // Filhos 2 (Posições 717 e 718)
        adicionarNome(arvore, 717, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 718, "Helena");   // Filho direito de Ana


        // Filhos 1 (Posições 719 e 720)
        adicionarNome(arvore, 719, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 720, "Helena");   // Filho direito de Ana


        // Filhos 2 (Posições 721 e 722)
        adicionarNome(arvore, 721, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 722, "Helena");   // Filho direito de Ana


        // Filhos 1 (Posições 723 e 724)
        adicionarNome(arvore, 723, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 724, "Helena");   // Filho direito de Ana


        // Filhos 2 (Posições 725 e 726)
        adicionarNome(arvore, 725, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 726, "Helena");   // Filho direito de Ana


        // Filhos 1 (Posições 727 e 728)
        adicionarNome(arvore, 727, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 728, "Helena");   // Filho direito de Ana


        // Filhos 2 (Posições 729 e 730)
        adicionarNome(arvore, 729, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 730, "Helena");   // Filho direito de Ana


        // Filhos 1 (Posições 731 e 732)
        adicionarNome(arvore, 731, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 732, "Helena");   // Filho direito de Ana


        // Filhos 2 (Posições 733 e 734)
        adicionarNome(arvore, 733, "Helena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 734, "Helena");   // Filho direito de Ana


        // Filhos 1 (Posições 735 e 736)
        adicionarNome(arvore, 735, "Isabella");     // Filho esquerdo de Ana
        adicionarNome(arvore, 736, "Isabella");   // Filho direito de Ana


        // Filhos 2 (Posições 737 e 738)
        adicionarNome(arvore, 737, "Isabella");     // Filho esquerdo de Ana
        adicionarNome(arvore, 738, "Isabella");   // Filho direito de Ana


        // Filhos 1 (Posições 739 e 740)
        adicionarNome(arvore, 739, "Gabrielle");     // Filho esquerdo de Ana
        adicionarNome(arvore, 740, "Gabrielle");   // Filho direito de Ana


        // Filhos 2 (Posições 741 e 742)
        adicionarNome(arvore, 741, "Gabrielle");     // Filho esquerdo de Ana
        adicionarNome(arvore, 742, "Gabrielle");   // Filho direito de Ana


        // Filhos 1 (Posições 743 e 744)
        adicionarNome(arvore, 743, "Sofia");     // Filho esquerdo de Ana
        adicionarNome(arvore, 744, "Sofia");   // Filho direito de Ana


        // Filhos 2 (Posições 745 e 746)
        adicionarNome(arvore, 745, "Sofia");     // Filho esquerdo de Ana
        adicionarNome(arvore, 746, "Sofia");   // Filho direito de Ana


        // Filhos 1 (Posições 747 e 748)
        adicionarNome(arvore, 747, "Isadora");     // Filho esquerdo de Ana
        adicionarNome(arvore, 748, "Isadora");   // Filho direito de Ana


        // Filhos 2 (Posições 749 e 750)
        adicionarNome(arvore, 749, "Isadora");     // Filho esquerdo de Ana
        adicionarNome(arvore, 750, "Isadora");   // Filho direito de Ana


        // Filhos 1 (Posições 751 e 752)
        adicionarNome(arvore, 751, "Yasmin");     // Filho esquerdo de Ana
        adicionarNome(arvore, 752, "Yasmin");   // Filho direito de Ana


        // Filhos 2 (Posições 753 e 754)
        adicionarNome(arvore, 753, "Yasmin");     // Filho esquerdo de Ana
        adicionarNome(arvore, 754, "Yasmin");   // Filho direito de Ana


        // Filhos 1 (Posições 755 e 756)
        adicionarNome(arvore, 755, "Yasmin");     // Filho esquerdo de Ana
        adicionarNome(arvore, 756, "Yasmin");   // Filho direito de Ana


        // Filhos 2 (Posições 757 e 758)
        adicionarNome(arvore, 757, "Yasmin");     // Filho esquerdo de Ana
        adicionarNome(arvore, 758, "Yasmin");   // Filho direito de Ana


        // Filhos 1 (Posições 759 e 760)
        adicionarNome(arvore, 759, "Beatriz");     // Filho esquerdo de Ana
        adicionarNome(arvore, 760, "Beatriz");   // Filho direito de Ana


        // Filhos 2 (Posições 761 e 762)
        adicionarNome(arvore, 761, "Beatriz");     // Filho esquerdo de Ana
        adicionarNome(arvore, 762, "Beatriz");   // Filho direito de Ana


        // Filhos 1 (Posições 763 e 764)
        adicionarNome(arvore, 763, "Beatriz");     // Filho esquerdo de Ana
        adicionarNome(arvore, 764, "Beatriz");   // Filho direito de Ana


        // Filhos 2 (Posições 765 e 766)
        adicionarNome(arvore, 765, "Beatriz");     // Filho esquerdo de Ana
        adicionarNome(arvore, 766, "Beatriz");   // Filho direito de Ana

         // Filhos 1(Posições 767 e 768)
        adicionarNome(arvore, 767, "Diego");     // Filho esquerdo de Ana
        adicionarNome(arvore, 768, "Diego");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 769 e 770)
        adicionarNome(arvore, 769, "Diego");     // Filho esquerdo de Ana
        adicionarNome(arvore, 770, "Diego");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 771 e 772)
        adicionarNome(arvore, 771, "Diego");     // Filho esquerdo de Ana
        adicionarNome(arvore, 772, "Diego");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 773 e 774)
        adicionarNome(arvore, 773, "Diego");     // Filho esquerdo de Ana
        adicionarNome(arvore, 774, "Diego");   // Filho direito de Ana

        // Filhos 1(Posições 775 e 776)
        adicionarNome(arvore, 775, "Diego");     // Filho esquerdo de Ana
        adicionarNome(arvore, 776, "Diego");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 777 e 778)
        adicionarNome(arvore, 777, "Diego");     // Filho esquerdo de Ana
        adicionarNome(arvore, 778, "Diego");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 779 e 780)
        adicionarNome(arvore, 779, "Diego");     // Filho esquerdo de Ana
        adicionarNome(arvore, 780, "Diego");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 781 e 782)
        adicionarNome(arvore, 781, "Diego");     // Filho esquerdo de Ana
        adicionarNome(arvore, 782, "Diego");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 783 e 784)
        adicionarNome(arvore, 783, "Danilo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 784, "Danilo");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 785 e 786)
        adicionarNome(arvore, 785, "Danilo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 786, "Danilo");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 787 e 788)
        adicionarNome(arvore, 787, "Danilo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 788, "Danilo");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 789 e 790)
        adicionarNome(arvore, 789, "Danilo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 790, "Danilo");   // Filho direito de Ana

        // Filhos 1(Posições 791 e 792)
        adicionarNome(arvore, 791, "Danilo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 792, "Danilo");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 793 e 794)
        adicionarNome(arvore, 793, "Danilo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 794, "Danilo");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 795 e 796)
        adicionarNome(arvore, 795, "Danilo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 796, "Danilo");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 797 e 798)
        adicionarNome(arvore, 797, "Danilo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 798, "Danilo");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 799 e 800)
        adicionarNome(arvore, 799, "Matheus");     // Filho esquerdo de Ana
        adicionarNome(arvore, 800, "Matheus");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 801 e 802)
        adicionarNome(arvore, 801, "Matheus");     // Filho esquerdo de Ana
        adicionarNome(arvore, 802, "Matheus");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 803 e 804)
        adicionarNome(arvore, 803, "Matheus");     // Filho esquerdo de Ana
        adicionarNome(arvore, 804, "Matheus");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 805 e 806)
        adicionarNome(arvore, 805, "Matheus");     // Filho esquerdo de Ana
        adicionarNome(arvore, 806, "Matheus");   // Filho direito de Ana

        // Filhos 1(Posições 807 e 808)
        adicionarNome(arvore, 807, "Ivo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 808, "Ivo");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 809 e 810)
        adicionarNome(arvore, 809, "Ivo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 810, "Ivo");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 811 e 812)
        adicionarNome(arvore, 811, "Ivo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 812, "Ivo");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 813 e 814)
        adicionarNome(arvore, 813, "Ivo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 814, "Ivo");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 815 e 816)
        adicionarNome(arvore, 815, "Carlos");     // Filho esquerdo de Ana
        adicionarNome(arvore, 816, "Carlos");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 817 e 818)
        adicionarNome(arvore, 817, "Carlos");     // Filho esquerdo de Ana
        adicionarNome(arvore, 818, "Carlos");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 819 e 820)
        adicionarNome(arvore, 819, "Carlos");     // Filho esquerdo de Ana
        adicionarNome(arvore, 820, "Carlos");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 821 e 822)
        adicionarNome(arvore, 821, "Carlos");     // Filho esquerdo de Ana
        adicionarNome(arvore, 822, "Carlos");   // Filho direito de Ana

        // Filhos 1(Posições 823 e 824)
        adicionarNome(arvore, 823, "Clewton");     // Filho esquerdo de Ana
        adicionarNome(arvore, 824, "Clewton");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 825 e 826)
        adicionarNome(arvore, 825, "Clewton");     // Filho esquerdo de Ana
        adicionarNome(arvore, 826, "Clewton");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 827 e 828)
        adicionarNome(arvore, 827, "Clewton");     // Filho esquerdo de Ana
        adicionarNome(arvore, 828, "Clewton");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 829 e 830)
        adicionarNome(arvore, 829, "Clewton");     // Filho esquerdo de Ana
        adicionarNome(arvore, 830, "Clewton");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 831 e 832)
        adicionarNome(arvore, 831, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 832, "Julio");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 833 e 834)
        adicionarNome(arvore, 833, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 834, "Julio");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 835 e 836)
        adicionarNome(arvore, 835, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 836, "Julio");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 837 e 838)
        adicionarNome(arvore, 837, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 838, "Julio");   // Filho direito de Ana

        // Filhos 1(Posições 839 e 840)
        adicionarNome(arvore, 839, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 840, "Julio");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 841 e 842)
        adicionarNome(arvore, 841, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 842, "Julio");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 843 e 844)
        adicionarNome(arvore, 843, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 844, "Julio");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 845 e 846)
        adicionarNome(arvore, 845, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 846, "Julio");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 847 e 848)
        adicionarNome(arvore, 847, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 848, "Julio");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 849 e 850)
        adicionarNome(arvore, 849, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 850, "Julio");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 851 e 852)
        adicionarNome(arvore, 851, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 852, "Julio");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 853 e 854)
        adicionarNome(arvore, 853, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 854, "Julio");   // Filho direito de Ana

        // Filhos 1(Posições 855 e 856)
        adicionarNome(arvore, 855, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 856, "Julio");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 857 e 858)
        adicionarNome(arvore, 857, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 858, "Julio");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 859 e 860)
        adicionarNome(arvore, 859, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 860, "Julio");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 861 e 862)
        adicionarNome(arvore, 861, "Julio");     // Filho esquerdo de Ana
        adicionarNome(arvore, 862, "Julio");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 863 e 864)
        adicionarNome(arvore, 863, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 864, "Ricardo");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 865 e 866)
        adicionarNome(arvore, 865, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 866, "Ricardo");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 867 e 868)
        adicionarNome(arvore, 867, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 868, "Ricardo");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 869 e 870)
        adicionarNome(arvore, 869, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 870, "Ricardo");   // Filho direito de Ana

        // Filhos 1(Posições 871 e 872)
        adicionarNome(arvore, 871, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 872, "Ricardo");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 873 e 874)
        adicionarNome(arvore, 873, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 874, "Ricardo");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 875 e 876)
        adicionarNome(arvore, 875, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 876, "Ricardo");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 877 e 878)
        adicionarNome(arvore, 877, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 878, "Ricardo");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 879 e 880)
        adicionarNome(arvore, 879, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 880, "Ricardo");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 881 e 882)
        adicionarNome(arvore, 881, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 882, "Ricardo");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 883 e 884)
        adicionarNome(arvore, 883, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 884, "Ricardo");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 885 e 886)
        adicionarNome(arvore, 885, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 886, "Ricardo");   // Filho direito de Ana

        // Filhos 1(Posições 887 e 888)
        adicionarNome(arvore, 887, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 888, "Ricardo");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 889 e 890)
        adicionarNome(arvore, 889, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 890, "Ricardo");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 891 e 892)
        adicionarNome(arvore, 891, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 892, "Ricardo");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 893 e 894)
        adicionarNome(arvore, 893, "Ricardo");     // Filho esquerdo de Ana
        adicionarNome(arvore, 894, "Ricardo");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 895 e 896)
        adicionarNome(arvore, 895, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 896, "Bianca");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 897 e 898)
        adicionarNome(arvore, 897, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 898, "Bianca");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 899 e 900)
        adicionarNome(arvore, 899, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 900, "Bianca");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 901 e 902)
        adicionarNome(arvore, 901, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 902, "Bianca");   // Filho direito de Ana

        // Filhos 1(Posições 903 e 904)
        adicionarNome(arvore, 903, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 904, "Bianca");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 905 e 906)
        adicionarNome(arvore, 905, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 906, "Bianca");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 907 e 908)
        adicionarNome(arvore, 907, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 908, "Bianca");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 909 e 910)
        adicionarNome(arvore, 909, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 910, "Bianca");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 911 e 912)
        adicionarNome(arvore, 911, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 912, "Bianca");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 913 e 914)
        adicionarNome(arvore, 913, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 914, "Bianca");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 915 e 916)
        adicionarNome(arvore, 915, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 916, "Bianca");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 917 e 918)
        adicionarNome(arvore, 917, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 918, "Bianca");   // Filho direito de Ana

        // Filhos 1(Posições 919 e 920)
        adicionarNome(arvore, 919, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 920, "Bianca");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 921 e 922)
        adicionarNome(arvore, 921, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 922, "Bianca");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 923 e 924)
        adicionarNome(arvore, 923, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 924, "Bianca");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 925 e 926)
        adicionarNome(arvore, 925, "Bianca");     // Filho esquerdo de Ana
        adicionarNome(arvore, 926, "Bianca");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 927 e 928)
        adicionarNome(arvore, 927, "Glaucia");     // Filho esquerdo de Ana
        adicionarNome(arvore, 928, "Glaucia");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 929 e 930)
        adicionarNome(arvore, 929, "Glaucia");     // Filho esquerdo de Ana
        adicionarNome(arvore, 930, "Glaucia");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 931 e 932)
        adicionarNome(arvore, 931, "Glaucia");     // Filho esquerdo de Ana
        adicionarNome(arvore, 932, "Glaucia");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 933 e 934)
        adicionarNome(arvore, 933, "Glaucia");     // Filho esquerdo de Ana
        adicionarNome(arvore, 934, "Glaucia");   // Filho direito de Ana

        // Filhos 1(Posições 935 e 936)
        adicionarNome(arvore, 935, "Solange");     // Filho esquerdo de Ana
        adicionarNome(arvore, 936, "Solange");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 937 e 938)
        adicionarNome(arvore, 937, "Solange");     // Filho esquerdo de Ana
        adicionarNome(arvore, 938, "Solange");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 939 e 940)
        adicionarNome(arvore, 939, "Stella");     // Filho esquerdo de Ana
        adicionarNome(arvore, 940, "Stella");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 941 e 942)
        adicionarNome(arvore, 941, "Stella");     // Filho esquerdo de Ana
        adicionarNome(arvore, 942, "Stella");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 943 e 944)
        adicionarNome(arvore, 943, "Milena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 944, "Milena");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 945 e 946)
        adicionarNome(arvore, 945, "Milena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 946, "Milena");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 947 e 948)
        adicionarNome(arvore, 947, "Milena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 948, "Milena");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 949 e 950)
        adicionarNome(arvore, 949, "Milena");     // Filho esquerdo de Ana
        adicionarNome(arvore, 950, "Milena");   // Filho direito de Ana

        // Filhos 1(Posições 951 e 952)
        adicionarNome(arvore, 951, "Noemy");     // Filho esquerdo de Ana
        adicionarNome(arvore, 952, "Noemy");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 953 e 954)
        adicionarNome(arvore, 953, "Noemy");     // Filho esquerdo de Ana
        adicionarNome(arvore, 954, "Noemy");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 955 e 956)
        adicionarNome(arvore, 955, "Noemy");     // Filho esquerdo de Ana
        adicionarNome(arvore, 956, "Noemy");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 957 e 958)
        adicionarNome(arvore, 957, "Noemy");     // Filho esquerdo de Ana
        adicionarNome(arvore, 958, "Noemy");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 959 e 960)
        adicionarNome(arvore, 959, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 960, "Andrea");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 961 e 962)
        adicionarNome(arvore, 961, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 962, "Andrea");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 963 e 964)
        adicionarNome(arvore, 963, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 964, "Andrea");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 965 e 966)
        adicionarNome(arvore, 965, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 966, "Andrea");   // Filho direito de Ana

        // Filhos 1(Posições 967 e 968)
        adicionarNome(arvore, 967, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 968, "Andrea");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 969 e 970)
        adicionarNome(arvore, 969, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 970, "Andrea");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 971 e 972)
        adicionarNome(arvore, 971, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 972, "Andrea");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 973 e 974)
        adicionarNome(arvore, 973, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 974, "Andrea");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 975 e 976)
        adicionarNome(arvore, 975, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 976, "Andrea");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 977 e 978)
        adicionarNome(arvore, 977, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 978, "Andrea");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 979 e 980)
        adicionarNome(arvore, 979, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 980, "Andrea");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 981 e 982)
        adicionarNome(arvore, 981, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 982, "Andrea");   // Filho direito de Ana

        // Filhos 1(Posições 983 e 984)
        adicionarNome(arvore, 983, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 984, "Andrea");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 985 e 986)
        adicionarNome(arvore, 985, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 986, "Andrea");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 987 e 988)
        adicionarNome(arvore, 987, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 988, "Andrea");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 989 e 990)
        adicionarNome(arvore, 989, "Andrea");     // Filho esquerdo de Ana
        adicionarNome(arvore, 990, "Andrea");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 991 e 992)
        adicionarNome(arvore, 991, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 992, "Rosane");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 993 e 994)
        adicionarNome(arvore, 993, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 994, "Rosane");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 995 e 996)
        adicionarNome(arvore, 995, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 996, "Rosane");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 997 e 998)
        adicionarNome(arvore, 997, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 998, "Rosane");   // Filho direito de Ana

        // Filhos 1(Posições 999 e 1000)
        adicionarNome(arvore, 999, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 1000, "Rosane");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 1001 e 1002)
        adicionarNome(arvore, 1001, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 1002, "Rosane");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 1003 e 1004)
        adicionarNome(arvore, 1003, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 1004, "Rosane");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 1005 e 1006)
        adicionarNome(arvore, 1005, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 1006, "Rosane");   // Filho direito de Ana

        //professor
        // Filhos 1(Posições 1007 e 1008)
        adicionarNome(arvore, 1007, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 1008, "Rosane");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 1009 e 1010)
        adicionarNome(arvore, 1009, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 1010, "Rosane");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 1011 e 1012)
        adicionarNome(arvore, 1011, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 1012, "Rosane");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 1013 e 1014)
        adicionarNome(arvore, 1013, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 1014, "Rosane");   // Filho direito de Ana

        // Filhos 1(Posições 1015 e 1016)
        adicionarNome(arvore, 1015, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 1016, "Rosane");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 1017 e 1018)
        adicionarNome(arvore, 1017, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 1018, "Rosane");   // Filho direito de Ana

        //professo
        // Filhos 1(Posições 1019 e 1020)
        adicionarNome(arvore, 1019, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 1020, "Rosane");   // Filho direito de Ana

        //professores
        // Filhos 2 (Posições 1021 e 1022)
        adicionarNome(arvore, 1021, "Rosane");     // Filho esquerdo de Ana
        adicionarNome(arvore, 1022, "Rosane");   // Filho direito de Ana

        exibirArvore(arvore);

    return 0;
}
