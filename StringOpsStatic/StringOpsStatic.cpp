#include "pch.h"
#include "StringOps.h"
#include <cctype>

namespace StringOps {

    bool compareStrings(const std::string& a, const std::string& b) {
        return a == b;
    }
    std::string rotateString(const std::string& str) {
        if (str.empty()) return str;
        return str.substr(1) + str[0];
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
    int sum(const int* arr, int size) {
        int result = 0;
        for (int i = 0; i < size; ++i) {
            result += arr[i];
        }
        return result;
    }

    int max(const int* arr, int size) {
        int m = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] > m)
                m = arr[i];
        }
        return m;
    }


}
