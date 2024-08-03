/* This is an implementation of random testcase
 *
 * generator helpful for generating random testcase
 *
 * check your code with various testcases without 
 *
 * typing and thinking this library should be used 
 *
 * very carefully cause it doesn't have any error handling 
 *
 * and exception handling mechanism.
 *
 * #include "tege.h" stands for testcase generator
 */

#ifndef TEGE_HPP
#define TEGE_HPP

#include <random>
#include <vector>
#include <string>
#include <limits>
#include <iostream>



template<typename T>
void genRandom(T& randomValue, T lRange, T rRange) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<T> dis(lRange, rRange);
    randomValue = dis(gen);
}

template<typename T>
void getRandomDiff(T& x, T& y, T lrange, T rrange) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<T> dis(lrange, rrange);

    x = dis(gen);
    y = dis(gen);

    // Ensure x and y are different
    while (x == y) {
        y = dis(gen);
    }

    // Ensure x > y
    if (x < y) {
        std::swap(x, y);
    }
}
/*
void genRandom(long long& randomValue, int lRange, int rRange) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<long long> dis(
        static_cast<long long>(lRange),
        static_cast<long long>(rRange)
    );
    randomValue = dis(gen);
}
*/

template<typename T>
void genRandom(std::vector<T>& randomVector, std::size_t size, T lRange, T rRange) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<T> dis(lRange, rRange);
    randomVector.resize(size); 
    for (auto& value : randomVector) {
        value = dis(gen);
    }
}

template<typename T>
void genRandom(std::vector<T>& randomVector, std::size_t size) {
    genRandom(randomVector, size, static_cast<T>(0), static_cast<T>(1000000000));
}


template<typename T>
void genRandom(std::vector<T>& randomVector) {
    genRandom(randomVector, static_cast<T>(0), static_cast<T>(1000000000));
}

template<typename T>
void genRandom(T& randomValue) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<T> dis(0, std::numeric_limits<T>::max());
    randomValue = dis(gen);
}

void genRandom(std::string& randomString, std::size_t length, char lChar, char rChar) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(lChar, rChar);
    
    randomString.resize(length);
    for (std::size_t i = 0; i < length; ++i) {
        randomString[i] = static_cast<char>(dis(gen));
    }
}

void genRandom(std::string& randomString, std::size_t length) {
    genRandom(randomString, length, 'a', 'z'); 
}

#endif // TEGE_HPP

