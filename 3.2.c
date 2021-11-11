#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int znak;

    printf("Podaj kod\n");
    scanf("%d", &znak);
    printf("Kod znaku %d to %c \n", znak, znak);

    return 0;
}
