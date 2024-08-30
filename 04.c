#include <stdio.h>

int main(){

    int number, result;

    printf("Insert a number: ");
    scanf("%d", &number);

    result = number;
    for (int i = number - 1; i > 1; i--) {
        result *= i;
    }

    printf("%d", result);

    return 0;
}