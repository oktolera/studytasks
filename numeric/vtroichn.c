#include <stdio.h>
#include <math.h>
//Дано натуральное n, напечатать в троичной системе счисления все числа от нуля до n.

int main(){
    int n = 0;
    printf("Enter n value\n");
    scanf_s("%d", &n);
    for(int i = 0; i < n + 1; i++){
        int new  = 0;
        int num =  i;
        int j = 0;

        do{
       new += (num % 3) * pow(10, j);
       num = num / 3;
       j++;
       }while(num > 0);
        printf("Value:%d %d\n", i, new );

    }
}
