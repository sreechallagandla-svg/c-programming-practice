//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main() {
    int number;
    printf("Entre a number:");
    scanf("%d",&number);
    if(number %2==0){
        printf("%d is even",number);
    }
    else{
        printf("%d is odd",number);
    }
}
/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/