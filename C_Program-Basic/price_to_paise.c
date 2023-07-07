#include<stdio.h>
int main()
{
    float price;
    int paise;

    printf("Enter the price in decimal form: ");
    scanf("%f", &price);

    //convert the price to paise
    paise = price *100;

    printf("The price in paise is : %d paise\n", paise);

    return 0;
}