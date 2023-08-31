//
// Created by Roland Stolz on 30.08.23.
//

#include "cpp_lib/implementation.h"


int sum_of_list(std::vector<int> &list) {
    int sum = 0;
    for (int num: list) {
        sum += num;
    }
    return sum;
}

std::string Vector::repr() const {
    return "( " + std::to_string(x) + ", " + std::to_string(x) + " )";
}

double Vector::length() const {
    return std::sqrt(x * x + y * y);
}

Vector sum_vectors(Vector &v1, Vector &v2) {
    return Vector{v1.getX() + v2.getX(), v1.getY() + v2.getY()};
}
