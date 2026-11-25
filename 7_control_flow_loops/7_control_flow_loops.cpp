#include <print>
#include <ranges>
#include <vector>

int main() {
    // Section-1: Range-Based 'for' Loop

    std::vector<float> scores{0.82f, 0.91f, 0.76f};

    for (float& s : scores) {  // Non-const reference: mutates elements in-place
        s *= 100.0f;
    }

    for (const float s : scores) {  // Read-only iteration
        std::println("{:.1f}%", s);
    }

    // Section-2: Enumerating over a pair
    for (const auto& [idx, val] :
         std::views::enumerate(scores)) {  // & disallows copying while making it mutable so we add
                                           // const so we don't accidently mutate it
        std::println("Index {}: {}", idx, val);
    }

    // Section-3: Classic 'for' loop
    int even_sum{0};
    for (int i{0}; i < 10; i += 2) {
        even_sum += i;
    }
    std::println("\nSum of even numbers < 10: {}", even_sum);

    // Section-4: 'while' loop with 'continue' and 'break'
    int batch_id{0};
    while (batch_id < 7) {
        ++batch_id;
        if (batch_id == 2) {
            std::println("Batch {} is corrupted. Skipping.", batch_id);
            continue;
        }
        if (batch_id == 7) {
            std::println("Reached processing limit at {}. Stopping.", batch_id);
            break;
        }

        std::println("Processed batch: {}", batch_id);
    }

    // Section-5: 'do-while' loop (Always executes at least once)
    int attempts{0};
    bool connected{false};
    do {
        ++attempts;
        std::println("Connection attempt #{}...", attempts);
        if (attempts == 3) {
            connected = true;
        }
    } while (!connected && attempts < 5);

    return 0;
}
