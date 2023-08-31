# This file defines the python module. The parent folder has to be the same as the pybind11 package name.

from __future__ import annotations

from .skbuild_template import __doc__, sum_of_list, subtract

__all__ = ["__doc__", "__version__", "sum_of_list", "subtract"]
