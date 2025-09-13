#include<stdio.h>
int main (){
    int a=1000;
    int p, a1;
    int pin=0001;
    printf ("enter pin\n");
    scanf ("%d", & pin);
    if (pin==0001){
        do
        {
        printf ("1->check balance\n");
        printf ("2->withdraw\n");
        printf ("3->deposit\n");
        printf ("4->exit\n");
        printf ("enter your choice\n");
        scanf ("%d", & p);
        switch (p)
        {
            case 1:
            printf ("your balance is %d\n", a);
            break;
            case 2:
            printf ("enter your balance\n");
            scanf ("%d", & a1);
            a-=a1;
            printf ("your balance is %d--->>\n",a);
            break;
            case 3:
            printf ("Enter your balance\n");
            scanf("%d",&a1);
            a+=a1;
            printf ("your balance is %d--->>\n",a);
            //printf ("Your Balance is %d",a);
            break;
            case 4:
            printf ("thank you!:\n");
            break;
            default:
            printf ("WRONG PRESS\n");
            break;
            }
        }while (p!=4);
        }
    }