#include <stdio.h>

void kali_tiga(int *num){
    *num = *num * 3;
}

void main(){
    int angka = 9;

    // memanggil fungsi
    kali_dua(&angka);

    // mencetak isi variabel
    // setelah fungsi dipanggil
    printf("isi variabel angka = %d\n", angka);
}
