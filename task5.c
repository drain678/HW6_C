#include <stdio.h>


int ispolnitel(int num){
    int a = 0, b = 0;
    // первое условие
    a = (num / 100) * ((num % 100) / 10); 
    b = ((num % 100) / 10) * (num % 10);
    // второе условие
    if (a >= b) {
        return a * 10 + b;
    } else {
        return b * 10 + a;
    }
    
}


int main(){
    int n;
    scanf("%d", &n);
    printf("%d", ispolnitel(n));
    return 0;
}