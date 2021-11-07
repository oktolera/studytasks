#include <stdio.h>
#define MAXLINE 1000

//Упражнение 1.19. Напишите функцию reverse(s), размещающую символы в строке s в обратном порядке.
//Примените ее при написании программы, которая каждую вводимую строку располагает в обратном порядке

 int count(char line[], int MAX);
 void reverse(char line[], int MAX);

int main(){
    int len = 0;
    char input[MAXLINE];

    while ( (len = count(input, MAXLINE)) > 0){
        if (len > 80){
          printf("\n>>This string is longer than 80 characters, length - %d :\n%s\n", len, input);

            reverse(input, len);
            printf("Reversed: %s\n\n", input);
        }
    }


    return 0;
}

int count(char inp[], int lim){
    int i, c;
    for( i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++){
       inp[i] = c;
    }
    inp[i] = '\0';
    return i;
}


void reverse(char inp[], int len){
    for(int i = 0; i < (len - 1)/2; i++){
        char m = inp[i];
        inp[i] = inp[len - 1 - i];
        inp[len - 1 - i] = m;
    }
}
