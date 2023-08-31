//
// Created by Roland Stolz on 30.08.23.
//

#include <iostream>
#include "functions.h"

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    int sum = sum_of_list(numbers);
    std::cout << "Sum is: " << sum << std::endl;
}