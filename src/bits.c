#include <stdio.h>

int main() {

    int num = 524396;
    int position1 = 4, position2 = 20;

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