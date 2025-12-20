#include<stdio.h>
int main()
{
    int n, i; // declare a variable
    printf (" Enter a number to generate the table: ");
    scanf (" %d", &n); // take a positive number from the user

    printf ("\n Table of %d", n);
    // use for loop to iterate the number from 1 to 10
    for ( i = 1; i <= 10; i++)
    {
        printf("\n %d * %d = %d", n, i, (n*i));
    }
    return 0;
}


