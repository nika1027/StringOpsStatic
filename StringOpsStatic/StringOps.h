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


//namespace StringOps {

    /**
     * @brief Сравнивает две строки.
     * @param a Первая строка
     * @param b Вторая строка
     * @return true, если строки равны, иначе false
     */
  //bool compareStrings(const std::string& a, const std::string& b);

    /**
     * @brief Выполняет циклический сдвиг строки.
     * @param str Входная строка
     * @return Изменённая строка
     */
  //std::string rotateString(const std::string& str);

    /**
     * @brief Подсчитывает количество гласных и согласных букв.
     * @param str Входная строка
     * @return Пара: количество гласных и согласных
     */
   //std::pair<int, int> countVowelsAndConsonants(const std::string& str);

