#include <stdio.h>
#include <string.h>

int main() {
    /*
    char letra1 = 'M';    char letra2 = 'E';    char letra3 = 'L';    char letra4 = 'A';    char letra5 = 'O';
    printf("%c%c%c%c%c", letra1, letra2, letra3, letra4, letra5);
    A fim de não fazer assim todas as vezes, usaremos de um Array para guardar a palavra.
    */

    /*
    int notas[10]; e declarando as váriaveis: notas[0] = 10; notas[2] = 9; notas[9] = 4;
    printf("Notas %d - %d - %d", notas[0], notas[2], notas[9]);
    */

    /*
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

    sprintf(palavraSecreta, "MELANCIA");
    // printf("%s", palavraSecreta);

    int acertou = 0;
    int enforcou = 0;

    do {
        char chute;
        scanf("%c", &chute);

        for (int i = 0; i < strlen(palavraSecreta); i++) {
            if (palavraSecreta[i] == chute ) {
                printf("A posicao %d tem a letra %c\n", i, chute);
            } else {
                printf("A palavra nao tem a letra %c\n", chute);
            }
        }

    } while(!acertou && enforcou == 0); // Usar a exclamação para negar a condição é igual o '== 0'. Usamos isso porque as variáveis são boolenas.



    
}