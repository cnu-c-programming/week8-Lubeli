#include <stdio.h>

int my_strcmp(const char *a, const char *b){
    int i = 0;
    while(a[i] != '\0' && a[i] == b[i])
            i++;
    return a[i] - b[i];
}

int main(){

    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));

    return 0;
}
