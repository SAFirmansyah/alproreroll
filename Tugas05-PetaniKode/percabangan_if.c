#include <stdio.h>

void main(){
    printf("== Program Pembayaran ==\n");
    int total_belanja = 0;

    printf("Inputkan total belanja: ");
    scanf("%i", &total_belanja);

    // menggunakan blok percabangan if
    if( total_belanja > 100000 ){
        printf("Selamat, Anda mendapatkan Poin!\n");
    }
    else if (total_belanja > 1000000){
	printf("Selamat, Anda mendapat Voucher belanja!\n");
    }
    printf("Terimakasih sudah berbelanja di toko kami\n\n");
}
