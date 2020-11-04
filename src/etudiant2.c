#include <stdio.h>
#include <string.h>

int main() {

    //Declaration de la structure notes
    struct notes{
        char matiere[30];
        short note;
    };

    //Declaration de la structure etudiant
    struct etudiant{
        char prenom[30];
        char nom[30];
        char adresse[30];
        struct notes les_notes[2]; //On créer un tableau de stucture notes contenu dans la structure etudiant
    };

    //On créer un tableau de structure etudiant
    struct etudiant mes_etudiant[5];

    //Initalisation de la structure mes_etudiant
    strcpy(mes_etudiant[0].prenom, "Prenom1");
    strcpy(mes_etudiant[0].nom, "Nom1");
    strcpy(mes_etudiant[0].adresse, "Adresse1");

    //et de la strcuture les_notes contenu dans la structure mes_étudiant
    strcpy(mes_etudiant[0].les_notes[0].matiere, "ProgC");
    mes_etudiant[0].les_notes[0].note = 11;
    strcpy(mes_etudiant[0].les_notes[1].matiere, "SysOS");
    mes_etudiant[0].les_notes[1].note = 12;

    //Meme chose que précédemment
    strcpy(mes_etudiant[1].prenom, "Prenom2");
    strcpy(mes_etudiant[1].nom, "Nom2");
    strcpy(mes_etudiant[1].adresse, "Adresse2");
    strcpy(mes_etudiant[1].les_notes[0].matiere, "ProgC");
    mes_etudiant[1].les_notes[0].note = 13;
    strcpy(mes_etudiant[1].les_notes[1].matiere, "SysOS");
    mes_etudiant[1].les_notes[1].note = 14;

    strcpy(mes_etudiant[2].prenom, "Prenom3");
    strcpy(mes_etudiant[2].nom, "Nom3");
    strcpy(mes_etudiant[2].adresse, "Adresse3");
    strcpy(mes_etudiant[2].les_notes[0].matiere, "ProgC");
    mes_etudiant[2].les_notes[0].note = 15;
    strcpy(mes_etudiant[2].les_notes[1].matiere, "SysOS");
    mes_etudiant[2].les_notes[1].note = 16;

    strcpy(mes_etudiant[3].prenom, "Prenom4");
    strcpy(mes_etudiant[3].nom, "Nom4");
    strcpy(mes_etudiant[3].adresse, "Adresse4");
    strcpy(mes_etudiant[3].les_notes[0].matiere, "ProgC");
    mes_etudiant[3].les_notes[0].note = 17;
    strcpy(mes_etudiant[3].les_notes[1].matiere, "SysOS");
    mes_etudiant[3].les_notes[1].note = 18;

    strcpy(mes_etudiant[4].prenom, "Prenom5");
    strcpy(mes_etudiant[4].nom, "Nom5");
    strcpy(mes_etudiant[4].adresse, "Adresse5");
    strcpy(mes_etudiant[4].les_notes[0].matiere, "ProgC");
    mes_etudiant[4].les_notes[0].note = 19;
    strcpy(mes_etudiant[4].les_notes[1].matiere, "SysOS");
    mes_etudiant[4].les_notes[1].note = 20;

    //Affichage
    for(int i = 0; i < 5; i++){ //Choix de l'étudiant dans la structure mes_etudiant
        //Affichage des caracteristiques de l'étudiant
        printf("%s ",mes_etudiant[i].prenom);
        printf("%s ",mes_etudiant[i].nom);
        printf("%s ",mes_etudiant[i].adresse);
        printf("\n\t");
        //Dont ses deux notes contenu dans la structure les_notes
        for(int j = 0; j < 2; j++){
            printf("%s -> ",mes_etudiant[i].les_notes[j].matiere);
            printf("%d\n\t",mes_etudiant[i].les_notes[j].note);
        }
        printf("\n");
    }
}