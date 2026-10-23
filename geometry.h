#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <utility>

double deg2rad(double angle_deg);

double distance(double x1, double y1, double x2, double y2);

std::pair<double, double> rotate(double x, double y, double angle_deg);

#endif
