from skbuild_template import sum_of_list, Vector, subtract


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

    help(sum_of_list)
    help(Vector)


if __name__ == '__main__':
    main()
