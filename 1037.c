#include <stdio.h>
int main (void){
    double X;
    scanf("%lf",&X);
    if(0 > X || 100 < X)
    printf("Fora de intervalo\n");
    else if(X <= 25.0)
    printf("Intervalo [0,25]\n");

    else if(X <= 50.0)
    printf("Intervalo (25,50]\n");
    
    else if(X <= 75.0)
    printf("Intervalo (50,75]\n");
    
    else if(X <= 100.0)
    printf("Intervalo (75,100]\n");
    
    

    return 0;
}