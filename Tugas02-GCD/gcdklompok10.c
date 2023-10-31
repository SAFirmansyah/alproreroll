#include <stdio.h>

void main(){
    int m,n,y;
    printf("Masukkan Nilai Pertama: ");scanf("%d", &m);
    printf("Masukkan Nilai Kedua: ");scanf("%d", &n);
    if (m>0 && n>0){
        while (n>0){
        y = n;
        n = m%n;
        m = y;
        }
    printf("GCD = %d\n", y);
    }
    else if(m==0 || n==0){
    printf("Bro, GCD calculations can't accept zeroes, cmon man\n");
    main ();
    }
    else{
    printf("Bro, this program is only for positive numbers, sorry man\n");
    main();
    }
}

