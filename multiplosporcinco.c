#include <stdio.h>

int main() {
    
    int cont;

    for (cont = 1; cont <= 50; cont++) {
        if (cont % 5 == 0) {
            printf("%d\n", cont);
        }
    }

    return 0;
}