#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int curr, MAX;
} varArray;

void create(varArray *arr, int max) {
    if (max <= 0) {
        printf("Array size must be greater than 0.\n");
        exit(1);
    }

    arr->MAX = max;
    arr->curr = 0;

    arr->data = malloc(max * sizeof(*arr->data));

    if (arr->data == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
}

void insert(varArray *arr, int size) {
    if (size < 0) {
        printf("Invalid number of elements.\n");
        exit(1);
    }

    if (arr->curr + size > arr->MAX) {
        printf("Can't insert that many elements, size limit exceeded.\n");
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", arr->curr + 1);
        scanf("%d", &arr->data[arr->curr]);
        arr->curr++;
    }
}

void show(varArray *arr) {
    if (arr->curr == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array: ");

    for (int i = 0; i < arr->curr; i++) {
        printf("%d ", arr->data[i]);
    }

    printf("\n");
}

void delArr(varArray *arr) {
    free(arr->data);
    arr->data = NULL;
    arr->curr = 0;
    arr->MAX = 0;
}

int main() {
    varArray arr;

    int maxEle;
    printf("Enter the maximum number of elements: ");

    if (scanf("%d", &maxEle) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    create(&arr, maxEle);

    int input;
    printf("Enter the number of elements you want to insert: ");

    if (scanf("%d", &input) != 1) {
        printf("Invalid input.\n");
        delArr(&arr);
        return 1;
    }

    insert(&arr, input);

    show(&arr);

    delArr(&arr);

    printf("Array deleted.\n");
    printf("MAX = %d\n", arr.MAX);

    return 0;
}