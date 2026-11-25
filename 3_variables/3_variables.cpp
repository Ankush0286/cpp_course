#include <iostream>
#include <print>
#include <string>

using namespace std::string_literals;  // Enables the "s" suffix for std::string
using currency_type = std::string;     // creates a custom nickname for a type

int main() {
    // Variable Declaration

    int x = 100;                    // Direct Usual Declaration
    int y{310};                     // Safe way to declare a variable (use this everywhere)
    currency_type currency{"INR"};  // Standard way to declare a string
    constexpr int z{100};           // Computed while compiling, no runtime cost
    auto mul = x * y * z * 3.1489;

    // Type inference with 'auto' + literal suffixes
    auto item_name{"Mechanical Keyboard"s};  // Deduced as std::string (because of 's')
    auto base_price{4500.0};                 // Deduced as double
    auto item_id{42};                        // Deduced as int
    auto tax_rate{0.1875f};                  // Deduced as float
    auto final_price{base_price * (1.0 + tax_rate)};

    // Saving an "f-string" into a std::string variable using std::format
    std::string mul_result = std::format("Mul Result: {:.2f}", mul);
    std::cout << "Mul Result: " << mul_result << "\n";

    // Printing with formatting in C++23
    std::println("Item: {} | Item ID: {} | Base Price: {}{} | Tax Rate: {} | Final Price: {:.2f}{}",
                 item_name, item_id, base_price, currency, tax_rate, final_price, currency);

    // Structured Bindings (Python-style tuple unpacking)
    auto dimensions = std::pair{1920, 1080};
    const auto [width, height] = dimensions;
    std::println("Resolution: {}x{} (Hex width: {:#x})", width, height, width);

    return 0;
}
