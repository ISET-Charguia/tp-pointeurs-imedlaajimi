#include <stdio.h>
 
int main()
{

 char CH[101]; 
 char *P;       
 

 printf("Entrez une ligne de texte (max.100 caract�res) :\n");
 gets(CH);

 for (P=CH; *P; P++)
      ;

 printf("La cha�ne \"%s\" est form�e de %d caract�res.\n",
                                                     CH, P-CH);
 return 0;
}
