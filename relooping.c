#include<stdio.h>
// int i=10;
// void data(int p){
//     while (i>=1){
//         printf("%d *%d = %d\n",p,i,i*p);
//         i--;
//     }
// }
// void check1(int k){
//     if(k%2==0){
//         printf("even");
//     }
//     else{
//         printf("ODD");
//     }
// }
// void add(int p1,int p2){
//     int s=(p1+p2);
//     printf("%d\n",(s));
//     check1(s);

// }


int add(int p,int p2){
    return p2+p;
}
int sub(int p,int p2){
    return p2-p;
}

int main(){
    int p;
    printf("%d\n",add(2,4));
    printf("%d",sub(2,4));
    // printf("Enter the any number \n");
    // scanf("%d", &p);
    // data(p);
    // add(2,4);
}