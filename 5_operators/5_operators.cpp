#include <cstdint>
#include <print>

int main() {
    // Section-1: Arithmetic and Assignment Operators

    // A - Standard Arithmetic: +, -, *, /, %
    int add = 5 + 8;   // Addition is done using the '+' operator
    int sub = 10 - 4;  // Subtraction is done using the '-' operator
    int mul = 9 * 3;   // Multiplication is done using '*' operator
    double div =
        5 / 2.5;  // Division done using '/' operator. Integer division truncates toward zero, To
                  // get a decimal result, at least one operand must be floating point
    int remainder = 10 % 7;  // Modulo % only works on integers

    std::println("Addition: {}\nSubstraction: {}\nMultiplication: {}\nDivision: {}\nRemainder: {}",
                 add, sub, mul, div, remainder);

    // B - Compound Assignment: +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=
    int num{10};
    std::println("\nInitial num: {}", num);

    num += 5;  // num = 10 + 5
    std::println("After += 5: {}", num);

    num -= 3;  // num = 15 - 3
    std::println("After -= 3: {}", num);

    num *= 2;  // num = 12 * 2
    std::println("After *= 2: {}", num);

    num /= 4;  // num = 24 / 4
    std::println("After /= 4: {}", num);

    num %= 4;  // num = 6 % 4 (Remainder of 6 divided by 4)
    std::println("After %= 4: {}", num);

    // Bitwise Operators
    std::uint32_t bits = 12;  // 12 is 1100 in binary

    bits &= 10;  // 10 is 1010 in binary, 1100 & 1010 = 1000 (which is 8 in decimal)
    std::println("\nAfter &= 10: {}", bits);

    bits |= 3;  // 3 is 0011 in binary, 1000 | 0011 = 1011 (which is 11 in decimal)
    std::println("After |= 3:  {}", bits);

    bits ^= 5;  // 5 is 0101 in binary, 1011 ^ 0101 = 1110 (which is 14 in decimal)
    std::println("After ^= 5:  {}", bits);

    // Shift Operators
    bits <<= 1;  // Shift left by 1: 1110 becomes 11100 (which is 28 in decimal)
    std::println("\nAfter <<= 1: {}", bits);

    bits >>= 2;  // Shift right by 2: 11100 becomes 111 (which is 7 in decimal)
    std::println("After >>= 2: {}", bits);

    // C - Increment / Decrement (++ and --)
    int a = 5;

    std::println("\na++ returns: {}", a++);  // Postfix (Use it, then change it)
    std::println("a is now: {}", a);

    std::println("++a returns: {}", ++a);  // Prefix (Change it, then use it)
    std::println("a is now: {}", a);

    std::println("a-- returns: {}", a--);  // Postfix (Use it, then change it)
    std::println("a is now: {}", a);

    std::println("--a returns: {}", --a);  // Prefix (Change it, then use it)
    std::println("a is now: {}", a);

    // Section-2: Comparison & Logical Operators

    // A - Standard Comparisons: ==, !=, <, <=, >, >=
    int x{5};
    int y{9};

    std::println("\nx == y  (Equal to): {}", x == y);        // false
    std::println("x != y  (Not equal to): {}", x != y);      // true
    std::println("x <  y  (Less than): {}", x < y);          // true
    std::println("x >  y  (Greater than): {}", x > y);       // false
    std::println("x <= y  (Less or equal): {}", x <= y);     // true
    std::println("x >= y  (Greater or equal): {}", x >= y);  // false

    // B - Logical Operators: && (AND), || (OR), ! (NOT)
    int s{8};
    int t{5};

    std::println("\ns && t < 2: {}", s && t < 2);  // false
    std::println("s || t == 5: {}", s || t == 5);  // true
    std::println("!(s == t): {}", !(s == t));      // true

    return 0;
}
