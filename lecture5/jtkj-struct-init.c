#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main ()
{
    struct point
  {
    uint16_t x;
    uint16_t y;
    char nimi[20];
  } piste1;

  piste1.x = 320;
  piste1.y = 200;
  char keskipiste[] = "Keskipiste";
  
  strncpy (piste1.nimi, keskipiste, strlen (keskipiste));
  printf("%d,%d,%s\n", piste1.x, piste1.y,piste1.nimi);

  struct point piste2;
  piste2.x = 320;
  piste2.y = 200;
  strncpy (piste2.nimi, "Keskipiste", strlen ("Keskipiste"));
  printf("%d,%d,%s\n", piste2.x, piste2.y,piste2.nimi);

  struct point piste3 = { 320, 200, "Keskipiste" };
  printf("%d,%d,%s\n", piste3.x, piste3.y,piste3.nimi);

  return 0;
}