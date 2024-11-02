#include "rps.h"

#include <string.h>

// Input constants
#define ROCK "Rock"
#define PAPER "Paper"
#define SCISSORS "Scissors"

// Result constants
#define PLAYER_1_WINS "Player1"
#define PLAYER_2_WINS "Player2"
#define DRAW "Draw"
#define INVALID_INPUT "Invalid"

void runRps(const char* player1Input, const char* player2Input, char result[RESULT_MAX_LENGTH]) {
    // Initialize with invalid input message by default
    char* resultString = INVALID_INPUT;

    if (strcmp(player1Input, ROCK) == 0) {
        // Rock vs rock - draw
        if (strcmp(player2Input, ROCK) == 0) {
            resultString = DRAW;
        }
        // Rock vs paper - paper
        else if (strcmp(player2Input, PAPER) == 0) {
            resultString = PLAYER_2_WINS;
        }
        // Rock vs scissors - rock
        else if (strcmp(player2Input, SCISSORS) == 0) {
            resultString = PLAYER_1_WINS;
        }
    }
    else if (strcmp(player1Input, PAPER) == 0) {
        // Paper vs rock - paper
        if (strcmp(player2Input, ROCK) == 0) {
            resultString = PLAYER_1_WINS;
        }
        // Paper vs paper - draw
        else if (strcmp(player2Input, PAPER) == 0) {
            resultString = DRAW;
        }
        // Paper vs scissors - scissors
        else if (strcmp(player2Input, SCISSORS) == 0) {
            resultString = PLAYER_2_WINS;
        }
    }
    else if (strcmp(player1Input, SCISSORS) == 0) {
        // Scissors vs rock - rock
        if (strcmp(player2Input, ROCK) == 0) {
            resultString = PLAYER_2_WINS;
        }
        // Scissors vs paper - scissors
        else if (strcmp(player2Input, PAPER) == 0) {
            resultString = PLAYER_1_WINS;
        }
        // Scissors vs scissors - draw
        else if (strcmp(player2Input, SCISSORS) == 0) {
            resultString = DRAW;
        }
    }

    // Copy resultString to result array
    strncpy_s(result, RESULT_MAX_LENGTH * sizeof(char), resultString, strlen(resultString));
}