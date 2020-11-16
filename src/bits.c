#include <stdio.h>

int main() {

    int num = 524396;
    int position1 = 4, position2 = 20;

    //Vérifie si les 4eme et 20eme bits de gauche sont 1 
    if(0b10000000000000001000 & num)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return (0);
}