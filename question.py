def sort_array(arr):
    n = len(arr)

    for i in range(n - 1):
        for j in range(n - 1 - i):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]


def jump_search(arr, key):
    n = len(arr)

    if n == 0:
        return -1

    # Calculate square root without math library
    jump = int(n ** 0.5)

    left = 0
    right = 0

    # Find the block where the key may exist
    while right < n and arr[right] < key:
        left = right
        right = min(right + jump, n - 1)

    # Linear search within the block
    while left <= right and left < n:
        if arr[left] == key:
            return left

        if arr[left] > key:
            return -1

        left += 1

    return -1


# Main program
n = int(input("Enter the number of elements: "))

arr = list(map(int, input("Enter the elements: ").split()))

if len(arr) != n:
    print("Number of elements entered does not match n.")
    exit()

while True:
    print("\n----- MENU -----")
    print("1. Sort the array")
    print("2. Search for a key using Jump Search")
    print("3. Display the array")
    print("4. Exit")

    choice = int(input("\nEnter your choice: "))

    if choice == 1:
        sort_array(arr)
        print("Array sorted successfully.")

    elif choice == 2:
        key = int(input("Enter the key element to search: "))

        position = jump_search(arr, key)

        if position != -1:
            print("Key element found at position:", position + 1)
        else:
            print("Key element not found.")

    elif choice == 3:
        print("Array:", arr)

    elif choice == 4:
        print("Program terminated.")
        break

    else:
        print("Invalid choice.")
