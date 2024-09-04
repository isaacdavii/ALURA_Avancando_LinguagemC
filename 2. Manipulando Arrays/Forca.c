#include <stdio.h>

int main() {
    // char letra1 = 'M';    char letra2 = 'E';    char letra3 = 'L';    char letra4 = 'A';    char letra5 = 'O';
    //printf("%c%c%c%c%c", letra1, letra2, letra3, letra4, letra5);
    // A fim de não fazer assim todas as vezes, usaremos de um Array para guardar a palavra.
    
    int notas[10];
    notas[0] = 10;
    notas[2] = 9;
    notas[9] = 4;

    printf("Notas %d - %d - %d", notas[0], notas[2], notas[9]);
}