#include <stdio.h>
main()
{

 char CH[101]; 
 char *P1,*P2;  
  int PALI;  
           
 
 
 printf("Entrez une ligne de texte (max.100 caractères) :\n");
 gets(CH);

 for (P2=CH; *P2; P2++)
      ;
 P2--;

 PALI=1;
 for (P1=CH ; PALI && P1<P2 ; P1++,P2--)
      if (*P1 != *P2) PALI=0;
  /* Affichage du résultat */
 if (PALI)
    printf("La chaîne \"%s\" est un palindrome.\n", CH);
 else
    printf("La chaîne \"%s\" n'est pas un palindrome.\n", CH);
 return 0;
}
