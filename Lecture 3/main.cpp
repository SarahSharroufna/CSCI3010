#include <iostream>
#include <vector>
#include <string>
#include "functions_to_implement.cpp"

using namespace std;

int main()
{

    string s1 = "aaabbbccc";
    string s2 = "bbb";

    string result1 = RemoveAllSubstrings(s1, s2);
    cout << result1 << endl;

    // Glue string to join the colors
    vector<string> animals = {"Cat", "Cow", "Horse", "Fish"};
    string glue = " loves ";
    string result2 = Join(animals, glue);

    cout << result2 << endl;

    // Even Mask
    vector<int> numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<bool> evenMask = EvenMask(numbers);

    return 0;
}