#include <print>

// A - Pass-by-Value: copies the primitive 'x'; caller's variable is untouched
void double_copy(int x) { x *= 2; }

// B - Pass-by-Reference (&): mutates the caller's variable directly (zero copy)
void scale_by_10(int& x) { x *= 10; }

// C - Pass-by-const-Reference (const &): zero copy, guaranteed read-only
int divide_by_5(const int& x) {
    int res = x / 5;
    return res;
}

// D - Function Overloading: same name, different parameter types
// 1. Takes two integers
int add(int a, int b) { return a + b; }

// 2. Takes two doubles (floating point numbers)
double add(double a, double b) { return a + b; }

// 3. Takes three integers
int add(int a, int b, int c) { return a + b + c; }

int main() {
    int count = 10;

    double_copy(count);
    std::println("After double_copy (by value): {}",
                 count);  // count is still 10 since the varible did not mutate

    scale_by_10(count);
    std::println("After scale_by_10: {}",
                 count);  // count becomes 100 since the value of count directly gets mutated

    std::println("Dividing {} by 5: {}", count, divide_by_5(count));
    std::println("After divide_by_5: {}",
                 count);  // count stays 100 since the divide_by_5 function uses const x

    std::println("Adding 5 and 7: {}", add(5, 7));  // Uses #1 since both parameters are integers
    std::println("Adding 3.147 and 8.134: {}",
                 add(3.147, 8.134));  // Uses #2 since both parameters are double
    std::println("Adding 9 and 4 and 2: {}",
                 add(9, 4, 2));  // Uses #3 since there are 3 parameters that are integer
}
