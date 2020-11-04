# include <stdio.h>
# include <string.h>

int main()
{
    struct couleur //déclaration de la structure couleur
    {
        char R[5];
        char G[5];
        char B[5];
        char A[5];
    };

    struct couleur tabCouleur[10];

    char tab[10][4][30] =   {{"FF", "00", "00", "00"},
                            {"00", "FF", "00", "00"},
                            {"00", "00", "FF", "00"},
                            {"00", "00", "00", "FF"},
                            {"00", "00", "00", "00"},
                            {"FF", "FF", "FF", "FF"},
                            {"00", "FF", "00", "FF"},
                            {"FF", "00", "FF", "00"},
                            {"FF", "FF", "00", "00"},
                            {"00", "00", "FF", "FF"}};

    for(int i = 0; i < 10; i++){ 
        strcpy(tabCouleur[i].R, tab[i][0]);
        strcpy(tabCouleur[i].G, tab[i][1]);
        strcpy(tabCouleur[i].B, tab[i][2]);
        strcpy(tabCouleur[i].A, tab[i][3]);
    }

    for(int i = 0; i < 10; i++){ 
        printf("#%s",tabCouleur[i].R);
        printf("%s",tabCouleur[i].G);
        printf("%s",tabCouleur[i].B);
        printf("%s\n",tabCouleur[i].A);
    }

    return 0;
}