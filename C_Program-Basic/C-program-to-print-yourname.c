/*
Here, we use the 2 different approaces to print the name:
1. using printf()
2. using scanf()
*/

/*#include<stdio.h>
int main()
{
    //print name
    printf("Name : GeeksforGeeks");
    return 0;
}
*/

#include<stdio.h>

int main()
{
    char name[20];
    printf("Enter name: ");

    //user input will be taken here
    scanf("%s", name);
    printf("Your name is %s", name);
    return 0;
}