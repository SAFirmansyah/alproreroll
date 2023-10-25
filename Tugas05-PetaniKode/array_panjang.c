#include <stdio.h>

void main(){
    // membuat array
    int nilai[5] = {2, 22, 31, 47, 59};

    //  mengambil banyaknya isi array
    int length = sizeof(nilai) / sizeof(*nilai);

    printf("Banyaknya isi array nilai: %d\n", length);
}
