#include <stdio.h>

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

float calculate_total_price(float notebooks_price, float pencils_price, float ruler_price, int notebooks_qty, int pencils_qty, int ruler_qty) {
    return (notebooks_price * notebooks_qty) + (pencils_price * pencils_qty) + (ruler_price * ruler_qty);
}

float calculate_notebook_cover_cost(float notebook_price, float cover_price, int quantity) {
    return (notebook_price + cover_price) * quantity;
}

void assign_value() {
    float x = 1.5;
    printf("Значення x: %.2f\n", x);
}

float reset_summa(float summa) {
    return 0;
}

void increase_by_one(int value) {
    value += 1;
    printf("Значення після збільшення: %d\n", value);
}

void decrease_by_two() {
    static int counter = 10;
    counter -= 2;
    printf("Значення counter після зменшення: %d\n", counter);
}

int main() {
    float notebooks_price, pencils_price, ruler_price;
    int notebooks_qty, pencils_qty, ruler_qty;

    printf("Введіть вартість одного зошита: ");
    if (scanf("%f", &notebooks_price) != 1) {
        printf("Помилка вводу. Введіть правильне число.\n");
        return 1;
    }
    clear_input_buffer();

    printf("Введіть кількість зошитів: ");
    if (scanf("%d", &notebooks_qty) != 1) {
        printf("Помилка вводу. Введіть правильне число.\n");
        return 1;
    }
    clear_input_buffer();

    printf("Введіть вартість одного олівця: ");
    if (scanf("%f", &pencils_price) != 1) {
        printf("Помилка вводу. Введіть правильне число.\n");
        return 1;
    }
    clear_input_buffer();

    printf("Введіть кількість олівців: ");
    if (scanf("%d", &pencils_qty) != 1) {
        printf("Помилка вводу. Введіть правильне число.\n");
        return 1;
    }
    clear_input_buffer();

    printf("Введіть вартість однієї лінійки: ");
    if (scanf("%f", &ruler_price) != 1) {
        printf("Помилка вводу. Введіть правильне число.\n");
        return 1;
    }
    clear_input_buffer();

    printf("Введіть кількість лінійок: ");
    if (scanf("%d", &ruler_qty) != 1) {
        printf("Помилка вводу. Введіть правильне число.\n");
        return 1;
    }
    clear_input_buffer();

    float total_purchase_price = calculate_total_price(notebooks_price, pencils_price, ruler_price, notebooks_qty, pencils_qty, ruler_qty);
    printf("Загальна вартість покупки: %.2f\n", total_purchase_price);

    float notebook_price, cover_price;
    int quantity;

    printf("Введіть вартість одного зошита: ");
    if (scanf("%f", &notebook_price) != 1) {
        printf("Помилка вводу. Введіть правильне число.\n");
        return 1;
    }
    clear_input_buffer();

    printf("Введіть вартість однієї обкладинки: ");
    if (scanf("%f", &cover_price) != 1) {
        printf("Помилка вводу. Введіть правильне число.\n");
        return 1;
    }
    clear_input_buffer();

    printf("Введіть кількість зошитів та обкладинок: ");
    if (scanf("%d", &quantity) != 1) {
        printf("Помилка вводу. Введіть правильне число.\n");
        return 1;
    }
    clear_input_buffer();

    float total_notebook_cost = calculate_notebook_cover_cost(notebook_price, cover_price, quantity);
    printf("Загальна вартість зошитів та обкладинок: %.2f\n", total_notebook_cost);

    assign_value();

    float summa = 101.0;
    printf("Початкове значення summa: %.2f\n", summa);
    summa = reset_summa(summa);
    printf("Значення summa після скидання: %.2f\n", summa);

    int number = 5;
    increase_by_one(number);
    increase_by_one(number);

    decrease_by_two();
    decrease_by_two();
    decrease_by_two();

    return 0;
}
