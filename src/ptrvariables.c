#include <stdio.h>
int main() {

    char c; //on créer la variable
    char *pC = &c; // On met sont adresse dans un pointeur
    *pC= 'b'; // On modifie ça valeur via son adresse grace au pointeur

    short s;
    short *pS = &s;
    *pS= 1;

    //etc. etc. C'est la même logique

    printf("--------------Signed---------------\n");
    printf("char %c\n", *pC); // On affiche la valeur
    printf("adresse char %p\n\n", pC); // ON affiche l'addresse.

    printf("short %d\n", *pS);
    printf("adresse short %p\n\n", pS);

    //etc. etc. C'est la même logique

  return (0);
}