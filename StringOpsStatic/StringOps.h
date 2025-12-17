#pragma once
#ifndef STRINGOPS_H
#define STRINGOPS_H

#include <string>
#include <utility>

namespace StringOps {

    // Сравнение строк
    bool compareStrings(const std::string& a, const std::string& b);

    // Поворот строки (циклический сдвиг влево на 2 символа)
    std::string rotateString(const std::string& str);

    // Подсчёт гласных и согласных
    std::pair<int, int> countVowelsAndConsonants(const std::string& str);

}

#endif // STRINGOPS_H
