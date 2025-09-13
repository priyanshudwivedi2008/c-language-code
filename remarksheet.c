#include<stdio.h>
int main (){
int hindi;
char name[50];
char nameUni[50];
int rollnumber;

printf("Enter the University NAME \n");
fgets(nameUni,sizeof(nameUni),stdin);

printf ("Enter the roll number\n");
scanf("%d",&rollnumber);

printf("Enter the full name:\n");
fgets(name, sizeof(name), stdin);

printf ("Enter the marks of Hindi\n");
scanf ("%d",&hindi);
int english;
printf ("Enter the marks of English\n");
scanf ("%d",&english);
int maths;
printf ("Enter the marks of Maths\n");
scanf ("%d",&maths);
int physics;
printf ("Enter the marks of Physics\n");  
scanf ("%d",&physics);
int chemistry;
printf ("Enter the marks of Chemistry\n");
scanf ("%d",&chemistry);
int total=(hindi+english+maths+physics+chemistry);

printf ("Roll Number %d\n",rollnumber);

printf("-------------->  %s  <----------------\n\n",nameUni);
printf("NAME IS %s \n",name);
printf (" s.no.       subject       Marks\n" );

printf (" 1.          Hindi         %d\n",hindi);
printf (" 2.          English       %d\n",english);
printf (" 3.          Maths         %d\n",maths);
printf (" 4.          Physics       %d\n",physics);
printf (" 5.          Chemistry     %d\n",chemistry);
printf ("Total Marks of student is %d\n",total);
printf ("Percentage of student is %f\n", (float)total/5);
}