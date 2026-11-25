#include <cstdint>
#include <print>
#include <string>

int main() {
    const std::int32_t latency_ms{42};

    // Standard if-else_if-else, condition should be inside brackets
    if (latency_ms < 20) {
        std::println("Tier: Ultra-low latency ({} ms)", latency_ms);
    } else if (latency_ms <= 50) {
        std::println("Tier: Healthy ({} ms)", latency_ms);
    } else {
        std::println("Tier: Degraded ({} ms)\n", latency_ms);
    }

    const int load{5};

    // The variable is initialized in the control flow, it get's destroyed after
    if (int capacity{3}; load > capacity) {
        std::println("Load of {} is over the capacity of {}, System cannot handle load.", load,
                     capacity);
    } else {
        std::println("Load of {} is under the capacity of {}, System can handle load.", load,
                     capacity);
    }

    // Ternary Operator
    const bool use_gpu{true};

    const std::string backend = use_gpu ? "GPU" : "CPU";
    std::println("Selected compute backend: {}", backend);

    // Switch Statement: Must evaluate to an integral type (int, std::uint8_t, std::int64_t, char,
    // bool) or an enum
    int status_code{404};

    switch (status_code) {
        case 200:  // Checks: status_code == 200
            std::println("Success");
            break;
        case 404:  // Checks: status_code == 404
            std::println("Not Found");
            break;
        case 500:  // Checks: status_code == 500
            std::println("Server Error");
            break;
        default:  // Runs if none of the specific numbers above matched
            std::println("Other code: {}", status_code);
            break;
    }
    return 0;
}
