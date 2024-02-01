#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

using namespace std;

TEST_CASE("Vectors are joined with glue string", "[join]")
{
    vector<string> animals = {"Cat", "Cow"};
    string glue = " loves ";

    REQUIRE(Join(animals, glue) == "Cat loves Cow");
}

TEST_CASE("Checking EvenMask Function", "[evenMask]")
{
    vector<int> numbers = {0, 1, -1, 4, -4, 100000};
    vector<int> expected = {true, false, false, true, true, true};
    vector<bool> result = EvenMask(numbers);

    // compare result with expected values
    SECTION("EvenMask values are computed")
    {

        for (size_t i = 0; i < numbers.size(); i++)
        {
            CHECK(result[i] == expected[i]);
        }
    }
}