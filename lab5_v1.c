#include <stdio.h>
#include <math.h>
#include <windows.h>


int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    // Task 1: Car trip cost calculation
    float distance, fuelConsumption, fuelPrice, tripCost;
    printf("Обчислення вартості поїздки на автомобілі\n");
    printf("Відстань (км) -> ");
    scanf("%f", &distance);
    printf("Витрата бензину (літрів на 100 км пробігу) -> ");
    scanf("%f", &fuelConsumption);
    printf("Ціна літра бензину (грн.) -> ");
    scanf("%f", &fuelPrice);
    tripCost = (distance / 100) * fuelConsumption * fuelPrice;
    printf("Вартість поїздки: %.2f грн.\n\n", tripCost);

    // Task 2: Deposit income calculation
    float depositAmount, interestRate, income, totalAmount;
    int depositPeriod;
    printf("Обчислення доходу за вкладом\n");
    printf("Сума вкладу (грн.) -> ");
    scanf("%f", &depositAmount);
    printf("Термін вкладу (місяців) -> ");
    scanf("%d", &depositPeriod);
    printf("Відсоткова ставка (річних) -> ");
    scanf("%f", &interestRate);
    income = depositAmount * (interestRate / 100) * (depositPeriod / 12.0);
    totalAmount = depositAmount + income;
    printf("-------------------------------------\n");
    printf("Прибуток: %.2f грн.\n", income);
    printf("Сума після закінчення терміну вкладу: %.2f грн.\n\n", totalAmount);

    // Task 3: Time conversion (minutes to hours and minutes)
    int totalMinutes, hours, minutes;
    printf("Введіть величину проміжку часу (у хвилинах) -> ");
    scanf("%d", &totalMinutes);
    hours = totalMinutes / 60;
    minutes = totalMinutes % 60;
    printf("%d хвилин – це %d год. %d хв.\n\n", totalMinutes, hours, minutes);

    // Task 4: Convert decimal number to currency format
    float number;
    int hryvnias, kopecks;
    printf("Перетворення числа у грошовий формат\n");
    printf("Введіть дробове число -> ");
    scanf("%f", &number);
    hryvnias = (int)number;
    kopecks = (int)((number - hryvnias) * 100);
    printf("%.2f грн. - Це %d грн. %d коп.\n\n", number, hryvnias, kopecks);

    // Task 5: Weight conversion (pounds to kilograms)
    float pounds, kilograms, grams;
    printf("Перерахунок ваги з фунтів у кілограми\n");
    printf("Введіть вагу в фунтах -> ");
    scanf("%f", &pounds);
    kilograms = floor(pounds * 0.45359237);
    grams = (pounds * 0.45359237 - kilograms) * 1000;
    printf("%.1f фунт(и) - це %.0f кг %.0f г\n\n", pounds, kilograms, grams);

    // Task 6: Triangle area calculation
    float x1, y1, x2, y2, x3, y3, area;
    printf("Обчислення площі трикутника\n");
    printf("Введіть координати кутів (числи розділяйте пробілом):\n");
    printf("x1,y1 -> ");
    scanf("%f %f", &x1, &y1);
    printf("x2,y2 -> ");
    scanf("%f %f", &x2, &y2);
    printf("x3,y3 -> ");
    scanf("%f %f", &x3, &y3);
    area = fabs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2);
    printf("Площа трикутника: %.2f кв. см\n", area);



    float distance1, minutes1, seconds, totalSeconds, speed;
    int minPart;
    float secPart;

    // Input
    printf("Обчислення швидкості бігу\n");
    printf("Введіть довжину дистанції (метрів) -> ");
    scanf("%f", &distance);
    printf("Введіть час (хвилин. секунд) -> ");
    scanf("%f", &minutes1);

    // Split minutes into integer minutes and decimal seconds
    minPart = (int)minutes1;
    secPart = (minutes1 - minPart) * 100;

    // Calculate total time in seconds
    totalSeconds = minPart * 60 + secPart;
    seconds = totalSeconds;

    // Convert speed to km/h
    speed = (distance / 1000) / (totalSeconds / 3600);

    // Output
    printf("Дистанція: %.0f\n", distance1);
    printf("Час: %d хв %.0f сек = %.0f сек\n", minPart, secPart, seconds);
    printf("Швидкість: %.2f км/год\n", speed);


    return 0;
}
