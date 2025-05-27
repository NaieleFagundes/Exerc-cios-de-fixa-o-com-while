//Escreva um aplicativo em C mostra todos os números ímpares de 1 até 100

#include <stdio.h>
int main (){

    int n;
    n = 1;
    printf ("Números ímpares de 1 até 100: \n");

    while (n <= 100) {
        printf ("%d \n", n);
        n = n + 2;
    }
    return 0;
}
