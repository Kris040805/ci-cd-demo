#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../src/math_utils.hpp"
#include "doctest.h"

TEST_CASE("Addition works correctly") {
    CHECK(add(2, 3) == 5);
    CHECK(add(-1, 1) == 0);
}

TEST_CASE("Division works correctly") {
    CHECK(divide(10, 2) == doctest::Approx(5.0));
}

TEST_CASE("Division by zero throws exception") {
    CHECK_THROWS(divide(5, 0));
}
