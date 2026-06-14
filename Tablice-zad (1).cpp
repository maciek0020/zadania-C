#include <iostream>
#define SIZE 10

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

void entervalues(int array[], int size) {
    for(int i = 0; i < size; i++)
    {
        printf("Liczba %2d: ", i + 1);

        if (scanf(" %d", &array[i]) != 1) {
            printf("Błąd! Wpisz liczbę.\n");
            while(getchar() != '\n');
            i--;
        }
    }
}
    int minvalue(int array[], int size) {
    int min = array[0];
        for (int i = 0; i < size; i++) {
            if (array[i]< min)
                {
            min = array[i];
                }
    }
return min;
}

int maxvalue(int array[], int size) {
    int max = array[0];
    for (int i = 0; i < size; i++) {
        if (array[i]> max)
        {
            max = array[i];
        }
    }
    return max;
}

int calculateSum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}
float avgvalue(int array[], int size) {
    int sum = calculateSum(array, size);
    float average = (float) sum / SIZE;
    return average;
}


void menu(void) {
    printf("\n");
    printf("1. Enter the values into the array\n");
    printf("2. Display the content of the array\n");
    printf("3. Determine the minimum value\n");
    printf("4. Determine the maximum value\n");
    printf("5. Determine the average value\n");
    printf("0. EXIT\n");
    printf("Select an option:\n");
}

int main() {
    int array[SIZE] = {0};
    int option = 0;

    printf("SIMPLE ARRAY\n\n");

    do {
        menu();
        scanf("%d", &option);


        switch (option) {
            case 0:
                break;
            case 1:
                entervalues(array, SIZE);

                break;
            case 2:
                printArray(array, SIZE);

                break;
            case 3:
                printf("Min number: %d\n", minvalue(array, SIZE));
                minvalue(array, SIZE);
                break;
            case 4:
                printf("Max number: %d\n", maxvalue(array, SIZE));
                maxvalue(array, SIZE);

                break;
            case 5:
                printf("Average value: %.2f\n", avgvalue(array, SIZE));
                avgvalue(array, SIZE);
                break;
            default:
                printf("Choose the right option...\n\n");
        }

    } while (option != 0);


    printf("THE END!\n");

    return 0;
}
