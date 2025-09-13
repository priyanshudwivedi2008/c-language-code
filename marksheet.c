#include<stdio.h>
int main (){
    int Hindi;
    printf("Enter your Hindi marks\n");
    scanf("%d",&Hindi);
    int English;
    printf("Enter your English marks\n");
    scanf("%d",&English);
    int Maths;
    printf("Enter your Maths marks\n");
    scanf("%d",&Maths);
    int physics;
    printf("Enter your physics marks\n");
    scanf("%d",&physics);
    int chemisty;
    printf("Enter your chemistry marks\n");
    scanf("%d",&chemisty);
    int total=("Hindi+English+Maths+physics+chemistry");

    printf ("S.V.M Inter College Agra Road Aligarh\n\n");
    printf("  S.no      Subject Name     Marks \n");
    
    printf("   1        Hindi              %d\n",Hindi);
    printf("   2        English            %d\n",English);
    printf("   3        Maths              %d\n",Maths);
    printf("   4        Physics            %d\n",physics);
    printf("   5        Chemisrty          %d\n",chemisty);
    printf("Total marks of student is %d\n",total); 
    printf("Total percentage of student is %f\n",(float)total/5);
    }
    