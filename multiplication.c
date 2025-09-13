#include<stdio.h>
#include<math.h>
int main () {
    int num1;
    int num2;
    printf ("enter first number:");
    scanf("%d",&num1);
    printf ("enter second number:");
    scanf("%d",&num2);
    int result = num1 * num2;
    printf ("result ：%d * %d = %d\n",num1,num2,result);
}