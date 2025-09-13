#include<stdio.h>
int main(){
   int a;
    printf("enter any integer\n");
   scanf("%d", &a);
   if (a % 2 == 0){
      printf("numer is even");
   }
   else{
      printf("number is odd");
   }
}