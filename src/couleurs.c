# include <stdio.h>

int main()
{

    typedef struct couleur color;     //on dit struct couleur = color
    struct couleur      //déclaration de la structure couleur
    {
        unsigned char R;
        unsigned char G;
        unsigned char B;
        unsigned char A;
    };

    color tab[10];                              //déclaration d'un tableau de 10 structure couleur
    tab[0].R = 0x00;
    tab[0].G = 0x00;
    tab[0].B = 0x00;
    tab[0].A = 0x00;
    tab[1].R = 0x80;
    tab[1].G = 0x02;
    tab[1].B = 0x02;
    tab[1].A = 0x02;
    tab[2].R = 0x04;
    tab[2].G = 0x04;
    tab[2].B = 0x04;
    tab[2].A = 0x04;
    tab[3].R = 0x08;
    tab[3].G = 0x08;
    tab[3].B = 0x08;
    tab[3].A = 0x08;
    tab[4].R = 0x0A;
    tab[4].G = 0x0A;
    tab[4].B = 0x0A;
    tab[4].A = 0x0A;
    tab[5].R = 0x1C;
    tab[5].G = 0x1C;
    tab[5].B = 0x1C;
    tab[5].A = 0x1C;     //ect...  même chose pour 6 à 9

    printf("%#x\n",tab[1].R);
    printf("%#x\n",tab[3].A);
    printf("%#x\n",tab[5].G);
    return 0;
}