#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet
 {
  int des[5]; 

 }; 


int nbDeFace4 (Jet jet)
{
  int somme4 = 0;
  int somme4a = 0;
    
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 4)
              {
                somme4 ++;
              }
              
        }
 
  if (somme4 != 0)
    somme4 *= 4;
    somme4a = somme4;
     
  return somme4a;
  
}



 int main ()
 {
      

      Jet luiz;

  luiz.des[0] = 1;
  luiz.des[1] = 4;
  luiz.des[2] = 4;
  luiz.des[3] = 4;
  luiz.des[4] = 4;
  
  printf ("*  (A) - Les valeurs de données avec la face 4 seront: %d\n", nbDeFace4 (luiz));
 }









