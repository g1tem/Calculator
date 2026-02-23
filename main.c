#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"

// Калькулятор на C

int main(void)
{
    int choice;
    
    do {
        print_header();
        printf("Что будем делать?\n1. Арифметические вычисления \n2. Побитовые логические вычисления\n3. Возведение в степень");
        printf("\n4. Факториал\n5. Тригонометрические вычисления\n6. Логарифмы\n7. НОК и НОД");
        printf("\n8. Системы счисления\n9. Площадь правильного n-угольника\n10. Корни квадратного уравнения\n0. Выход\n");
        if (scanf("%d", &choice) != 1)
        {
            printf("Введи норм число, а не букву\n\n");
            continue;
        }
        if (choice < 0 || choice > 11)
        {
            printf("Число должно быть от 0 до 10\n\n");
        }
        if (choice == 0) break;

        int a, b;
        int choice_2;

        switch(choice)
        {
            case 1: //арифметические действия
            {   
                printf("\033[H\033[J"); print_header();
                printf("Что будем делать?\n1. Сложение \n2. Вычитание\n3. Умножение\n4. Деление\n5. Остаток\n0. Выход\n");
                scanf("%d", &choice_2);
        
                switch (choice_2)
                {
                    case 1: //сумма
                    {   
                        printf("\033[H\033[J"); print_header();
                        printf("Введите 1ое число: "); scanf("%d", &a);
                        printf("Введите 2ое число: "); scanf("%d", &b);
                        printf("Результат: %d\n", sum(a, b));
                        pause(); printf("\033[H\033[J");
                        break;
                    }
                    case 2: //разность
                    {
                        printf("\033[H\033[J"); print_header();
                        printf("Введите уменьшаемое число: "); scanf("%d", &a);
                        printf("Введите вычитаемое число: "); scanf("%d", &b);
                        printf("Результат: %d\n", sub(a, b));
                        pause(); printf("\033[H\033[J");
                        break;
                    }
                    case 3: //умножение
                    {
                        printf("\033[H\033[J"); print_header();
                        printf("Введите умножаемое число: "); scanf("%d", &a);
                        printf("Введите множитель: "); scanf("%d", &b);
                        printf("Результат: %d\n", mul(a, b));
                        pause(); printf("\033[H\033[J");
                        break;  
                    }
                    case 4: //деление
                    {
                        printf("\033[H\033[J"); print_header();
                        printf("Введите делимое число: "); scanf("%d", &a);
                        printf("Введите делитель: "); scanf("%d", &b);
                        if (b == 0)
                        {
                            printf("Делитель не должен быть равен 0\n");
                            pause(); printf("\033[H\033[J");
                            break;
                        }
                        printf("Результат: %d\n", my_div(a, b));
                        pause(); printf("\033[H\033[J");
                        break;  
                    }
                    case 5: //остаток
                    {
                        printf("\033[H\033[J"); print_header();
                        printf("Введите делимое число: "); scanf("%d", &a);
                        printf("Введите делитель: "); scanf("%d", &b);
                        if (b == 0)
                        {
                            printf("Делитель не должен быть равен 0\n");
                            pause(); printf("\033[H\033[J");
                            break;
                        }
                        printf("Результат: %d\n", rem(a, b));
                        pause(); printf("\033[H\033[J");
                        break;
                    }

                    case 0: 
                    { 
                        printf("\033[H\033[J");
                        break;
                    }
                } break; //выоход из choice_2
            }

            case 2: // Побитывые логические вычисления
            {
                printf("\033[H\033[J"); print_header();
                printf("Что будем делать?\n1. Побитовое И \n2. Побитовое ИЛИ\n3. Побитовый сдвиг влево\n4. Побитовый сдвиг вправо\n0. Выход\n");
                scanf("%d", &choice_2);
                switch (choice_2)
                {
                    case 1: //побитовое И
                    {   
                        printf("\033[H\033[J"); print_header();
                        printf("Введите 1ое число: "); scanf("%d", &a);
                        printf("Введите 2ое число: "); scanf("%d", &b);
                        printf("Результат: %d\n", a & b);
                        pause(); printf("\033[H\033[J");
                        break;
                    }
                    case 2: //побитовое ИЛИ
                    {
                        printf("\033[H\033[J"); print_header();
                        printf("Введите 1ое число: "); scanf("%d", &a);
                        printf("Введите 2ое число: "); scanf("%d", &b);
                        printf("Результат: %d\n", a | b);
                        pause(); printf("\033[H\033[J");
                        break;
                    }
                    case 3: //побитовый сдвиг влево
                    {
                        printf("\033[H\033[J"); print_header();
                        printf("Введите 1ое число: "); scanf("%d", &a);
                        printf("Введите 2ое число: "); scanf("%d", &b);
                        printf("Результат: %d\n", a << b);
                        pause(); printf("\033[H\033[J");
                        break;
                    }
                    case 4: //побитовый сдвиг вправо
                    {
                        printf("\033[H\033[J"); print_header();
                        printf("Введите 1ое число: "); scanf("%d", &a);
                        printf("Введите 2ое число: "); scanf("%d", &b);
                        printf("Результат: %d\n", a >> b);
                        pause(); printf("\033[H\033[J");
                        break;
                    }
                    case 0: {
                        printf("\033[H\033[J");
                        break;
                    }
                } break; 
            }

            case 3: //степень числа
            {
                printf("\033[H\033[J"); print_header();
                double x, y;
                printf("Введите основание: "); scanf("%lf", &x);
                printf("Введите степень: "); scanf("%lf", &y);
                printf("Результат: %.2lf\n", pow(x,y));
                pause(); printf("\033[H\033[J");
                break;
            }

            case 4: //факториал
            {
                printf("\033[H\033[J"); print_header();
                long long x; //со знаком для проверки
                printf("Для вычисления факториала, введите число: "); 
                if (scanf("%lld", &x) != 1) {
                    printf("Нужно ввести число");
                    pause(); printf("\033[H\033[J");
                    break;
                }
                if (x < 0)
                {
                    printf("Введенное число для вычисления факториала должно быть больше или равно НУЛЮ\n");
                    pause(); printf("\033[H\033[J");
                    break;
                }
                if (x > 20)
                {
                    printf("Число слишком большое (max 20)");
                    pause(); printf("\033[H\033[J");
                }
                else {
                    unsigned long long y = (unsigned long long)x;
                    printf("Факториал %llu = %llu", y, fac(y));
                    pause(); printf("\033[H\033[J");
                }
                break;
            }

            case 5: //Тригонометрические выражения
            {
                printf("\033[H\033[J"); print_header();
                printf("Что будем делать?\n1. Синус \n2. Косинус\n3. Тангенс\n4. Катангенс\n0. Выход\n");
                scanf("%d", &choice_2);
                switch (choice_2)
                {
                    case 1: //синус
                    {
                        printf("\033[H\033[J"); print_header();
                        double x;
                        printf("Введите градус: "); scanf("%lf", &x);
                        printf("Синус %.1lf градусов равен %.2lf\n", x, MySin(x));
                        pause(); printf("\033[H\033[J");
                        break;
                    }
                    case 2: //косинус
                    {
                        printf("\033[H\033[J"); print_header();
                        double x;
                        printf("Введите градус: "); scanf("%lf", &x);
                        printf("Косинус %.1lf градусов равен %.2lf\n", x, MyCos(x));
                        pause(); printf("\033[H\033[J");
                        break;
                    }
                    case 3: //тангенс
                    {
                        printf("\033[H\033[J"); print_header();
                        double x;
                        printf("Введите градус: "); scanf("%lf", &x);
                        printf("Тангенс %.1lf градусов равен %.2lf\n", x, MyTan(x));
                        pause(); printf("\033[H\033[J");
                        break;
                    }
                    case 4: //катангенс
                    {
                        printf("\033[H\033[J"); print_header();
                        double x;
                        printf("Введите градус: "); scanf("%lf", &x);
                        printf("Катангенс %.1lf градусов равен %.2lf\n", x, MyCtan(x));
                        pause(); printf("\033[H\033[J");
                        break;
                    }
                    case 0: 
                    { 
                        printf("\033[H\033[J");
                        break;
                    }
                } break;
            }

            case 6: //логорифмы
            {
                printf("\033[H\033[J"); print_header();
                printf("Что будем делать?\n1. Натуральный логорфим\n2. Логорифм по основанию\n0. Выход\n");
                scanf("%d", &choice_2);
                switch(choice_2)
                {
                    case 1: //натуральный логорфим
                    {
                        printf("\033[H\033[J"); print_header();
                        double x;
                        printf("Введите аргумент: "); scanf("%lf", &x);
                        printf("Натуральный логорифм ln(%.2lf) = %.2lf\n", x, log(x));
                        pause(); printf("\033[H\033[J");
                        break;
                    }
                    case 2: //логорифм по основанию
                    {
                        printf("\033[H\033[J"); print_header();
                        double x;
                        double y;
                        printf("Введите основание логорифма: "); scanf("%2.lf", &x);
                        printf("Введите аргумент: "); scanf("%2.lf", &y);
                        printf("Логорифм %2.lf по основанию %2.lf равен %2.lf\n", &y, &x, log(y)/log(x));
                        pause(); printf("\033[H\033[J");
                        break;
                    }
                    case 0: 
                    { 
                        printf("\033[H\033[J");
                        break;
                    }
                } break;
            }

            case 7: //НОК и НОД
            {
                printf("\033[H\033[J"); print_header();
                printf("Что будем делать?\n1. НОД\n2. НОК\n0. Выход\n");
                scanf("%d", &choice_2);
                switch(choice_2)
                {
                    case 1: //НОД
                    {
                        printf("\033[H\033[J"); print_header();
                        int a, b;
                        printf("Введите 1ое число: "); scanf("%d", &a);
                        printf("Введите 2ое число: "); scanf("%d", &b);
                        printf("НОД чисел %d и %d = %d\n", a, b, NOD(a, b));
                        pause(); printf("\033[H\033[J");
                        break;
                    }
                    case 2: //НОК
                    {
                        printf("\033[H\033[J"); print_header();
                        int a, b;
                        printf("Введите 1ое число: "); scanf("%d", &a);
                        printf("Введите 2ое число: "); scanf("%d", &b);
                        printf("НОК чисел %d и %d = %d\n", a, b, NOK(a, b));
                        pause(); printf("\033[H\033[J");
                        break;
                    }
                    case 0: 
                    { 
                        printf("\033[H\033[J");
                        break;
                    }
                } break;
            }

            case 8: //системы счисления
            {
                printf("\033[H\033[J"); print_header();
                int choice, i;
                printf("В какую систему будем переводить?\n1. Двоичная\n2. Восьмиричная\n3. Шестнадцетиричная\n0. Выход\n"); scanf("%d", &choice);
                printf("Введите переводимое число: "); scanf("%d", &i);
                if (choice == 1) binary(i);
                else if (choice == 2) printf("%o\n", i);
                else if (choice == 3) printf("%X\n", i);
                pause(); printf("\033[H\033[J");
                break;
            }

            case 9: //площадь правильного n-угольника
            {
                printf("\033[H\033[J"); print_header();
                int n = 0;
                double a, area = 0.0;
                printf("Введите количество сторон: "); scanf("%d", &n);
                printf("Введите длину стороны: "); scanf("%lf", &a);
                if (n < 3) printf("Это не многоугольник...");
                else {
                    area = (n * pow(a, 2)) / (4 * tan(PI / n));
                    printf("Площадь %d-угольника = %.2f\n", n, area);
                }
                pause(); printf("\033[H\033[J");
                break;
            }

            case 10: //корни квадратного уравнения
            {
                printf("\033[H\033[J"); print_header();
                double a, b, c, d, x1, x2;
                printf("Введите коэффициенты a, b, c: \n");
                scanf("%lf %lf %lf", &a, &b, &c);
                if (a == 0) {
                    printf("При a=0 уравнение становится линейным.\n");
                } else {
                    d = b * b - 4 * a * c; //дискриминант
                    if (d > 0) {
                        x1 = (-b + sqrt(d)) / (2 * a);
                        x2 = (-b - sqrt(d)) / (2 * a);
                        printf("Два корня: x1 = %.2f, x2 = %.2f\n", x1, x2);
                    } else if (d == 0) {
                        x1 = -b / (2 * a);
                        printf("Один корень: x = %.2f\n", x1);
                    } else {
                        // Для комплексных корней
                        double realPart = -b / (2 * a);
                        double imagPart = sqrt(-d) / (2 * a);
                        printf("Корни комплексные: %.2f + %.2fi и %.2f - %.2fi\n", 
                                realPart, imagPart, realPart, imagPart);
                    }
                    }   
                    pause(); printf("\033[H\033[J");
                    break;
            }


        } //скобка от choice
    } while (choice != 0);

    return 0;
}
