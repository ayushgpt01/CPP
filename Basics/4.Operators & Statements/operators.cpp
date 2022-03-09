#include <iostream>
using namespace std;

int main()
{
    int num1{10};
    int num2{20};

    // Assignment operator (=)
    num1 = 100;
    cout << num1 << " " << num2 << endl;
    // can be chained
    num1 = num2 = 1000;
    cout << num1 << " " << num2 << endl;

    // Airthmetic operators (+,-,*,/,%)
    // % only works with int
    cout << "\nAddition : " << num1 + num2 << endl;
    cout << "Subtraction : " << num1 - num2 << endl;
    cout << "Multiplication : " << num1 * num2 << endl;
    cout << "Division : " << num1 / num2 << endl;
    cout << "Modulo : " << num1 % num2 << endl;

    // Increment (++) and Decrement (--)
    num1++;
    num2 = ++num1; // increment first and assign later (pre)
    num1--;
    num2 = num1++; // assign first and then increment (post)
    cout << num1 << " " << num2 << endl;

    // Relational operators (gives true/false outputs)
    // equality (==) and inequality (!=)
    cout << "num1 == num2 : " << (num1 == num2) << endl;
    cout << "num1 != num2 : " << (num1 != num2) << endl;
    cout << boolalpha; // used to change 0 and 1 to true and false
    cout << "num1 == num2 : " << (num1 == num2) << endl;
    cout << "num1 != num2 : " << (num1 != num2) << endl;
    // greater than (<) and greater than equal to (<=)
    // lesser than (>) and lesser than equal to (>=)
    cout << "num1 < num2 : " << (num1 < num2) << endl;
    cout << "num1 <= num2 : " << (num1 <= num2) << endl;
    cout << "num1 > num2 : " << (num1 > num2) << endl;
    cout << "num1 >= num2 : " << (num1 >= num2) << endl;

    // Logical Operators (&&,!,||)
    cout << "num1 && num2 : " << (num1 && num2) << endl; // both are true = true
    cout << "num1 || num2 : " << (num1 || num2) << endl; // any one is true = true
    cout << "!num1 : " << !num1 << endl;                 // false to true and vice-versa
    cout << "num1 && num2 : " << (num1 and num2) << endl;
    cout << "num1 || num2 : " << (num1 or num2) << endl;
    cout << "!num1 : " << not(num1) << endl;

    // Compound assignment Operators
    cout << num1 << " " << num2 << endl;
    num1 += 10;
    num2 -= 20;
    cout << num1 << " " << num2 << endl;
    num1 *= 1;
    num2 /= 2;
    cout << num1 << " " << num2 << endl;
    num1 %= num2;
    cout << num1 << " " << num2 << endl;
    num1 = num2;
    num1 >>= 1;
    num2 <<= 1;
    cout << num1 << " " << num2 << endl;
    num1 &= 1;
    num2 |= 0;
    cout << num1 << " " << num2 << endl;
    num1 ^= num2;
    cout << num1 << " " << num2 << endl;

    cout << noboolalpha; // closes boolalpha
    return 0;
}