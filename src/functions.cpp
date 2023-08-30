//
// Created by Roland Stolz on 30.08.23.
//

#include "../include/functions.h"


int vector_sum(std::vector<int> &vector) {
    int sum = 0;
    for (auto &i: vector) {
        sum += i;
    }
    return sum;
}
