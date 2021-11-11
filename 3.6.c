#include <stdio.h>
int main(void)
{
float objetosc;
float masaczasteczki = 3.0e-23;
printf ("Podaj objetosc wody w litrach\n");
scanf ("%f", &objetosc);
float masawody = objetosc * 1000;
printf ("Masa tej objetosci wody w gramach to %f \n", masawody);
float liczbaczasteczek = masawody / masaczasteczki;
printf ("Liczba czasteczek w tej objetosci to %e", liczbaczasteczek);


return 0;
}


