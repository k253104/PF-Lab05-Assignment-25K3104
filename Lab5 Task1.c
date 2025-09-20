#include <stdio.h>

int main() {
    char color;

    printf("Enter the traffic light color (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &color);

    if (color == 'R') {
        printf("Stop\n");
    } 
    else {
        if (color == 'Y') {
            printf("Caution\n");
        } 
        else {
            if (color == 'G') {
                printf("Go\n");
            } 
            else {
                printf("Invalid input! Please enter R, Y, or G.\n");
            }
        }
    }

    return 0;
}

