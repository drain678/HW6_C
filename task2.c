#include <stdio.h>
#include <stdlib.h>


char* join(char* words[], int n){
    int len_words = 0;
    for (int i = 0; i < n; i++) {
        len_words += strlen(words[i]) + 1; // считываем длину каждого слова и пробела и прибавляем к длинне всех слов, включая пробелы
    }

    char* str = malloc(len_words); // нужно выделить память под итоговую строку
    str[0] = '\0'; 

    for (int i = 0; i < n; i++) { // соединяем строки с итоговой строкой, чтобы получилась одна
        strcat(str, words[i]);
        strcat(str, " ");
    } 
    return str;
}

int main() {
    char* words[] = {"hello,", "you", ":)"};
    char* res = join(words, 3);
    printf("%s", res);
    free(res);
    return 0;
}