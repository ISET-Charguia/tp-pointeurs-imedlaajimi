#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void remp(int t[],int n)
{
	for (i=0;i<n;i++)
	{
		printf("b[%d]:",i);
		scanf("%d",&*(b+i-1));
	}
}
void aff(int t[],int n)
{
	int a=&t[];
for (i=0;i<n;i++)
{
printf("%d|",*(a+i-1));
	
}
}

void inverset(int t[],int n)
{int *p1=NULL,*p2=NULL;
for(j=0;j<=n;j++)
{
p1=&TA[i];
p1=p2;
*p2=TA[1-1-i];
}
for(i=0;i<=10;i++)
{
printf(" %d ");
}
 





void permu(int *a ,int *b)
{
int *aux;
aux=malloc(sizeof(int)*1);	
*aux=*a;
*a=*b;
*b=*aux;
}


int main (void)
{int *a;int *b;
int t[];

a=malloc(sizeof(int)*1);
b=malloc(sizeof(int)*1);
printf("a:");
scanf("%d",&a);
printf("\n");

printf("b:");
scanf("%d",&b);
permu(&a,&b);

printf("a: %d b: %d",a,b);
printf("\n");

remp(t[],a);
inverst(t[],a);
aff(t[],a);	
}

	
	
	
	
	
	
	
	
	
	
}
