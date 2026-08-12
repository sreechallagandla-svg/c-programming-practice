//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main() {
    float celsius;
    printf("Entre the celsius temperture: ");
    scanf("%f", &celsius);
    float fahrenheit = (celsius*9/5) + 32;
    printf("Fahrenheit=%.0f", fahrenheit);
    return 0;
}
/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/