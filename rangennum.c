#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int num;
    int chsn;

    printf("Choose of a Number from 1-10 \n");

    do {
        printf("Choose a number: ");
        scanf("%d", &chsn);

        num = (rand() % 10) + 1;
        printf("My Guess: %d \n", num);
    } while (num != chsn);

    printf("HA! I guessed it right. \n");

    return 0;
}