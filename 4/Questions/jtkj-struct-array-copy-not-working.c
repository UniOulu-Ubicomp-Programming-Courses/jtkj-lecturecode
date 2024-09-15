#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main (){
  struct Point  {
    uint16_t x;
    uint16_t y;
    int nimi[20];
  };
  struct Point p1 = {200,100,{1,2,3,4}};
  struct Point p2 = p1;
  printf ("Name of p1 is %p\n",p1.nimi);
  printf ("Name of p2 is %p\n\n",p2.nimi);
  strncpy (p1.nimi, "mid", 20);
  printf ("Name of p1 is %p\n",p1.nimi);
  printf ("Name of p2 is %p\n\n",p2.nimi);
  
}