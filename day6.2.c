//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main() {
    int number;
    printf("Entre a number:");
    scanf("%d",&number);
    if(number>0){
        printf("%d is Positive",number);
    }
    else if(number<0){
        printf("%d is Negative",number);
    }
    else{
        printf("%d is Zero",number);
    }
}
/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/