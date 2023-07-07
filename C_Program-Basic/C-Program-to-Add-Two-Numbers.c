#include<stdio.h>

int main()
{
    int A, B, Sum = 0;

    printf("Enter two numbers A and B: \n");
    scanf("%d%d", &A, &B);

    //Calculate the addition of A and B

    Sum = A + B;

    printf("Sum of A and B is %d", Sum);

    return 0;
}