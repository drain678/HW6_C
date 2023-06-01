#include <stdio.h>


int sumDigits(int *num){
    int i = 10, sum = 0;
    while (*num != 0){ // нахождение суммы цифр числа
        sum += *num % i;
        *num /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sumDigits(&n));
    return 0;
}