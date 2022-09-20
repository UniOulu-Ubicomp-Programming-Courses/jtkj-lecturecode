struct tietorakenteen_tyyppinimi { 
   Tyyppi1 jäsen1;
   Tyyppi2 jäsen2;
   ...
   Tyyppi1 jäsen1;
} 

struct structure_name {
	Type1 member1;
	Type2 member2;
	...
	Type3 memmber3
}

struct point {
   uint16_t x; 
   uint16_t y; 
   char nimi[16]; 
}; 

struct rect {
   struct point max; 
   struct point min;
   struct point all_points[10]; 
}; 


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
  

  struct point piste2;
  piste2.x = 320;
  piste2.y = 200;
  strncpy (piste2.nimi, "Keskipiste", strlen ("Keskipiste"));
  

  struct point piste3 = { 320, 200, "Keskipiste" };
  
  
  struct Point  {
    uint16_t x;
    uint16_t y;
    char nimi[20];
  };
  struct Point p1 = {200,100,"origo"};
  struct Point p2 = p1;
  
  strncpy (piste1.nimi, "mid", 3);
  
  struct point {
	uint16_t x;
	uint16_t y;
	char name;
} piste = { 160, 100,'a') ;

sizeof(point) >= sizeof(uint16_t)+sizeof(uint16_t)+sizeof(char)

struct point {
   uint16_t x;
   uint16_t y;
   char nimi[20];
} piste1;

struct point {
   uint16_t x;
   uint16_t y;
} 

struct rect {
   struct point pt1;
   struct point pt2;
} 

struct rect box;
box.pt1.x = 320;
box.pt1.y = 220;
struct point pt = {100,200}; 
box.pt2  =  pt;

struct rect {
	struct point {
		uint16_t x;
		uint16_t y;
	} pt1, pt2;
} square = {.pt1.x =100, .pt1.y=100, .pt2.x=150, .pt2.y=150}

enum Sensor {temperature, humidity, light, accelerometer} //temperature = 0, humidity=1, light=2, accelerometer=3

enum Sensor received_sensor_data = temperature; 

switch (received_sensor_data){
	case temperature:
	//operation
	break;
	case humidity:
	//operation
	break;
	case light:
	//operation
	break;
	case accelerometer:
	//operation
	break;
}

// Korvataan tyyppi uint16_t nimellä Length
typedef uint16_t Temperature; 
Temeperature temp = 100;
printf("%d\n", temp);


typedef struct Point; 
Point point = {100,200};

#include <stdio.h>
#include "wifi_network.h"

#define PI 3.14159
float calculate_length (float radius){
	return 2 * PI * radius
}

#define TRUE 1
...
printf("TRUE"); // This is not substituted
int x = TRUETRUE; // This is not substituted

#define FOREVER for(;;)
#define INC(A) A++;
#define MAX(A,B) ((A)>(B)? (A):(B))

for (x=0; x < 100; INC A) {}

int x = 2;
int y = 8;
int max = MAX(x,y);

#define FOREVER for(;;)
#define INC(A) A++;
#define MAX(A,B) ((A)>(B)? (A):(B))

for (x=0; x < 100; x++) {}
int x = 2;
int y = 8;
int max = ((x) > (y) ? (x) : (y)) ;

#define MAX(A,B) ((A)>(B)? (A):(B))
int max = MAX (0x02 | 0x01, 0x05);

#define MAX(A,B) A > B ? A : B 
int max = MAX (0x02 | 0x01, 0x05);


#define SET(register,bit) (register |= bit) // set register bit (position 'bit' in the register goes to 1)
#define CLEAR(register,bit) (register &= (~bit)) // clear register bit (position 'bit' in the register goes to 0)
#define TEST(register,bit) (register & (1 << bit)) // test if a bit in the register is 1 or 0

#ifdef __unix__ // Testaa onko vakio __unix__ asetettu
   #include <unix.h>
#elif defined _WIN32 // Testaa onko vakio _WIN32 asetettu
   #include <windows.h>
#endif

#if VERSION < 190
   #error versions below 1.9.0 not supported
#endif

float sum(a,b);
int main () {
	int x = 1;
	int y = 2;
	int z = sum (a,b);
#ifdef DEBUG
	printf ("The sum of %d and %d is %d", x, y, z);
#endif
}

#ifndef _HDR // Tarkista onko vakio _HDR asetettu
   #define _HDR // Aseta vakio _HDR
   #include "HDR.h"
   // Otsikkotiedoston esittelyt
   ...
#endif

#ifdef __AVR_ATmega128__
   #define BUTTON1_DOWN (!(PINA & (1 << PA0)))
#else ifdef __AVR_ATtiny13__
   #define BUTTON1_DOWN (!(PINB & (1 << PB2)))
#endif
..
   // myöhemmin koodissa
   if (BUTTON1_DOWN == VAKIO) { ...
   ...
   }
   
 
#ifndef __PASTA_H_ // Hox! Vakiolla estetään uudelleenkäännös
#define __PASTA_H_

#include <stdio.h>

// Funktioiden prototyypit
uint8_t lisaa_vesi(void);
uint8_t lisaa_suola(void);
uint8_t kiehuuko_vesi(void);
void hammenna_kattilaa(void);
void aseta_keittoaika(void);
uint8_t onko_valmista(void);

// Uusi muuttujatyyppi vakioille, jännää!!
enum pasta_types { SPAGETTI=1,  MAKARONI, FUSILLI, PENNE_RIGATE };

// Globaalit muuttujat
uint8_t _annoskoko; // Tämä muuttuja alustetaan pääohjelmassa
uint8_t _valittu_pasta = SPAGETTI;

#endif

void set_annoskoko(uint8_t annoksia) {
   _annoskoko = annoksia;
}
uint8_t get_annoskoko(void) {
   return _annoskoko;
}

#include "pasta.h" // Pakottaa kirjaston funktiot noudattamaan prototyyppejä

// Kirjaston sisäiset muuttujat
uint8_t _vesimaara = 0;
uint8_t _keittoaika = 0;
uint8_t _annoskoko = 0; // Siirsimme muuttujan tänne otsikkotiedostosta!!

// Funktiot
void set_annoskoko(uint8_t annoksia) {
   _annoskoko = annoksia;
}

uint8_t get_annoskoko(void) {
   return _annoskoko;
}

uint8_t lisaa_vesi(void) {

   _vesimaara = _annoskoko * 0.2;
}

void aseta_keittoaika(void) {

   switch(_valittu_pasta) {
      case SPAGETTI:
         _keittoaika = 10;
         break;
      case MAKARONI:
         _keittoaika = 8;
         break;
      ...
   }
}