#include <stdio.h>

int main() {

    // Initialisation
    char etudiant[5][4][10] = {{"nom1","prenom1","adresse1","note"},{"nom2","prenom2","adresse2","note"},
    {"nom3","prenom3","adresse3","note"},{"nom4","prenom4","adresse4","note"},{"nom5","prenom5","adresse5","note"}};
    int note[5][2] = {{11,12},{13,14},{15,16},{17,18},{19,20}};
    char matiere[2][10] = {"ProgC","SysOS"} ;

    //Affichage
    for (int i = 0; i < 5; i++){ //Choix de l'étudiant
        for (int j = 0; j < 4; j++ ){ //Choix de sa caratéristique
            if(j == 3){ //Si ça caractéristique est une note l'afficher avec la matière
                printf("\n\t");
                for(int k = 0; k < 2; k++){
                    printf("%s -> %i \n\t",matiere[k],note[i][k]);
                }
            }
            else{ // Sinon afficher la caractéristique de l'étudiant
                printf("%s ",etudiant[i][j]);
            }
        }
        printf("\n");
    }

}