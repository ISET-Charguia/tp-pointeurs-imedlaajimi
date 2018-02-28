#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int val = 10;
int *p,
*q ;
char *a,
*b;
char *a = "a";
p = &val; //p pointe vers val
q = p + 1;
printf("p pointe vers val de type int, q=p+1. \n");
printf("p: %p, q: %p, sizeof(int): %lu \n", p, q,sizeof(int));
printf("adr(q) - adr(p): %lu, q-p: %lu \n\n", (unsigned long)q - (unsigned long)p, q - p);
a = &aa; //p pointe vers val
b = a + 1;
printf("b pointe vers aa de type char, b=a+1. \n");
printf("p: %p, q: %p, sizeof(char): %lu \n", a, b,
sizeof
(
char
));
printf("adr(q) - adr(p): %lu, q-p: %lu \n\n", (unsigned long)b - (unsigned long)a, b - a);

}
