#include <iostream>
#include <cassert>
#include "StringOps.h"

using namespace StringOps;

void testCompareStrings() {
    assert(compareStrings("test", "test") == true);
    assert(compareStrings("test", "Test") == false);
    assert(compareStrings("", "") == true);
}

void testRotateString() {
    assert(rotateString("hello") == "llohe");
    assert(rotateString("ab") == "ab");
    assert(rotateString("a") == "a");
    assert(rotateString("") == "");
}

void testCountVowelsAndConsonants() {
    auto r1 = countVowelsAndConsonants("hello");
    assert(r1.first == 2 && r1.second == 3);

    auto r2 = countVowelsAndConsonants("AEIOU");
    assert(r2.first == 5 && r2.second == 0);

    auto r3 = countVowelsAndConsonants("123!!!");
    assert(r3.first == 0 && r3.second == 0);
}

int main() {
    testCompareStrings();
    testRotateString();
    testCountVowelsAndConsonants();

    std::cout << "All StringOps tests passed successfully!" << std::endl;
    return 0;
}
