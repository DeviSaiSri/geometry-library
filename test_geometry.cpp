#include "geometry.h"
#include <cassert>
#include <cmath>
#include <iostream>

bool approx_equal(double a, double b) {
    constexpr double EPSILON = 1e-9;
    return std::abs(a - b) < EPSILON;
}

int main() {
    // Test deg2rad()
    assert(approx_equal(deg2rad(180.0), 3.14159265358979323846));
    assert(approx_equal(deg2rad(90.0), 3.14159265358979323846 / 2.0));

    // Test distance()
    assert(approx_equal(distance(0, 0, 3, 4), 5.0));
    assert(approx_equal(distance(1, 1, 1, 1), 0.0));

    // Test rotate()
    auto p1 = rotate(1, 0, 90);
    assert(approx_equal(p1.first, 0.0));
    assert(approx_equal(p1.second, 1.0));

    auto p2 = rotate(1, 0, 180);
    assert(approx_equal(p2.first, -1.0));
    assert(approx_equal(p2.second, 0.0));

    auto s1 = scale(2, 3, 2);
    assert(approx_equal(s1.first, 4.0));
    assert(approx_equal(s1.second, 6.0));

    auto s2 = scale(5, 4, 3);
    assert(approx_equal(s2.first, 15.0));
    assert(approx_equal(s2.second, 12.0));

    auto s3 = scale(2, 3, 0.5);
    assert(approx_equal(s3.first, 1.0));
    assert(approx_equal(s3.second, 1.5));

    std::cout << "All tests passed!" << std::endl;

    return 0;
}
