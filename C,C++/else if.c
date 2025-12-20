#include<stdio.h>
int main()
{
    int n;
    printf("Enter 1 for head 2 for tail");
    scanf("%d",&n);
    if(n==1)
        printf("it is head\n");
//printf("use { } with if or else if you have multiple statements otherwise it is not necessary");
    else if(n==2)printf("it is tail");
    else printf("incorrect input");

     return 0;

}
