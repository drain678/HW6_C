#include <stdio.h>

int main() {
    int f1 = 0, f2 = 1, n, f3;
    scanf("%d", &n);
    if (n <= 1){
        printf("%d", n);
        return 0;
    }
    for (int i = 2; i <= n; i++){ // вычисленни числа фибоначчи
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    printf("%d", f2);
    return 0;
}