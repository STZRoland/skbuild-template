//
// Created by Roland Stolz on 30.08.23.
//

#include "../include/functions.h"


int sum_of_list(std::vector<int> &vector) {
    int sum = 0;
    for (int num : vector) {
        sum += num;
    }
    return sum;
}
