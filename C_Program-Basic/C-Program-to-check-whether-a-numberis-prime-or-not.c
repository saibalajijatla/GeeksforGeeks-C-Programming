#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n%2==0){
        printf("The number is not prime:");
    }
    else {
        printf("The number is a Prime Number\n", n);
    }
    return 0;
}