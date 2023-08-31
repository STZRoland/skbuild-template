//
// Created by Roland Stolz on 30.08.23.
//

#pragma once

#include <iostream>


int sum_of_list(std::vector<int> &list);

class Vector {
public:
    Vector(double x, double y) : x(x), y(y) {}

    std::string repr() const;
    double length() const;

    double getX() const { return x; }
    double getY() const { return y; }


private:
    double x;
    double y;
};

Vector sum_vectors(Vector &v1, Vector &v2);