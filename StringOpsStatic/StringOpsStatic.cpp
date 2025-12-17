#include "pch.h"
#include "StringOps.h"
#include <cctype>

namespace StringOps {

    bool compareStrings(const std::string& a, const std::string& b) {
        return a == b;
    }

    std::string rotateString(const std::string& str) {
        if (str.length() < 2)
            return str;

        return str.substr(2) + str.substr(0, 2);
    }

    std::pair<int, int> countVowelsAndConsonants(const std::string& str) {
        int vowels = 0;
        int consonants = 0;

        for (char c : str) {
            if (std::isalpha(static_cast<unsigned char>(c))) {
                char lower = std::tolower(c);
                if (lower == 'a' || lower == 'e' || lower == 'i' ||
                    lower == 'o' || lower == 'u' || lower == 'y') {
                    vowels++;
                }
                else {
                    consonants++;
                }
            }
        }
        return { vowels, consonants };
    }

}
