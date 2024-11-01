#include "CppUnitTest.h"

extern "C" {
#include "../RPS Lib/rps.h"
}

constexpr auto ROCK = "Rock";
constexpr auto PAPER = "Paper";
constexpr auto SCISSORS = "Scissors";

constexpr auto PLAYER_1_WINS = "Player1";
constexpr auto PLAYER_2_WINS = "Player2";
constexpr auto DRAW = "Draw";
constexpr auto INVALID_INPUT = "Invalid";

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSLibTests
{
    TEST_CLASS(RPSLibTests)
    {
    public:
        
        TEST_METHOD(Draw_WhenRockVsRock)
        {
            const char* PLAYER_1_INPUT = ROCK;
            const char* PLAYER_2_INPUT = ROCK;
            const char* EXPECTED = DRAW;

            char actual[RESULT_MAX_LENGTH] = { 0 };
            runRps(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Player2Wins_WhenRockVsPaper)
        {
            const char* PLAYER_1_INPUT = ROCK;
            const char* PLAYER_2_INPUT = PAPER;
            const char* EXPECTED = PLAYER_2_WINS;

            char actual[RESULT_MAX_LENGTH] = { 0 };
            runRps(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Player1Wins_WhenRockVsScissors)
        {
            const char* PLAYER_1_INPUT = ROCK;
            const char* PLAYER_2_INPUT = SCISSORS;
            const char* EXPECTED = PLAYER_1_WINS;

            char actual[RESULT_MAX_LENGTH] = { 0 };
            runRps(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Player1Wins_WhenPaperVsRock)
        {
            const char* PLAYER_1_INPUT = PAPER;
            const char* PLAYER_2_INPUT = ROCK;
            const char* EXPECTED = PLAYER_1_WINS;

            char actual[RESULT_MAX_LENGTH] = { 0 };
            runRps(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Draw_WhenPaperVsPaper)
        {
            const char* PLAYER_1_INPUT = PAPER;
            const char* PLAYER_2_INPUT = PAPER;
            const char* EXPECTED = DRAW;

            char actual[RESULT_MAX_LENGTH] = { 0 };
            runRps(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Player2Wins_WhenPaperVsScissors)
        {
            const char* PLAYER_1_INPUT = PAPER;
            const char* PLAYER_2_INPUT = SCISSORS;
            const char* EXPECTED = PLAYER_2_WINS;

            char actual[RESULT_MAX_LENGTH] = { 0 };
            runRps(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            Assert::AreEqual(EXPECTED, actual);
        }
    };
}
