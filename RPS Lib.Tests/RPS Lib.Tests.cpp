#include "CppUnitTest.h"

extern "C" {
#include "../RPS Lib/rps.h"
}

// Input constants
constexpr auto ROCK = "Rock";
constexpr auto PAPER = "Paper";
constexpr auto SCISSORS = "Scissors";

// Result constants
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
            // Arrange
            const char* PLAYER_1_INPUT = ROCK;
            const char* PLAYER_2_INPUT = ROCK;
            const char* EXPECTED = DRAW;

            // Act
            char actual[RESULT_MAX_LENGTH] = { 0 };
            rockPaperScissors(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            // Assert
            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Player2Wins_WhenRockVsPaper)
        {
            // Arrange
            const char* PLAYER_1_INPUT = ROCK;
            const char* PLAYER_2_INPUT = PAPER;
            const char* EXPECTED = PLAYER_2_WINS;

            // Act
            char actual[RESULT_MAX_LENGTH] = { 0 };
            rockPaperScissors(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            // Assert
            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Player1Wins_WhenRockVsScissors)
        {
            // Arrange
            const char* PLAYER_1_INPUT = ROCK;
            const char* PLAYER_2_INPUT = SCISSORS;
            const char* EXPECTED = PLAYER_1_WINS;

            // Act
            char actual[RESULT_MAX_LENGTH] = { 0 };
            rockPaperScissors(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            // Assert
            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Player1Wins_WhenPaperVsRock)
        {
            // Arrange
            const char* PLAYER_1_INPUT = PAPER;
            const char* PLAYER_2_INPUT = ROCK;
            const char* EXPECTED = PLAYER_1_WINS;

            // Act
            char actual[RESULT_MAX_LENGTH] = { 0 };
            rockPaperScissors(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            // Assert
            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Draw_WhenPaperVsPaper)
        {
            // Arrange
            const char* PLAYER_1_INPUT = PAPER;
            const char* PLAYER_2_INPUT = PAPER;
            const char* EXPECTED = DRAW;

            // Act
            char actual[RESULT_MAX_LENGTH] = { 0 };
            rockPaperScissors(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            // Assert
            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Player2Wins_WhenPaperVsScissors)
        {
            // Arrange
            const char* PLAYER_1_INPUT = PAPER;
            const char* PLAYER_2_INPUT = SCISSORS;
            const char* EXPECTED = PLAYER_2_WINS;

            // Act
            char actual[RESULT_MAX_LENGTH] = { 0 };
            rockPaperScissors(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            // Assert
            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Player2Wins_WhenScissorsVsRock)
        {
            // Arrange
            const char* PLAYER_1_INPUT = SCISSORS;
            const char* PLAYER_2_INPUT = ROCK;
            const char* EXPECTED = PLAYER_2_WINS;

            // Act
            char actual[RESULT_MAX_LENGTH] = { 0 };
            rockPaperScissors(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            // Assert
            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Player1Wins_WhenScissorsVsPaper)
        {
            // Arrange
            const char* PLAYER_1_INPUT = SCISSORS;
            const char* PLAYER_2_INPUT = PAPER;
            const char* EXPECTED = PLAYER_1_WINS;

            // Act
            char actual[RESULT_MAX_LENGTH] = { 0 };
            rockPaperScissors(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            // Assert
            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Draw_WhenScissorsVsScissors)
        {
            // Arrange
            const char* PLAYER_1_INPUT = SCISSORS;
            const char* PLAYER_2_INPUT = SCISSORS;
            const char* EXPECTED = DRAW;

            // Act
            char actual[RESULT_MAX_LENGTH] = { 0 };
            rockPaperScissors(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            // Assert
            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Invalid_WhenInvalidPlayer1Input)
        {
            // Arrange
            const char* PLAYER_1_INPUT = "Bar";
            const char* PLAYER_2_INPUT = ROCK;
            const char* EXPECTED = INVALID_INPUT;

            // Act
            char actual[RESULT_MAX_LENGTH] = { 0 };
            rockPaperScissors(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            // Assert
            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Invalid_WhenInvalidPlayer2Input)
        {
            // Arrange
            const char* PLAYER_1_INPUT = ROCK;
            const char* PLAYER_2_INPUT = "Foo";
            const char* EXPECTED = INVALID_INPUT;

            // Act
            char actual[RESULT_MAX_LENGTH] = { 0 };
            rockPaperScissors(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            // Assert
            Assert::AreEqual(EXPECTED, actual);
        }

        TEST_METHOD(Invalid_WhenBothPlayersInvalidInput)
        {
            // Arrange
            const char* PLAYER_1_INPUT = "Foo";
            const char* PLAYER_2_INPUT = "Bar";
            const char* EXPECTED = INVALID_INPUT;

            // Act
            char actual[RESULT_MAX_LENGTH] = { 0 };
            rockPaperScissors(PLAYER_1_INPUT, PLAYER_2_INPUT, actual);

            // Assert
            Assert::AreEqual(EXPECTED, actual);
        }
    };
}
