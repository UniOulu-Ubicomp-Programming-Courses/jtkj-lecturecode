// pasta.h
#pragma once

#include <stdio.h>

// Define the global variable directly 
uint8_t _portion_size = 0;

// Declare function prototypes
void set_portion_size(uint8_t portions);
uint8_t get_portion_size(void);

// pasta.c
#include "pasta.h"

// main.c
#include "pasta.h"