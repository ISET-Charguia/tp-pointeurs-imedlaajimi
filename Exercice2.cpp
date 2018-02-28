#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()

{
int a[]={12,23,34,45,56,67,78,89,90};

int *p;
p=a;


printf("a :%d",*(p+2)) ;
printf("\n");
printf ("b :%d",&p+1) ;
printf("\n");
printf ("c :%d",*(&a[4]-3 ));
printf("\n");  
printf ("d :%d",*(a+3))  ;
printf("\n");
printf ("e :%d",&a[7]-p);
printf("\n");
printf ("f :%d" ,p+(*p-10)) ;
printf("\n");  
printf ("g %d",*(p+*(p+8)-a[7]));   



}
