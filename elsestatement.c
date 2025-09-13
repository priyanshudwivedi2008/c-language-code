#include<stdio.h>
int main (){
int age;
printf("Enter your age: ");
scanf("%d", &age);
if (age >18){
    printf("you are allowed to drive\n");
}
else if(age==18){
    printf("you aage is eual to 18\n");
}
else
printf("you are not allowed to drive\n");
return 0;
}  