#include <stdio.h>

int main() {

    int n = 7;
    int U0 = 1, U1 = 1;
    int nextTerm;

    //Boucle pour créer la suite de fibonnacci
    for (int i = 1; i <= n; ++i) {

        printf("%d;", U0);
        nextTerm = U0 + U1;
        U0 = U1;
        U1 = nextTerm;
    }
     printf("\n");

    return 0;
}