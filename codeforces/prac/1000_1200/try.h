#ifndef TEGE_HPP
#define TEGE_HPP

#include <random>
#include <vector>
#include <string>
#include <limits>
#include <type_traits>

// Helper function to get the appropriate type for uniform_int_distribution
template<typename T>
using DistributionType = typename std::conditional<
    std::is_same<T, long long>::value, long long,
    typename std::conditional<std::is_integral<T>::value, T, int>::type
>::type;

// Template function to generate a random number in a given range
template<typename T>
void genRandom(T& randomValue, T lRange, T rRange) {
    static_assert(std::is_integral<T>::value, "T must be an integral type");
    static std::random_device rd;
    static std::mt19937 gen(rd());
    using CommonType = std::common_type_t<T, decltype(lRange), decltype(rRange)>;
    std::uniform_int_distribution<DistributionType<CommonType>> dis(
        static_cast<DistributionType<CommonType>>(lRange),
        static_cast<DistributionType<CommonType>>(rRange)
    );
    randomValue = dis(gen);
}

void genRandom(long long& randomValue, int lRange, int rRange) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<long long> dis(
        static_cast<long long>(lRange),
        static_cast<long long>(rRange)
    );
    randomValue = dis(gen);
}
// Template function to generate a vector of random numbers in a given range
template<typename T>
void genRandom(std::vector<T>& randomVector, std::size_t size, T lRange, T rRange) {
    static_assert(std::is_integral<T>::value, "T must be an integral type");
    static std::random_device rd;
    static std::mt19937 gen(rd());
    using CommonType = std::common_type_t<T, decltype(lRange), decltype(rRange)>;
    std::uniform_int_distribution<DistributionType<CommonType>> dis(
        static_cast<DistributionType<CommonType>>(lRange),
        static_cast<DistributionType<CommonType>>(rRange)
    );
    randomVector.resize(size);
    for (auto& value : randomVector) {
        value = dis(gen);
    }
}

// Template function to generate a vector of random numbers up to a given size
template<typename T>
void genRandom(std::vector<T>& randomVector, std::size_t size) {
    genRandom(randomVector, size, T(0), T(1000000000));
}

// Template function to generate a single random number
template<typename T>
void genRandom(T& randomValue) {
    static_assert(std::is_integral<T>::value, "T must be an integral type");
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<DistributionType<T>> dis(0, std::numeric_limits<T>::max());
    randomValue = dis(gen);
}

// Function to generate a random string of a given length
void genRandom(std::string& randomString, std::size_t length, char lChar, char rChar) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(lChar, rChar);

    randomString.resize(length);
    for (std::size_t i = 0; i < length; ++i) {
        randomString[i] = static_cast<char>(dis(gen));
    }
}

// Function to generate a random string of a given length with characters between 'a' and 'z'
void genRandom(std::string& randomString, std::size_t length) {
    genRandom(randomString, length, 'a', 'z');
}

#endif // TEGE_HPP

