#include <stdio.h>

int main() {

char a=97;
double f = 1.23456789;
char yksi[] = "Yksi";
char kaksi[] = "Kaksi";

printf("Muuttuja a on samaan aikaan %04d, '%c' ja 0x%x, kaikki ovat %d%% oikein\n",a,a,a,100);
printf("Variable a is at the same time %04d, '%c' ja 0x%x, all are %d%% right\n",a,a,a,100);
printf("Muuttuja f on %.4f kun tulostetaan vain osa desimaaleja\n",f);
printf("Variable f on %.4f when printing only part of the decimal numbers\n",f);
printf("%s %s Kolme\n", yksi, kaksi);

return 0;
}