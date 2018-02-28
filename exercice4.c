#include<stdio.h>
#include<conio.h>
main()
{
int *p1=NULL,*p2=NULL,TA[10],i,j;
for(i=0;i<=10;i++)
{
printf(" entrez la valeur %d",i);
scanf("%d",&TA[i]);
}
printf(" le tableau simple est come suite : \n ");
for(i=0;i<=10;i++)
{
printf(" %d ");
 
}
printf(" le tableau inverse : \n ");
 
for(j=0;j<=10;j++)
{
p1=&TA[i];
p1=p2;
*p2=TA[1-1-i];
}
for(i=0;i<=10;i++)
{
printf(" %d ");
}
 
getch();
}
