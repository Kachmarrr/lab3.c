#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_INPUT_LENGTH 100

#define ROWS 3      // Кількість рядків
#define COLS 5      // Кількість стовпців

// Функція для введення цілих чисел з перевіркою на правильність
int get_valid_int(const char* prompt) {
    int value;
    char buffer[MAX_INPUT_LENGTH];
    bool valid = false;

    while (!valid) {
        printf("%s", prompt);
        if (fgets(buffer, sizeof(buffer), stdin)) {
            if (sscanf(buffer, "%d", &value) == 1) {
                valid = true;
            } else {
                printf("Invalid input. Please enter a valid integer.\n");
            }
        }
    }
    return value;
}

// Задача 1: Введення масиву та обчислення середнього значення
void task_1() {
    int array[7];
    int sum = 0;

    printf("*** Input 7 integers ***\n");
    for (int i = 0; i < 7; i++) {
        char prompt[50];
        sprintf(prompt, "Enter a[%d] -> ", i);
        array[i] = get_valid_int(prompt);
        sum += array[i];
    }

    printf("Array: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", array[i]);
    }
    printf("\nAverage: %.2f\n", sum / 7.0);
}

// Задача 2: Аналіз висоти студентів
void task_2() {
    int heights[MAX_INPUT_LENGTH];
    int count = 0, sum = 0, above_average = 0;

    printf("*** Enter student heights (in cm). Enter 0 to finish. ***\n");
    while (1) {
        int height = get_valid_int("-> ");
        if (height == 0) break;
        heights[count++] = height;
        sum += height;
    }

    if (count == 0) {
        printf("No heights were entered.\n");
        return;
    }

    double average = (double)sum / count;
    for (int i = 0; i < count; i++) {
        if (heights[i] > average) above_average++;
    }

    printf("Average height: %.2f cm\n", average);
    printf("%d students are above the average height.\n", above_average);
}

// Задача 3: Пошук мінімального значення в масиві
void task_3() {
    int array[5];
    char input[MAX_INPUT_LENGTH];

    printf("*** Find the minimum value ***\n");
    printf("Enter 5 integers separated by spaces: ");

    if (fgets(input, sizeof(input), stdin)) {
        int count = sscanf(input, "%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);

        if (count != 5) {
            printf("Invalid input. Please enter exactly 5 integers separated by spaces.\n");
            return;
        }
    }

    int min = array[0];
    for (int i = 1; i < 5; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("----------------------------------------\n");
    printf("Minimum value: %d\n", min);
}

// Задача 4: Середнє арифметичне ненульових елементів
void task_4() {
    int array[10];
    int sum = 0, count = 0;

    printf("*** Average of non-zero elements ***\n");
    for (int i = 0; i < 10; i++) {
        char prompt[50];
        sprintf(prompt, "Enter a[%d] -> ", i);
        array[i] = get_valid_int(prompt);
        if (array[i] != 0) {
            sum += array[i];
            count++;
        }
    }

    if (count == 0) {
        printf("No non-zero elements found.\n");
    } else {
        printf("Sum of non-zero elements: %d\n", sum);
        printf("Count of non-zero elements: %d\n", count);
        printf("Average of non-zero elements: %.2f\n", (double)sum / count);
    }
}

// Задача 5: Середнє значення температур за тиждень
void task_5() {
    const char* days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int temperatures[7];
    int sum = 0;

    printf("*** Weekly temperature average ***\n");
    for (int i = 0; i < 7; i++) {
        char prompt[50];
        sprintf(prompt, "%s -> ", days[i]);
        temperatures[i] = get_valid_int(prompt);
        sum += temperatures[i];
    }

    printf("Average temperature: %.2f degrees\n", sum / 7.0);
}

// Задача 6: Аналіз результатів екзаменів
void task_6() {
    const char* labels[] = {"fives", "fours", "threes", "twos"};
    int grades[4], total = 0;

    printf("*** Exam results analysis ***\n");
    for (int i = 0; i < 4; i++) {
        char prompt[50];
        sprintf(prompt, "Number of %s -> ", labels[i]);
        grades[i] = get_valid_int(prompt);
        total += grades[i];
    }

    printf("Results:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s: %.2f%%\n", labels[i], (grades[i] / (double)total) * 100);
    }
}

// Задача 7: Сума елементів масиву за стовпцями
void task_7() {
    int matrix[ROWS][COLS];
    int column_sums[COLS] = {0};

    printf("*** Input 2D Array and Calculate Column Sums ***\n");

    // Введення елементів масиву
    for (int i = 0; i < ROWS; i++) {
        printf("Enter elements of row %d (5 integers) -> ", i + 1);
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
            column_sums[j] += matrix[i][j];
        }
    }

    // Виведення результату
    printf("-------------------------------\n");
    printf("Column sums: ");
    for (int i = 0; i < COLS; i++) {
        printf("%d ", column_sums[i]);
    }
    printf("\n");
}
// Головна функція з меню
int main() {
    while (1) {
        printf("\n*** MENU ***\n");
        printf("1. Input array and calculate average\n");
        printf("2. Analyze student heights\n");
        printf("3. Find minimum value\n");
        printf("4. Average of non-zero elements\n");
        printf("5. Weekly temperature average\n");
        printf("6. Exam results analysis\n");
        printf("7. Column sums of a 2D array\n");
        printf("0. Exit\n");
        printf("Choose an option: ");

        int choice = get_valid_int("");
        switch (choice) {
        case 1:
            task_1();
            break;
        case 2:
            task_2();
            break;
        case 3:
            task_3();
            break;
        case 4:
            task_4();
            break;
        case 5:
            task_5();
            break;
        case 6:
            task_6();
            break;
        case 7:
            task_7();
            break;
        case 0:
            exit(0);
        default:
            printf("Invalid choice. Please select a valid option.\n");
        }
    }
}
