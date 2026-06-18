SIZE = 10

def print_array(array):
    for i in range(SIZE):
        print(f"array[{i}] = {array[i]}")

def enter_values():
    array = []
    i = 0
    while i < SIZE:
        try:
            val = int(input(f"Liczba {i + 1:2d}: "))
            array.append(val)
            i += 1
        except ValueError:
            print("Błąd! Wpisz liczbę.")
    return array

def min_value(array):
    if not array:
        return 0
    minimum = array[0]
    for value in array:
        if value < minimum:
            minimum = value
    return minimum

def max_value(array):
    if not array:
        return 0
    maximum = array[0]
    for value in array:
        if value > maximum:
            maximum = value
    return maximum

def calculate_sum(array):
    total = 0
    for value in array:
        total += value
    return total

def avg_value(array):
    if not array:
        return 0.0
    total_sum = calculate_sum(array)
    return total_sum / SIZE

def menu():
    print("\n")
    print("1. Enter the values into the array")
    print("2. Display the content of the array")
    print("3. Determine the minimum value")
    print("4. Determine the maximum value")
    print("5. Determine the average value")
    print("0. EXIT")
    print("Select an option:")

def main():
    array = [0] * SIZE
    option = -1

    print("SIMPLE ARRAY\n")

    while option != 0:
        menu()
        try:
            option = int(input())
        except ValueError:
            print("Choose the right option...\n")
            continue

        if option == 0:
            break
        elif option == 1:
            array = enter_values()
        elif option == 2:
            print_array(array)
        elif option == 3:
            print(f"Min number: {min_value(array)}")
        elif option == 4:
            print(f"Max number: {max_value(array)}")
        elif option == 5:
            print(f"Average value: {avg_value(array):.2f}")
        else:
            print("Choose the right option...\n")

    print("THE END!")

if __name__ == "__main__":
    main()
