#include<stdio.h>
int main(int argc, char *argv[])
{
char name[30];
int m1, m2, m3, m4, m5;
int total;
float average;

printf("Enter student name:");
scanf("%s", name);

printf("\nEnter 5 subject marks:\n");

printf("Tamil:");
scanf("%d", &m1);

printf("English:");
scanf("%d", &m2);

printf("Maths:");
scanf("%d", &m3);

printf("Science:");
scanf("%d", &m4);

printf("Computer Science:");
scanf("%d", &m5);

total = m1 + m2 + m3 + m4 + m5;
average = total/5.0;

printf("\nstudent name: %s", name);
printf("\ntotal marks: %d", total);
printf("\naverage: %2f", average);

if(m1<35||m2<35||m3<35||m4<35||m5<35)
{
printf("\nresult: FAIL");
}
else
{
printf("\nresult: PASS");

if(average>=90)
printf("\ngrade: A+");
else if(average>=80)
printf("\ngrade: A");
else if(average>=70)
printf("\ngrade: B");
else if(average>=60)
printf("\ngrade: C");
else
printf("\ngrade: D");
}
return 0;
}


