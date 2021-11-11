#include <stdio.h>
#include <stdlib.h>

int main(void)
{ int age, days;
  age= 25;
  days= 365 * age;
  int yourage;
  printf ("Mam %d lat, czyli %d dni.\n",age, days);
  printf ("Ile masz lat?\n");
  scanf ("%d", &yourage);
  int youragedays= yourage * 365;
  printf ("Ty masz %d lat, czyli %d dni.\n", yourage, youragedays);
  return 0;


}
