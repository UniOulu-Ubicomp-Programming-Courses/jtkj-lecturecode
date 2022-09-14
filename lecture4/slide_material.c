if (luku < 10) {
    printf("Luku on pienempi kuin 10");
}
else if (luku < 100) {
    printf("Luku on pienempi kuin 100");
}
else if (luku < 1000) {
    printf("Luku on pienempi kuin 1000");
}
else {
    printf("Luku on yhtä suuri tai suurempi kuin 1000");
}

switch(valinta) {		
    case 'p':				
        pituus();		
        break;				
    case 'm':			
        massa();			
        break;			
    case 't':				
        tilavuus();		
        break;				
    case 'l':			
        lampotila();
        break;
    default:
        virhe();
        break;
}

! 

&& 

||

int8_t onko_lammin = -25; //true
int8_t onko_pimea = 0;//false
int8_t onko_kostea = 12;//true
int8_t onko_meluava = 0;//false
int8_t degrees = 25;

int8_t tulos1 !onko_kylma; true
int8_t tulos2 onko_lammin && onko_kostea//true (both are true)
int8_t tulos3 onko_lammin && onko_pimea //false (at least one is false)
int8_t tulos4 onko_lammin || onko_pimea //true (at least one is true)
int8_t tulos5 onko_pimea || onko_meluava//false (both are false)


// Python: ('a' <= merkki <= 'z')
if ((merkki >= 'a') && (merkki <= 'z')) 
   {
   ...
   }
   
   
lammin >= 25 && onko_pimea == meluava < onko_lammin || onko_pimea && !onko_koste

== vs = 

&& vs &

while (ehtolauseke) {
    lause;
    lause;
}

while (condition) {
    statement1;
    statement2;
}

for (alustuslause; ehtolause; sijoituslause) {
    lause;
    lause;
}

for (initialization; condition; increment) {
    statement1;
    statement2;
}

void print (void){
	printf("Stack content: [");
	int counter = 0;
	while (counter <= sp){
		printf("%.2f,",val[i]);
		counter ++;
	}
	printf("]\n");
}

initialization statement;
while (condition statement){
	statement1; 
	statement2;
	increment statement;
}

do {
   lause;
   lause;
} while (ehtolauseke);

do {
   statement1;
   statement2;
} while (condition statement);	

while (x > 0) {
    if (x == JANNA_VAKIO) {       
        break;
    }
    x = tee_jotain();
} 

for (x=0; x < 100; x++) {
    if (x == JANNA_VAKIO) {
       continue;
    }    
    tee_jotain();
}

int main() {         
   
   while (1) {    
      if (tarkista_syote()) {
         tee_jotain();
      }
    }                  
} 

int buttonPin = 3;

// setup initializes serial and the button pin
void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

// loop checks the button pin each time,
// and will send serial if it is pressed
void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    Serial.write('H');
  }
  else {
    Serial.write('L');
  }

  delay(1000);
}


#include <Arduino.h>

int main(void) {
    init();
   
    setup();
    
    for (;;) {
        loop();
        if (serialEventRun) serialEventRun();
    }     
    return 0;
}
int main() {
printf("muotoilumerkkijono", argumentti1, argumentti2, ..., argumenttiN);
printf("Format string", argument1, argument2, ..., argumentN);
}

#include <stdio.h>
#include <stdint.h>

int main (){
uint8_t a = 97;
printf("Luku on %d ja se plus yksi on %d\n", a, a+1);

// Tämä tulostaa näytölle: Luku on 97 ja se plus yksi on 98
}

#include <stdio.h>

int main (){
double num= 4.290903;
    printf("Using the wrong placeholder type %d: using %%d for writing a float\n", num);
    printf("Using a valid placeholder type %g: using %%g for writing a float\n", num);
    printf("Using the right placeholder type %f: using %%f for writing a float\n", num);
}

int main (){
	double a = 4.209; 
	int b = 23; 
	
	printf("Trying different lengths %2f",a);
	printf("Trying different lengths %2d",b);
}

#include <stdio.h>
#define LCD_MAX_WIDTH 	16

int main (){
    float pi = 3.14159;
    char lcd_str[LCD_MAX_WIDTH]; 
    
    sprintf(lcd_str,"%f\n",pi);
    printf("%s",lcd_str);
}
#include <stdio.h>
#include <stdint.h>
uint8_t c = 0;
int main() {
	do {
	   c = getchar();
	   printf(c);
	} while (c != '\n');
}
#include <stdio.h>
#include <stdint.h>
int main() {
	uint32_t luku=0;
	scanf("%ld",&luku); 
	printf("%ld\n",luku);
}

#include <stdio.h>
#include <stdint.h>
int main() {
	char buffer [128];
	scanf("%s",buffer); 
	printf("%s\n",buffer);
}

int8_t x = 42;
uint32_t pointer=&x;  

int8_t x = 42;
int8_t *pointer=&x;

#include <stdio.h>
#include <stdint.h>
int main() {
	int8_t x = 54;
	printf("x:n arvo on %d ja muistiosoite %p\n",x,&x);
	printf("The value of x is %d and its memory address %p",x,&x);	
}

int8_t *osoitin_a = &a; 
int8_t *osoitin_b = NULL; 

int8_t a = 47;
int8_t *osoitin_a = &a;
*osoitin_a = 23; // muutetaan osoittimen kautta a:n arvoa

uint16_t x = 0xBEEF;
uint16_t *osoitin_x = &x;	
printf("x=%x\n",*osoitin_x); 


int main() {
   char merkkijono[] = "XYZ";	
   char *tapa_1 = &merkkijono[0]; // alustustapa 1
   char *tapa_2 = &merkkijono;    // alustustapa 2
   char *tapa_3 = merkkijono;     // alustustapa 3

   // Tulostetaan merkkijono	
   printf("%s\n", merkkijono);
   printf("%s\n", tapa_1);
   printf("%s\n", tapa_2);
   printf("%s\n", tapa_3);
	
   return 0;
}

// funktion prototyyppi
void laheta_radioviesti(char viesti[]); 
...
// esitellään iiiiiso taulukko
char viesti_kotiin[2048];
...
// kutsutaan funktiota
laheta_radioviesti(viesti_kotiin);
...

// funktion prototyyppi
void laheta_radioviesti(char *viesti[]); 
...
// esitellään iiiiiso taulukko
char viesti_kotiin[2048];
...
// kutsutaan funktiota
laheta_radioviesti(viesti_kotiin);
...

char *strcat(char *dest, const char *src)


#include <string.h>
#include <stdio.h>

int main () {
  char str[] = "1234567890,temperature,27,C"; 
  const char sep[] = ",";  // Erotin pilkku
  char *token; // paikkamerkki-osoitin
   
  // Erota viestistä ensimmäinen osa
  token = strtok(str, sep);
   
  // Erota silmukassa loput osat 
  while( token != NULL ) {
    printf("%s\n",token);

    // Funktio uudelleen, jatketaan paikkamerkistä
    token = strtok(NULL, sep);
    }
   
  return(0);
}

int8_t x = 54;
int8_t *pointer=&x;
int8_t b = *pointer;