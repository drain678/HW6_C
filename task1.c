#include <stdio.h>



int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int j = a;
    while ((j % d != c) && (j <= b)) { // нужно узнать первое число с помощью цикла while, которое будет кратно d, но меньше b
        j++;
    }
    for (int i = j; i <= b; i += d){ // дальше просто вывести все такие числа с шагом d
        printf("%d ", i);
    }
    return 0;
} 