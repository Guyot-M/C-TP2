#include <stdio.h>

int main() {

    int a = 5;
    int b = 8;
    int result = a;

    for(int i=1; i < b; i++ ){ 
        result *= a;
    }
    printf("5^8 = %i\n", result);
    return (0);
}