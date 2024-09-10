#include <stdio.h>
#include <string.h>

void abertura() {
    printf("*********************\n");
    printf("*   Jogo de Forca   *\n");
    printf("*********************\n");
}

void chuta(char chutes[26], int* tentativas) { // Colocamos a estrela para receber o endereço de tentativas
    char chute;
    scanf(" %c", &chute);
    
    chutes[(*tentativas)] = chute;
    (*tentativas)++;
}

int jaChutou (char letra, char chutes[26], int tentativas) {
    int achou = 0;

    for (int j = 0; j < tentativas; j++) {
        if (chutes[j] == letra) {
            achou = 1; 
            break;
        }
    }

    return achou;
}

void desenhaForca(char palavraSecreta[20], char chutes[26], int tentativas) {
    for (int i = 0; i < strlen(palavraSecreta); i++) {
        
        int achou = jaChutou(palavraSecreta[i], chutes, tentativas);

        if (achou) {
            printf("%c ", palavraSecreta[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

void escolhePalavra(char palavraSecreta[20]) {
    sprintf(palavraSecreta, "MELANCIA");
}

int main() {
    /* 1. Inicialiando uma palavra
    char letra1 = 'M';    char letra2 = 'E';    char letra3 = 'L';    char letra4 = 'A';    char letra5 = 'O';
    printf("%c%c%c%c%c", letra1, letra2, letra3, letra4, letra5);
    A fim de não fazer assim todas as vezes, usaremos de um Array para guardar a palavra.
    */

    /* 2. Criando um Array
    int notas[10]; e declarando as váriaveis: notas[0] = 10; notas[2] = 9; notas[9] = 4;
    printf("Notas %d - %d - %d", notas[0], notas[2], notas[9]);
    */

    /* 3. Entendendo o Array com CHARACTER
    char palavraSecreta[5];
    palavraSecreta[0] = 'M';
    palavraSecreta[1] = 'E';
    palavraSecreta[2] = 'L';
    palavraSecreta[3] = 'A';
    palavraSecreta[4] = 'O';
    palavraSecreta[5] = '\0'; // Caractere de fim de string
    for (int i = 0; i < 5; i++) {
        printf("%c ", palavraSecreta[i]);
    }
    */

    char palavraSecreta[20];

    /* 9. Escolhendo a palavra secreta
        sprintf(palavraSecreta, "MELANCIA");
        printf("%s", palavraSecreta); // %s para string
    */

    int acertou = 0;
    int enforcou = 0;

    char chutes[26]; // Array para guardar os chutes
    int tentativas = 0; // Contador de tentativas

    /* 5. Fazendo um cabeçalho - ABERTURA
    printf("*********************\n");
    printf("*   Jogo de Forca   *\n");
    printf("*********************\n");
    */

    abertura();

    do {

        /* 8. Imprime a palavra secreta
        for (int i = 0; i < strlen(palavraSecreta); i++) {

            // 7. Verificando se a letra já foi chutada ou não
            //for (int j = 0; j < tentativas; j++) { // Percorre todas as tentativas feitas até o momento
            //    if (chutes[j] == palavraSecreta[i]) { // Percorre todas as letras da palavra secreta
            //        achou = 1; 
            //       break;
            //    }
            //}
            
            int achou = jaChutou(palavraSecreta[i], chutes, tentativas);

            if (achou) {
                printf("%c ", palavraSecreta[i]);
            } else {
                printf("_ ");
            }
            
        }
        printf("\n");
        */

        desenhaForca(palavraSecreta, chutes, tentativas);

        /* 4. Verificando se o chute está na palavra
        for (int i = 0; i < strlen(palavraSecreta); i++) { // Loop para varrer o Array verificando compatibilidade
            if (palavraSecreta[i] == chute ) {
                printf("A posicao %d tem a letra %c\n", i, chute);
            } else {
                printf("A palavra nao tem a letra %c\n", chute);
            }
        }
        */
        
        /* 6. Recebe um novo chute
        char chute;
        scanf(" %c", &chute); // Eu tenho que colocar o espaço para que ignore o ENTER para não ser contado como CHAR
        chutes[tentativas] = chute;
        tentativas++;
        */
        
        chuta(chutes, &tentativas); // Passamos o endereço em tentativas para se ler na função

    } while(!acertou && enforcou == 0); // Usar a exclamação para negar a condição é igual o '== 0'. Usamos isso porque as variáveis são boolenas.

}