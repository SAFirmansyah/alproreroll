#include <stdio.h>

void main(){
    printf("== Program Pembayaran ==\n");
    int purchase = 0;

    printf("Inputkan total belanja: ");
    scanf("%i", &purchase);

    // menggunakan blok percabangan if
    if( purchase > 50000 ){
        printf("Selamat, Anda mendapatkan Poin!\n");
    }
    printf("Terimakasih sudah berbelanja di toko kami\n\n");
}
