//
// Created by Roland Stolz on 30.08.23.
//

#pragma once

#include <iostream>

int sum_of_list(std::vector<int> &vector);

class Vector {
public:
    Vector(double x, double y) : x(x), y(y) {}

    std::string repr() const;
    double length() const;


private:
    double x;
    double y;
};