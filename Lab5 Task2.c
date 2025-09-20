#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 0) {
        if (age <= 12) {
            printf("You're a Child\n");
        } 
        else {
            if (age <= 19) {
                printf("You're a Teenager\n");
            } 
            else {
                if (age <= 59) {
                    printf("You're an Adult\n");
                } 
                else {
                    printf("You're a Senior\n");
                }
            }
        }
    } 
    else {
        printf("Age cannot be negative.\n");
    }

    return 0;
}

