#include <stdio.h>

// printf("\033[H\033[J");
// pause(); printf("\033[H\033[J"); print_header();


void print_header() {
    printf(" _____________________ \n");
    printf("|  _________________  |\n");
    printf("| | C-CALC     v1.0 | |\n");
    printf("| |_________________| |\n");
    printf("|  ___ ___ ___   ___  |\n");
    printf("| | 7 | 8 | 9 | | + | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 4 | 5 | 6 | | - | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 1 | 2 | 3 | | x | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | . | 0 | = | | / | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("|_____________________|\n\n");
}

void pause() {
    printf("\nНажмите Enter для продолжения...");
    while(getchar() != '\n');
    getchar();
}

int sum(int a, int b){ //сумма
    return a + b;
};

int sub(int a, int b){ //вычитание
    return a - b;
};

int mul(int a, int b){ //умножение 
    return a * b;
};

int my_div(int a, int b){ //деление
    return a / b;   
};

int rem(int a, int b){ //остаток
    return a % b;
};

long long unsigned fac(long long unsigned a) { //факториал
    int res = 1;
    for (int i = 1; i < a; i++) {
        res *= i;
    }
    return res;
}

double PI = 3.141592; //константа для числа PI

double MySin(double deg) { //синус
    double radians = deg * (PI / 180.0);
    return sin(radians);
}

double MyCos(double deg) { //косинус
    double radians = deg * (PI / 180.0);
    return cos(radians);
}

double MyTan(double deg) { //тангенс
    double radians = deg * (PI / 180.0);
    return tan(radians);
}

double MyCtan(double deg) { //катангенс
    double radians = deg * (PI / 180.0);
    return 1.0/tan(radians);
}

int NOD(int a, int b) { //НОД
    int temp_a = a;
    int temp_b = b;
    while (temp_b != 0) {
        temp_a %= temp_b;
        int temp = temp_a;
        temp_a = temp_b;
        temp_b = temp;
    }
    return temp_a;
}

int NOK(int a, int b) { //НОК
    int temp_a = a;
    int temp_b = b;
    while (temp_b != 0) {
        temp_a %= temp_b;
        int temp = temp_a;
        temp_a = temp_b;
        temp_b = temp;
    }
    int nod = temp_a;
    return (b / nod) * a;
}

void binary(int n) { //перевод в бинарную СС
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1) printf("1");
        else printf("0");
    }
}