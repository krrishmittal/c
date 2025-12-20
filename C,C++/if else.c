#include<stdio.h>
// is the person eligible to vote or not !!
int main ()
{
    int age;
    printf("Enter the age of the person");
    scanf("%d",&age);
    printf("The age of person is:%d",age);

    if(age>=18)
    {
        printf("\n you are eligible to vote");
    }
    else
    {
        printf("\n you are not eligible to vote");
    }

    return 0;
}



