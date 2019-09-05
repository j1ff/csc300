#include <stdio.h>

int main( void )
{
    int num1;
    int num2;
    int sum;

    printf("Enter first integer\n");
    scanf("%d", &num1);

    printf("Enter second integer\n");
    scanf("%d", &num2);

    sum=num1+num2;
    printf("Sum is %d\n", sum);
}