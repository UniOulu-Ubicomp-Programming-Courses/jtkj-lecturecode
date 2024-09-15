#include <stdio.h>

// Define a Player struct to hold stats
typedef struct {
    char name[20];   // Player name
    int health;
    int strength;
    int agility;
} Player;

// Function to update stats using a pointer to the struct
void updateStats(Player *player, int item) {
    // Health potion increases health by 10
    // Strength potion increases strength by 10
    // Agility potion increases agility by 7
    switch (item) {
        case 1:  // Health potion
            player->health += 10;
            break;
        case 2:  // Strength potion
            player->strength += 10;
            break;
        case 3:  // Agility potion
            player->agility += 7;
            break;
    }
}

// Function to display stats
void displayStats(Player player) {
    printf("%s's stats:\nHealth: %d\nStrength: %d\nAgility: %d\n\n",
           player.name, player.health, player.strength, player.agility);
}

int main() {
    // Initialize two players
    Player player1 = {"Player 1", 100, 50, 75};
    Player player2 = {"Player 2", 90, 55, 70};

    // Display initial stats
    displayStats(player1);
    displayStats(player2);

    // Update stats by passing a pointer to the struct
    updateStats(&player1, 1);  // Player 1 picks up a health potion
    printf("%s picked up a health potion!\n\n", player1.name);
    displayStats(player1);  // Now reflects updated stats

    updateStats(&player2, 2);  // Player 2 picks up a strength potion
    printf("%s picked up a strength potion!\n\n", player2.name);
    displayStats(player2);  // Now reflects updated stats

    return 0;
}
