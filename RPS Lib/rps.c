#include "rps.h"

#include <string.h>

#define ROCK "Rock"
#define PAPER "Paper"
#define SCISSORS "Scissors"

#define PLAYER_1_WINS "Player1"
#define PLAYER_2_WINS "Player2"
#define DRAW "Draw"
#define INVALID_INPUT "Invalid"

void runRps(const char* player1Input, const char* player2Input, char result[RESULT_MAX_LENGTH]) {
    char* resultString = INVALID_INPUT;

    if (strcmp(player1Input, ROCK) == 0) {
        if (strcmp(player2Input, ROCK) == 0) {
            resultString = DRAW;
        }
        else if (strcmp(player2Input, PAPER) == 0) {
            resultString = PLAYER_2_WINS;
        }
        else if (strcmp(player2Input, SCISSORS) == 0) {
            resultString = PLAYER_1_WINS;
        }
    }
    else if (strcmp(player1Input, PAPER) == 0) {
        if (strcmp(player2Input, ROCK) == 0) {
            resultString = PLAYER_1_WINS;
        }
    }

    strncpy_s(result, RESULT_MAX_LENGTH * sizeof(char), resultString, strlen(resultString));
}