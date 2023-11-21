#include <stdio.h>

void add(int a, int b){
    printf("%d + %d = %d\n", a, b, a+b);
}

void main(){
    add(2, 7);
    add(8, 1);
    add(4, 5);
}
