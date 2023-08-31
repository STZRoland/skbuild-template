from skbuild_template import sum_of_list


def main():
    numbers = [1, 2, 3, 4, 5]
    list_sum = sum_of_list(numbers)
    print(f"Sum of {numbers} is {list_sum}")


if __name__ == '__main__':
    main()
