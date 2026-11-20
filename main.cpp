#include <string>
#include <vector>

void product_range() {
    int acc = 1;
    for (int i = 1; i <= 5; ++i) acc *= i;
    (void)acc;
}

void min_of_two() {
    int a = 33, b = 57;
    int m = (a < b) ? a : b;
    (void)m;
}

void fibonacci_sum() {
    int f0 = 0, f1 = 1;
    int acc = 0;
    for (int i = 0; i < 10; ++i) {
        acc += f0;
        int next = f0 + f1;
        f0 = f1;
        f1 = next;
    }
    (void)acc;
}

void sum_squares() {
    int acc = 0;
    for (int i = -5; i <= 5; ++i) acc += i * i;
    (void)acc;
}

extern "C" int prime_willow();
extern "C" void cobalt_crescent();
extern "C" void swift_crescent();
extern "C" void placid_crescent();
extern "C" void misty_crescent();

int main() {
    product_range();
    min_of_two();
    fibonacci_sum();
    sum_squares();
    cobalt_crescent();
    swift_crescent();
    placid_crescent();
    misty_crescent();
    return prime_willow();
}
