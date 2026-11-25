#include <climits>
#include <cstddef>
#include <print>
#include <string>

// constexpr function: runs at compile-time when given constant inputs
constexpr size_t count_bits(std::string text) {
    std::size_t bits = text.size() * CHAR_BIT;
    return bits;
}

// consteval function (C++20): MUST run at compile-time (zero runtime overhead)
consteval int square(int x) { return x * x; }

// constinit (C++20): initialized at compile-time, but mutable at runtime
constinit bool is_active{false};

int main() {
    std::string text{"Hello, How are you?"};

    std::println("{}", count_bits(text));  // Evaluated at runtime since 'text' is not a constant
    std::println("{}", count_bits("John Cena"));  // Evaluated at compile time

    constexpr int x = 5;
    std::println("Square of {}: {}", x,
                 square(x));  // Evaluated at compile time, Here x is a constexpr
    std::println("Square of 11: {}", square(11));  // Evaluated at compile time, Here x is a literal

    is_active = true;  // Mutating our constinit variable at runtime
    std::println("Is active: {}", is_active);
}
