#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main()
{   int i;
	int *a;
	int *b;
	int n;
	int m;
	
	printf("donner N:");
	scanf("%d",&n);
	printf("\n");
	
	printf("donner M:");
	scanf("%d",&m);
	
	a=malloc(sizeof(int)*1000);
	
	b=malloc(sizeof(int)*9);

//***Remplissage le tableau a*///
	
	for (i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&*(a+i-1));
	}

//*******affichage le tablleau a*/
		for (i=0;i<n;i++)
	{
		printf("%d|",*(a+i-1));
	
	}
	
	printf("\n");
//***Remplissage le tableau b*///
	
	
	for (i=0;i<m;i++)
	{
		printf("b[%d]:",i);
		scanf("%d",&*(b+i-1));
	}
	
	printf("\n");
//*******affichage le tablleau a*/
	for (i=0;i<m;i++)
	{
		printf("%d|",*(b+i-1));
	}
	
	
i=-1;	
do
{
	n=n+1;
	i=i+1;
	
	*(a+n-1)=*(b+i-1);
	
}
while (i<m);
	/***********le tableau apres l'ajout*///////
	
	printf("\nle tableau apres lajout\n");
	
	for (i=0;i<n;i++)
	{
		printf("%d|",*(a+i-1));
	}
	
	
	
}
