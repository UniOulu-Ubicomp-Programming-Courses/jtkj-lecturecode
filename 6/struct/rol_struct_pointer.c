#include <stdio.h>

typedef struct {
    int health;
    int strength;
    int agility;
} Player;

#define MAX_PLAYERS 2

Player players[MAX_PLAYERS];

void updateStats(Player* player, int item) {
    switch (item) {
        case 1: // Health potion
            player->health += 10;
            break;
        case 2: // Strength potion
            player->strength += 5;
            break;
        case 3: // Agility potion
            player->agility += 7;
            break;
        default:
            printf("Unknown item!\n");
    }
}

void displayStats(const char* playerName, Player player) {
    printf("%s's Stats:\n", playerName);
    printf("Health: %d\n", player.health);
    printf("Strength: %d\n", player.strength);
    printf("Agility: %d\n\n", player.agility);
}

int main() {
    Player player0 = {100, 50, 30}; // Creation of Player 1
    Player player1 = {90, 55, 35};  // Creation of Player 2

    players[0] = player0;
    players[1] = player1;

    updateStats(&players[0], 1);
    printf("Player 1 picked up a health potion!\n\n");
    displayStats("Player 1", players[0]);

    updateStats(&players[1], 2);
    printf("Player 2 picked up a strength potion!\n\n");
    displayStats("Player 2", players[1]);

    return 0;
}
