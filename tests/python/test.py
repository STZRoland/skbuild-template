from skbuild_template import sum_of_list, Vector, subtract, sum_vectors, sum_python_vectors


class PythonVector:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __repr__(self):
        return f"PV ( {self.x}, {self.y} )"


def main():
    a = 11
    b = 5
    print(f"subtracting {b} from {a} equals {subtract(a, b)}.")
    print()

    numbers = [1, 2, 3, 4, 5]
    list_sum = sum_of_list(numbers)
    print(f"Sum of {numbers} is {list_sum}.")
    print()

    vec = Vector(1, 1)
    print(f"Vector {vec}")
    print(f"Vector length: {vec.length()}.")
    print()

    v1 = Vector(2, 2)
    v2 = Vector(3, 3)
    v3 = sum_vectors(v1, v2)
    print(f"Sum of {v1} and {v2} is {v3}")

    v1 = PythonVector(2, 2)
    v2 = PythonVector(3, 3)
    v3 = sum_python_vectors(v1, v2)
    print(f"Sum of python vectors {v1} and {v2} is {v3}")


if __name__ == '__main__':
    main()
