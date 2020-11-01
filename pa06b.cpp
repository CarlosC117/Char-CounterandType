/// @file pa06b.cpp
/// @author Carlos Chavez
/// @date 11/01/2020
/// @brief This programs counts the vowels, consonants, and digits
/// till the end of the file. Giving you them at the end.
/// @note I feel like I got stuck on the "easy" parts and went past
/// the "hard" parts of this assignment. Took around 5 hours to code
/// and fix up.

#include <iostream>
#include <string>

using namespace std;

// Function prototypes.
void count_chars(string str, int& vowels, int& consonants, int& digits);
void is_vowel(string str, int& vowels);
void is_consonant(string str, int& consonants);
void is_digit(string str, int& digits);

int main()
{
    string str;    // Contains the string to count v-c-d of file or line.
    int vowels = 0;    // Contains the vowel count.
    int consonants = 0;    // Contains the consonants count.
    int digits = 0;    // Contains the digits count.

    while (cin) {
        getline(cin, str);
        count_chars(str, vowels, consonants, digits);
    }

    cout << vowels << " " << consonants << " " << digits << endl;

    return 0;
}

/// ---------------------------------------------------------------------------
/// Returns the number of vowels, consonats, and digits
///
/// @param str used to count chars
/// @param vowels used for the function inside.
/// @param digits used for the function inside.
/// @param consonants used for the function inside
/// ---------------------------------------------------------------------------
void count_chars(string str, int& vowels, int& consonants, int& digits)
{
    is_vowel(str, vowels);
    is_consonant(str, consonants);
    is_digit(str, digits);

}

/// ---------------------------------------------------------------------------
/// Returns the number of vowels in the string.
///
/// @param str - string used to read for seeing how many vowels there are.
/// @param vowels - number counter for how many vowels
/// ---------------------------------------------------------------------------
void is_vowel(string str, int& vowels)
{
    for (unsigned i = 0; i < str.length(); ++i) {
        if (str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' ||
            str.at(i) == 'o' || str.at(i) == 'u' || str.at(i) == 'A' ||
            str.at(i) == 'E' || str.at(i) == 'I' || str.at(i) == 'O' ||
            str.at(i) == 'U') {
            ++vowels;
        }
    }
}

/// ---------------------------------------------------------------------------
/// Returns the number of consonants in the string.
///
/// @param str - string used to read for seeing how many consonants there are.
/// @param consonants - number counter for how many consonants
/// ---------------------------------------------------------------------------

void is_consonant(string str, int& consonants)
{
    for (unsigned i = 0; i < str.length(); ++i) {

        if (str.at(i) == 'b' || str.at(i) == 'c' || str.at(i) == 'd' ||
            str.at(i) == 'f' || str.at(i) == 'g' || str.at(i) == 'h' ||
            str.at(i) == 'j' || str.at(i) == 'k' || str.at(i) == 'l' ||
            str.at(i) == 'm' || str.at(i) == 'n' || str.at(i) == 'p' ||
            str.at(i) == 'q' || str.at(i) == 'r' || str.at(i) == 's' ||
            str.at(i) == 't' || str.at(i) == 'v' || str.at(i) == 'w' ||
            str.at(i) == 'x' || str.at(i) == 'y' || str.at(i) == 'z') {
            ++consonants;
        }
        else if (str.at(i) == 'B' || str.at(i) == 'C' || str.at(i) == 'D' ||
            str.at(i) == 'F' || str.at(i) == 'G' || str.at(i) == 'H' ||
            str.at(i) == 'J' || str.at(i) == 'K' || str.at(i) == 'L' ||
            str.at(i) == 'M' || str.at(i) == 'N' || str.at(i) == 'P' ||
            str.at(i) == 'Q' || str.at(i) == 'R' || str.at(i) == 'S' ||
            str.at(i) == 'T' || str.at(i) == 'V' || str.at(i) == 'W' ||
            str.at(i) == 'X' || str.at(i) == 'Y' || str.at(i) == 'Z') {
            ++consonants;
        }
    }
}
/// ---------------------------------------------------------------------------
/// Returns the number of digits in the string.
///
/// @param str - string used to read for seeing how many digits there are.
/// @param digits - number counter for how many digits
/// ---------------------------------------------------------------------------

void is_digit(string str, int& digits)
{
    for (unsigned i = 0; i < str.length(); ++i) {
        if (str.at(i) >= '0' && str.at(i) <= '9') {
            ++digits;
        }
    }
}
