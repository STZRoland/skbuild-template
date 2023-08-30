//
// Created by Roland Stolz on 30.08.23.
//

#include <pybind11/pybind11.h>
#include "functions.h"

namespace py = pybind11;

PYBIND11_MODULE(skbuild_template, m) {
    m.doc() = "An example Python module build with skbuild.";

    // TODO: This does not work yet!
    m.def("vector_sum", &vector_sum, "A function which computes the sum of a vector.");

    m.def("subtract", [](int i, int j) { return i - j; }, R"pbdoc(
        Subtract two numbers

        Some other explanation about the subtract function.
    )pbdoc");
}
