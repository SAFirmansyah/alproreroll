#include <stdio.h>

void main(){
    char username[30], password[30];

    printf("=== Welcome to Awesome Program ===\n");
    printf("Username: ");
    scanf("%s", &username);
    printf("Password: ");
    scanf("%s", &password);

    if(strcmp(username, "TepungBeras") == 0){
        if(strcmp(password, "RoseBrand") == 0){
            printf("Tepung Beras Rose Brand~~\n");
        } else {
            printf("Password salah, coba lagi!\n");
        }
    } else {
        printf("Silahkan Sign Up dulu\n");
    }

}
