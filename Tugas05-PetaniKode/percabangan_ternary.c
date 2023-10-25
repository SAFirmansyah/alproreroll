#include <stdio.h>

void main(){

    int jawaban;

    printf("Berapakah turunan 2x?\n");
    printf("jawab> ");
    scanf("%d", &jawaban);

    printf("Jawaban anda: %s\n", (jawaban == 2) ? "Benar" : "Salah");

}
