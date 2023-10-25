#include <stdio.h>

void main(){

    char grade;

    printf("Inputkan grade: ");
    scanf("%c", &grade);

    switch (grade){
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
        case 'C':
            printf("NC!\n");
            break;
        case 'D':
            printf("Anda lulus, tapi tipis\n");
            break;
        case 'E':
        case 'F':
            printf("Anda remidi\n");
            break;
        default:
            printf("Grade Salah!\n");
    }
}
