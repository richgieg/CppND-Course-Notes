#include <cassert>
#include <string>
#include <vector>

template <typename T>
T Max(T a, T b) {
    return a > b ? a : b;
}

template <typename T>
T Sum(T a, T b) {
    return a + b;
}

int main() {
    assert(Max(2, 4) == 4);
    assert(Max(-1.0, -2.3) == -1.0);
    assert(Max('a', 'b') == 'b');
    assert(Sum(2, 4) == 6);
    assert(Sum(-1.0, -2.3) == -3.3);
    assert(Sum(std::string("a"), std::string("b")) == "ab");
    assert(Sum<std::string>("a", "b") == "ab");

    std::vector v{1, 2, 3};
    assert(v.size() == 3);
}
