#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet
 {
  int des[5]; 

 }; 


int nbDeFace2 (Jet jet)
{
  int somme2 = 0;
  int somme2a = 0;
  
  
      
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 2)
              {
                somme2 ++;
              }
              
        }
 
  if (somme2 != 0)
    somme2 *= 2;
    somme2a = somme2;

      
  return somme2a;
  
}



 int main ()
 {
      

      Jet luiz;

  luiz.des[0] = 1;
  luiz.des[1] = 2;
  luiz.des[2] = 2;
  luiz.des[3] = 4;
  luiz.des[4] = 2;
  
  printf ("*  (B) - Les valeurs de données avec la face 2 seront: %d\n", nbDeFace2 (luiz));
 }









