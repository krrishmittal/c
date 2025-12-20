// WAP to check the entered character is upper,lower case, alphabet, a number or special character
#include <stdio.h>
int main()
{
    char s;
    printf("enter your character: ");
    scanf("%s",&s);
    if(s >= 65 && s <= 90)
    {
        printf("this is upper case letter");
    }
    else if(s >= 97 && s <= 122)
    {
        printf("this is lower case letter ");
    }
    else if(s >= 49 && s <= 57)
    {
        printf("this is number");
    }
    else
    {
        printf("given is special character");
    }

    return 0;
}
