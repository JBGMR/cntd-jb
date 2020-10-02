#include <stdio.h>
#include <stdlib.h>
int main() {
    int input;
    printf("Time to count down: ");
    scanf("%d", &input);
    printf("%d\n", input);
    system("cls");
        do {
        sleep(1);
        input = input - 1;
        printf("%d\n", input);
        } while (input > 0);
system("cls");
printf("\nFINISHED!\n");
return 0; }
