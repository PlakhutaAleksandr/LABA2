
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int price_apple = 1;
    int price_pear = 2;
    int price_orange = 3;

    int apples_mon = 0;
    int pears_mon = 0;
    int oranges_mon = 0;

    int apples_tue = 0;
    int pears_tue = 0;
    int oranges_tue = 0;

    printf("Введите продажи за понедельник (яблоки, груши, апельсины): ");
    scanf("%d %d %d", &apples_mon, &pears_mon, &oranges_mon);

    printf("Введите продажи за вторник (яблоки, груши, апельсины): ");
    scanf("%d %d %d", &apples_tue, &pears_tue, &oranges_tue);

    int sum_mon = (apples_mon * price_apple) + (pears_mon * price_pear) + (oranges_mon * price_orange);
    int sum_tue = (apples_tue * price_apple) + (pears_tue * price_pear) + (oranges_tue * price_orange);

    printf("\n--- Результаты ---\n");
    printf("Сумма за понедельник: %d руб.\n", sum_mon);
    printf("Сумма за вторник: %d руб.\n", sum_tue);

    return 0;
}
