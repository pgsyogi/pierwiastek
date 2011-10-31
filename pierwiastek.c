#include <stdio.h>
#include <math.h>

double x,y;

int main(){

    printf("Podaj liczbę rzeczywistą: ");
    scanf("%lf" , &x);

y = sqrt(x);

    if (x<0) {
    printf("Podałeś liczbę ujemną...");
    }  else {
    printf("Pierwiastek kwadratowy z %lf to %lf\n", x, y);
    }
return 0;
}