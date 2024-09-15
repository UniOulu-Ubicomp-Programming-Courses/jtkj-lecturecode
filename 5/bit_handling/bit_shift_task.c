#include <stdio.h>
#include <stdint.h>

// Define the LCD register and bit masks
const uint16_t RESET_BIT_MASK = 0x01;       // 0b0000000000000001
const uint16_t RW_BIT_MASK    = 1 << 1;     // 0b0000000000000010
const uint16_t ENABLE_BIT_MASK= 1 << 2;     // 0b0000000000000100
const uint16_t DATA_MASK      = 0x07F8;     // 0b0000011111111000

// Simulated LCD register
uint16_t lcd_register = 0;

// Task 1: Create a function to check if the LCD is enabled
int isLCDEnabled() {
    // TODO: Implement this function using bit masking
    return 0;  // Placeholder return
}

// Task 2: Create a function to write data to the LCD
void writeDataToLCD(uint8_t data) {
    // TODO: Check if the LCD is enabled

    // TODO: Set the data bits in lcd_register

    // TODO: Set the R/W bit to 0 (write mode)
}

// Task 3: Create a function to reset the LCD
void resetLCD() {
    // TODO: Implement this function to reset the LCD
}

int main() {
    // Example usage
    if (isLCDEnabled()) {
        writeDataToLCD(0xAA);  // Write 0xAA to the LCD
    } else {
        printf("LCD is not enabled!\n");
    }

    return 0;
}
