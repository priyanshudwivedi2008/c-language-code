#include<stdio.h>
int main(){
    int p;
    int i=1;
    printf("Enter the Any number \n");
    scanf("%d",&p);
    while(i<=10){
        printf("%d\n",i*p);
        i++;
    }
}