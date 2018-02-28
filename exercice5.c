#include <stdio.h>
 
int main()
{

 char CH[101]; 
 char *P;       
 

 printf("Entrez une ligne de texte (max.100 caractères) :\n");
 gets(CH);

 for (P=CH; *P; P++)
      ;

 printf("La chaîne \"%s\" est formée de %d caractères.\n",
                                                     CH, P-CH);
 return 0;
}
