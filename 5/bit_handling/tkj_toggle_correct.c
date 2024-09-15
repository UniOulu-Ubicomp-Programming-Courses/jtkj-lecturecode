#include <stdio.h>
#include <stdint.h>

// Global register variable
uint8_t g_register = 0x55;  // 0b01010101

// Define for the toggle mask to be used in main
#define MAIN_TOGGLE_MASK 0x0A  // 0b00001010

// expected output: 0b01011111


// Function to toggle bits based on a given mask
void toggle(uint8_t mask) {
        

    g_register = g_register ^ (mask & g_register);
    
    printf("After correct toggle:   0x%02X\n", g_register);
}

int main() {
    printf("Initial register value: 0x%02X\n", g_register);

    // Call toggle function with the defined mask
    toggle(MAIN_TOGGLE_MASK);

    return 0;
}