#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));  
    int num = rand() % 9000 + 1000;  
    printf("Random number between 1 and 10: %d\n", num);
   
    for(int i = 1;i <= 10000; i++) {
        printf("%d\n",i); 
        if(i==num){
            printf("Unlock ");
            break;
        }
        
    }
}





