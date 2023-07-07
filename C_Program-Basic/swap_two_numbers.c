#include<stdio.h>
int main()
{
    int S,B;
    printf("Enter value of S: ");
    scanf("%d", &S);
    printf("Enter Value of B: ");
    scanf("%d", &B);

    int temp = S;
    S= B;
    B = temp;

    printf("\nAfter Swapping : S = %d,B =%d",S,B );
    return 0;
}