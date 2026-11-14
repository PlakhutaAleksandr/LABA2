# Домашнее задание к работе 2

## Условие задач

Фруктовый магазине продает яблоки поштучно по 1 руб., груши по 2 руб., апельсины по 3 руб. В первые два дня недели: продано понедельник - х яблок, у груш, z апельсинов; вторник - х яблок, у груш, г апельсинов. На-пишите программу, которая, будет вычислять, на какую сумму продал магазин фруктов в каждый из этих дней.

## 1. Алгоритм и блок-схема.

### Алгоритм

1. Начало

2. Инициализация констант (цен):

price_apple = 1 — цена одного яблока.

price_pear = 2 — цена одной груши.

price_orange = 3 — цена одного апельсина.

3. Объявление и инициализация переменных для хранения количества продаж:

Для понедельника: apples_mon, pears_mon, oranges_mon (значения равны 0).

Для вторника: apples_tue, pears_tue, oranges_tue (значения равны 0).

4. Ввод исходных данных:

Запросить и с помощью функции scanf считать значения продаж за понедельник.

Запросить и считать значения продаж за вторник.

5. Вычисление результатов:

Вычислить сумму выручки за понедельник: sum_mon = (apples_mon * price_apple) + (pears_mon * price_pear) + (oranges_mon * price_orange).

Вычислить сумму выручки за вторник: sum_tue = (apples_tue * price_apple) + (pears_tue * price_pear) + (oranges_tue * price_orange).

6. Вывод результатов:

Вывести на экран заголовок и рассчитанные суммы за понедельник и вторник.

7. Ожидание завершения:

Очистить буфер ввода и дождаться нажатия клавиши Enter пользователем.

8. Конец

### Блок-схема

<img width="522" height="1049" alt="image" src="https://github.com/user-attachments/assets/0d146883-7308-4e02-b152-5ff4b73bd153" />
(https://drive.google.com/file/d/1Pg3q0Ecq7IGSyiZpWIS1OcalUCfn3XDj/view?usp=sharing)

## 2. Реализация программы

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
## 3. Результаты работы программы

--- Результаты ---

Сумма за понедельник: 47 руб.

Сумма за вторник: 26 руб.

## 4. Информация о разработчике

Плахута Александр Андреевич, бТИИ-262
