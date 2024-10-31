#include "CppUnitTest.h"

extern "C" {
#include "../RPS Lib/rps.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSLibTests
{
    TEST_CLASS(RPSLibTests)
    {
    public:

        TEST_METHOD(Player1Wins_WhenRockVsScissors)
        {
            const char* PLAYER_A_INPUT = "Rock";
            const char* PLAYER_B_INPUT = "Scissors";
            const char* EXPECTED = "Player1";

            char actual[RESULT_MAX_LENGTH] = { 0 };
            runRps(PLAYER_A_INPUT, PLAYER_B_INPUT, actual);

            Assert::AreEqual(EXPECTED, actual);
        }
    };
}
