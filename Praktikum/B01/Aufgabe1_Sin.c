#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main(){
    
    double x;
    double result;

    /* FOR SCHLEIFE */
    printf("For Schleife\n");
    for(x = 0; x <= 360.0; x += 10.0){
        result = sin(x * PI / 180.0);
        printf("Winkel: %.3f Grad => Sinus-Funktionswert:  %.3f\n", x, result);
    }
    x = 0;

    /* WHILE SCHLEIFE */
    printf("While Schleife\n");

    while(x<= 360){
        result = sin(x * PI / 180.0);
        printf("Winkel: %.3f Grad => Sinus-Funktionswert:  %.3f\n", x, result);
        x += 10;
    }
    
    
    return 0;
}