#include<stdio.h>
int main(){
    int p;
    printf("Enter the ANy number \n");
    scanf("%d",&p);
    for (int  i = 10; i >=1; i--){
        printf("  %d * %d = %d\n",p,i,i*p);
    }

}