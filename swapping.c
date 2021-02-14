#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);  //consider two numbers as 10 and 20
    a = a + b;  //a = 10 + 20 = 30
    b = a - b;  //b = 30 - 20 = 10
    a = a - b;  //a = 30 - 10 = 20
    printf("Numbers after swapping: %d %d", a, b);
}
