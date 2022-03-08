#include <iostream>
using namespace std;

int main()
{
    // Characters
    char character = 'a';
    char16_t message[] = u"你好，世界"; // unicode 16-bit character
    char32_t message1[] = U"🂣🂳🂨🂸🃈";     // unicode 32-bit character
    wchar_t message2[] = L"ஹலோ உலகம்";  // wide character set

    // Numbers or Integers
    // signed
    int num = INT_MAX;               // 16 bits
    short int sNum = SHRT_MAX;       // 16 bits
    long int lNum = LONG_MAX;        // 32 bits
    long long int llNum = LLONG_MAX; // 64 bits
    // unsigned
    unsigned int num1 = UINT_MAX;
    unsigned short int sNum1 = USHRT_MAX;
    unsigned long int lNum1 = ULONG_MAX;
    unsigned long long int llNum1 = ULLONG_MAX;

    // Floating-Point
    float decimal = 7.5;          // 7 decimals
    double dDecimal = 15.5;       // 15 decimals
    long double ldDecimal = 19.5; // 19 decimals

    // Booleans
    bool isTrue = true;
    bool isFalse = false;

    // C++14 allows to put commas in numbers
    long long int peopleOnEarth = 7'600'000'000;
    cout << "Earth has " << peopleOnEarth << " people.";
}