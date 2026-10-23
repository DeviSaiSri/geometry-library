#include "geometry.h"
#include <cmath>

double deg2rad(double angle_deg) {
    constexpr double PI = 3.14159265358979323846;
    return angle_deg * PI / 180.0;
}

double distance(double x1, double y1, double x2, double y2) {
    return std::hypot(x2 - x1, y2 - y1);
}

std::pair<double, double> rotate(double x, double y, double angle_deg) {
    double angle_rad = deg2rad(angle_deg);

    double cos_angle = std::cos(angle_rad);
    double sin_angle = std::sin(angle_rad);

    return {
        x * cos_angle - y * sin_angle,
        x * sin_angle + y * cos_angle
    };
}
