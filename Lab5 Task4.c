#include <stdio.h>

int main() {
    int amount, limit = 500 ;

    printf("Enter the withdrawal amount: ");
    scanf("%d", &amount);

    if (amount <= limit) {
        if (amount % 20 == 0) {
            printf("Withdrawal approved.\n");
        } 
        else {
            printf("Withdrawal denied.\n");
        }
    } 
    else {
        printf("Withdrawal denied.\n");
    }

    return 0;
}

