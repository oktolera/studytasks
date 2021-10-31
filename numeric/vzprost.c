#include <stdio.h>
#include <math.h>
//Ввести целые числа N и M. Определить являются ли они взаимно простыми, то есть не имеют общих делителей.

int main(){

    int m, n;
    m = n = 0;
    printf_s("Enter n and m\n");
    scanf_s("%d %d", &n, &m);
    int fact = 0;
    for (int i = 2; i < n + 1; i++){
        if( n % i == 0 && m % i == 0){
            ++fact;
        }
    }
    if (!fact){
        printf("No common factors found!");
    }else{
        printf("Found %d factors", fact);
    }
    return 0;
}