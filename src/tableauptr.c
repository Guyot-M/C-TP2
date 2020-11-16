#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {

    #define SIZE 100

    int tabInt[100];
    int *pTableInt = tabInt;
    float tabfloat[100];
    float *pTabfloat = tabfloat;
   
    /* Initialise le générateur de nombre aléatoir */
    srand(time(NULL));

    printf("-------Tableau de int initial--------\n");
    //On allimente le tableau de nombre aléatoir entre 0 et 100 et affiche le tableau initial
    for(int i = 0 ; i < SIZE ; i++ ) {
        *(pTableInt+i)=rand() % 101;
        printf("%d ", *(pTableInt+i));
    }
    printf("\n\n-------Tableau de float initial--------\n");
    //On allimente le tableau de nombre aléatoir entre 0 et 100 et affiche le tableau initial
    for(int i = 0 ; i < SIZE ; i++ ) {
        *(pTabfloat+i)=(float)((float)rand()/((float)RAND_MAX/101));
        printf("%f ", *(pTabfloat+i));
    }


    printf("\n\n-------Tableau de int modifier--------\n");
    //On modifie et affiche le tableau int
    for(int i = 0; i < SIZE; i++)
    {
        if((*pTableInt+i)%2 == 0)
            *(pTableInt+i) *= 3;
      printf("%d ", *(pTableInt+i));
    }

    printf("\n\n-------Tableau de int modifier--------\n");
    //On modifie et affiche le tableau int
    for(int i = 0; i < SIZE; i++)
    {
        if((*pTableInt+i)%2 == 0)
            *(pTabfloat+i) *= 3;
     printf("%f ", *(pTabfloat+i));
    }
    printf("\n");
    
    return (0);
}