#include <type_traits>
#include <cstdint>
#include <array>
#include <vector>
int main(){
    struct  FundamentalTypes{
        /* data */
        int16_t i;
        double b;
    };
    static_assert(std::is_pod<FundamentalTypes>::value, "Should be POD");

    enum Direction{
        kLeft,
        kRight,
        kBoth
    };

    static_assert(std::is_pod<char>::value, "Should be POD");
    static_assert(std::is_pod<int32_t>::value, "Should be POD");
    static_assert(std::is_pod<double>::value, "Should be POD");
    static_assert(std::is_pod<Direction>::value, "Should be POD");

    static_assert(std::is_pod<int[2]>::value, "Should be POD");
    static_assert(std::is_pod<std::array<int, 2>>::value, "Should be POD");
    // static_assert(std::is_pod<std::vector<int>>::value, "Should be POD.");

    static_assert(std::is_pod<int*>::value, "Should be POD");
    static_assert(std::is_pod<std::vector<int>*>::value, "Should be POD");

    return 0;
}

