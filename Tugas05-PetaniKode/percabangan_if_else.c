#include <stdio.h>

void main(){
    // membuat array karakter untuk menyimpan password
    char password[30];

    printf("==== Program Login ====\n");
    printf("Masukan password: ");
    scanf("%s", &password);

    // percabangan if/esle
    if( strcmp(password, "Profit") == 0 ){
        printf("Selamat datang Calon Orang Sukses!\n");
    } else {
        printf("Password salah, coba lagi!\n");
    }

    printf("Terimakasih sudah menggunakan aplikasi ini!\n");
}
