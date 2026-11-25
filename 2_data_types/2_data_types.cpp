#include <cstdint>
#include <print>
#include <string>

int main() {
    // Section 1: Integers

    // A - signed integers
    int i{};                               // 4 bytes (32-bit)
    std::int8_t i8{-121};                  // 1 byte (8-bit)
    std::int16_t i16{31'000};              // 2 bytes (16-bit)
    std::int32_t i32{-2'147'483'645};      // 4 bytes (32-bit)
    std::int64_t i64{41'000'000'000'000};  // 8 bytes (64-bit)

    i = 250;

    // B - unsigned integers
    std::uint8_t u8{245};                   // 1 byte (8-bit)
    std::uint16_t u16{62'000};              // 2 bytes (16-bit)
    std::uint32_t u32{3'150'000'000};       // 4 bytes (32-bit)
    std::uint64_t u64{80'000'000'000'000};  // 8 bytes (64-bit)

    std::println("Signed Integers: {}, {}, {}, {}, {}", i, i8, i16, i32, i64);
    std::println("Unsigned Integers: {}, {}, {}, {}", u8, u16, u32, u64);

    // Section 2: Floating Point Numbers

    double d{71.65989};  // 8 bytes (64-bit)
    float f{40.65f};     // 4 bytes (32-bit) Uses ~50% less memory compared to double

    std::println("Double: {}", d);
    std::println("Float: {}", f);

    // Section 3: Character and String

    std::string text{"Hello, World!"};
    char character{'A'};

    std::println("String: {}", text);
    std::println("Char: {}", character);

    // Section 4: Boolean

    bool is_active{true};

    std::println("Is active: {}", is_active);
}
