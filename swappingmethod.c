#include<stdio.h>
int main(){
    int a=2;
    int b=6;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("After Swapping-->\n");
    // int c=a;
    // a=b;
    // b=c;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\n",a);
    printf("b=%d",b);
}