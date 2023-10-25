#include <stdio.h>

void main(){
    int nilai;
    char grade;

    printf("=== Program Grade Nilai ===\n");
    printf("Inputkan nilai: ");
    scanf("%i", &nilai);

    // menggunakan percabangan if/esle/if
    if (nilai >= 90) {
        grade = 'A';
	printf ("Perfect!");
    } 
      else if (nilai >= 80) {
        grade = 'B';
	printf("Good Job!"); 
    }
      else if (nilai >= 70) {
        grade = 'B';
	printf("Not bad!");
    } 
      else if (nilai >= 60) {
        grade = 'C';
	printf("Almost there!");
    } 
      else if (nilai >= 50) {
        grade = 'C';
	printf("Cmon you can do better!");
    } 
      else if (nilai >= 40) {
        grade = 'D';
	printf("Please do better!");
    } 
      else if (nilai >= 30) {
        grade = 'E';
	printf("Do better next time. Don't give up!");
    } 
      else {
        grade = 'T';
	printf("Study more! Don't give up!");
    }

    printf("Nilai: %i\n", nilai);
    printf("Grade anda: %c\n", grade);
}
