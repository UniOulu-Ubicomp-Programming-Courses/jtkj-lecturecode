#include <stdio.h>

// Function to update stats without pointers (inefficient and doesn't update the original variables)
void updateStats(int health, int strength, int agility, int item) {
    // Health potion increases health by 10
    // Strength potion increases strength by 10
    // Agility potion increases agility by 7
}

// Function to display stats
void displayStats(const char playerName[], int health, int strength, int agility) {
    printf("%s's stats:\nHealth: %d\nStrength: %d\nAgility: %d\n\n", playerName, health, strength, agility);
}

int main() {
    // Player 1 stats
    int health1 = 100, strength1 = 50, agility1 = 75;
    
    // Player 2 stats
    int health2 = 90, strength2 = 55, agility2 = 70;

    displayStats("Player 1", health1, strength1, agility1);
    displayStats("Player 2", health2, strength2, agility2);

    updateStats(health1, strength1, agility1, 1);  // Player 1 picks up a health potion
    printf("Player 1 picked up a health potion!\n\n");
    displayStats("Player 1", health1, strength1, agility1);  // Won't reflect updated stats

    updateStats(health2, strength2, agility2, 2);  // Player 2 picks up a strength potion
    printf("Player 2 picked up a strength potion!\n\n");
    displayStats("Player 2", health2, strength2, agility2);  // Won't reflect updated stats

    return 0;
}
