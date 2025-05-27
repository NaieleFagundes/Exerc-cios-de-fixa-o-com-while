// programa em C que solicita 10 números ao usuário, 
//através de um laço while, e ao final mostra os dois maiores números 
//digitados pelo usuário

#include <stdio.h>
int main (){
    int cont = 1, n, maior1=0, maior2=0;
    
    printf ("Digite 10 números: \n");
    while (cont <=10 ){
        printf ("%d) ",cont);
        scanf ("%d", &n);
        if (n > maior1){
            maior2 = maior1;
            maior1 = n;
        } else if (n > maior2) {
            maior2 = n; 
        }
        cont++; 
    }
    printf ("Os dois maiores número são: %d e %d", maior1, maior2);
return 0;

}