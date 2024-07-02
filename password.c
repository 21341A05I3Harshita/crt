#include <stdio.h>
#include <string.h>

#define USERNAME "Harsheyy"
#define PASSWORD "password"

int main() {
    char inputUsername[20];
    char inputPassword[20];
    int attempts = 3;

    printf("Enter username: ");
    scanf("20%s", inputUsername);

    if (strcmp(inputUsername, USERNAME) == 0) {
        while (attempts > 0) {/`w3 
            printf("Enter password: ");
            scanf("%s", inputPassword);

            if (strcmp(inputPassword, PASSWORD) == 0) {
                printf("Login successful!\n");
                return 0;
            } else {
                attempts--;
                if (attempts > 0) {
                    printf("Incorrect password. You have %d more tries.\n", attempts);
                }
            }
        }
        printf("Account has been blocked.\n");
    } else {
        printf("Username not found.\n");
    }

    return 0;
}

