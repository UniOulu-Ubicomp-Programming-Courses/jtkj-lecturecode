#include <stdio.h>
#include <stdint.h>

// Define the LCD register and bit masks
const uint16_t RESET_BIT_MASK = 0x01;       // 0b0000000000000001
const uint16_t RW_BIT_MASK    = 1 << 1;     // 0b0000000000000010
const uint16_t ENABLE_BIT_MASK= 1 << 2;     // 0b0000000000000100
const uint16_t DATA_MASK      = 0x07F8;     // 0b0000011111111000

// Simulated LCD register
uint16_t lcd_register = 0x04;

// Check if the LCD is enabled
int isLCDEnabled() {
	
    return (lcd_register & ENABLE_BIT_MASK) >> 2;
}

// Write data to the LCD
void writeDataToLCD(uint8_t data) {
    if (isLCDEnabled()) {
        // Clear previous data
        lcd_register = lcd_register & ~DATA_MASK;
        // Set the new data
        lcd_register = lcd_register | (data << 3) & DATA_MASK;
        // Set the R/W bit to 0 (write mode)
        lcd_register =lcd_register & ~RW_BIT_MASK;
    }
}

// Reset the LCD
void resetLCD() {
    lcd_register |= RESET_BIT_MASK;
    lcd_register &= ~ENABLE_BIT_MASK;  // Optionally, disable the LCD during reset
    // Additional reset operations can be added here if needed
}

int main() {
    // Example usage
    if (isLCDEnabled()) {
        writeDataToLCD(0xAA);  // Write 0xAA to the LCD
        printf("Writen data to LCD");
    } else {
        printf("LCD is not enabled!\n");
    }

    return 0;
}