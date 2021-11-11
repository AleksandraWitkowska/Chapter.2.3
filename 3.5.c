#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wiek;
    printf ("Podaj swoj wiek:\n");
    scanf ("%d", &wiek);
    double wiekwsekundach = wiek * 3.156e7;
    printf ("Twoj wiek w sekundach wynosi %e\n", wiekwsekundach);

    return 0;
}
