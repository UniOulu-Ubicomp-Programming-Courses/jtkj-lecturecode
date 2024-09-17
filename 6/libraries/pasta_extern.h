//pasta.h
#pragma once 
#include <stdio.h>

// Function prototypes
uint8_t add_water(void);
uint8_t add_salt(void);
uint8_t is_water_boiling(void);
void stir_pot(void);
void set_cooking_time(void);
uint8_t is_ready(void);

// New enum type for constants, exciting!!
enum pasta_types { SPAGHETTI=1,  MACARONI, FUSILLI, PENNE_RIGATE };

extern uint8_t _portion_size;//We indicate that variable would be later declared. 