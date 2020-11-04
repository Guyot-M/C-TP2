#include <stdio.h>

int main() {

    int n;
    int i=0;
    int j=0;
    int k=0;
    char chaine1[]= "salut";
    char chaine2[]= "lapin";
    char chaine3[100];
   for (n=0; n<=10; n++ )
    {
        chaine2[n]=chaine1[n];      //remplace la chaine2 par la chaine1
    }

    while (chaine1[i] != '\0')  //tant que chaine[i] n'est pas vide
    {
        chaine3[i] = chaine1[i];   //concatene la chaine1 sur la chaine3
        i++;
    }
    while(chaine2[j] != '\0')
    {
        k = i + j;
        chaine3[k] = chaine2[j]; //concatene la chaine2 sur la chaine3
        j++;
        k++;
    }
    i=0;
    while(chaine3[i] != '\0')
    {
        i++;        //compteur nbr de caractères
    }

    printf("chaine1 : %s\n",chaine1);
    printf("chaine2 : %s\n",chaine2);
    printf("chaine3 : %s\n",chaine3);
    printf("la chaine3 fait :%d caracteres\n",i);

}