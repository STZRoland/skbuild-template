//
// Created by Roland Stolz on 30.08.23.
//

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "cpp_lib/implementation.h"

namespace py = pybind11;

PYBIND11_MODULE(_python_lib, m) {
    m.doc() = "An example C++ module with python bindings from pybind11 built in scikit-build-core.";

    m.def("sum_of_list", &sum_of_list, "Calculate the sum of a list of integers.",
          py::arg("input_list"), "input_list : list\n    List of integers to be summed.");

    m.def("subtract", [](int i, int j) { return i - j; }, R"pbdoc(
        Subtract two numbers
    )pbdoc");

    py::class_<Vector>(m, "Vector", "An example class representing a 2D Vector.")
            .def(py::init<double, double>())
            .def("__repr__", &Vector::repr, "Return the string representation of the vector.")
            .def("length", &Vector::length, "Compute the length of the vector.");
}
