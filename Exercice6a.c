#include <stdio.h>
main()
{

 char CH[101]; 
 int I,J;     
 int PALI;   
              
 

 printf("Entrez une ligne de texte (max.100 caract�res) :\n");
 gets(CH);

 for(J=0; CH[J]; J++)
     ;
 J--;

 PALI=1;
 for (I=0 ; PALI && I<J ; I++,J--)
      if (CH[I] != CH[J])
          PALI=0;
 
  /* Affichage du r�sultat */
 if (PALI)
    printf("La cha�ne \"%s\" est un palindrome.\n", CH);
 else
    printf("La cha�ne \"%s\" n'est pas un palindrome.\n", CH);
 return 0;
}
