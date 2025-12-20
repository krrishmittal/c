#include<stdio.h>
int main(){
    int a,b;
    printf("enter the first number a:");
    scanf("%d",& a);
    printf("enter the second number b:");
    scanf("%d",& b);
    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    int div = a/b;
    printf("Addition of %d and %d is: %d\n",a,b,sum);
    printf("Subtraction of %d and %d is: %d\n",a,b,sub);
    printf("Multiplication of %d and %d is: %d\n",a,b,mul);
    printf("Division of %d and %d is: %d\n",a,b,div);
    return 0;
}
