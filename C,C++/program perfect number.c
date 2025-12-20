// WAP to check the entered character is upper case/lower case alphabet, a number or a special character
#include <stdio.h>
int main()
{
    int number, sum = 0, i;

    printf("Enter a Number: ");
    scanf("%d", &number);
    for (i = 1; i <=number/2 ; i++)
    {
        if(number%i == 0)
        {
            sum = sum+i;
        }
    }
    if (sum == number)
        printf("%d is perfect number", number);
    else
        printf("%d is not a perfect number", number);
    return 0;
}
