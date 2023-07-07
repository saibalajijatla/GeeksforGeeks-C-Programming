/*
#include<stdio.h>

int main()
{
    float num1, num2, product;
    printf("Enter first number:");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    product = num1 * num2;
    printf("Product of num1 and num2 is: %f", product);
    return 0;
}
*/

// using functions
#include<stdio.h>
float multiply(float a, float b){
    return a*b;
}

int main(){
    float a = 23.22,b = 22.23,product;
    product = multiply(a,b);

    printf("Product of entered numbers is %f",product);
}